#!/usr/bin/env python3
"""Minimal STFS (Xbox 360 LIVE/CON/PIRS) extractor. usage: stfs.py PKG OUTDIR [--list]"""
import os, struct, sys

pkg, out = sys.argv[1], sys.argv[2]
listonly = '--list' in sys.argv
f = open(pkg, 'rb')
def rd(off, n):
    f.seek(off); return f.read(n)

hdr_size = struct.unpack('>I', rd(0x340, 4))[0]
vd = rd(0x379, 0x24)
sep = vd[2]
ft_count = struct.unpack('<H', vd[3:5])[0]
ft_block = int.from_bytes(vd[5:8], 'little')
sex = (~sep) & 1
base = (hdr_size + 0xFFF) & 0xFFFFF000
step0 = 0xAB if sex == 0 else 0xAC

def backing(b):
    r = (((b + 0xAA) // 0xAA) << sex) + b
    if b < 0xAA: return r
    if b < 0x70E4: return r + (((b + 0x70E4) // 0x70E4) << sex)
    return (1 << sex) + r + (((b + 0x70E4) // 0x70E4) << sex)

def blk_off(b): return (backing(b) << 12) + base

def l0_hash_block(b):
    if b < 0xAA: return 0
    n = (b // 0xAA) * step0 + (((b // 0x70E4) + 1) << sex)
    if b // 0x70E4 == 0: return n
    return n + (1 << sex)

def next_block(b):
    a = (l0_hash_block(b) << 12) + base + (b % 0xAA) * 0x18
    e = rd(a, 0x18)
    return int.from_bytes(e[0x15:0x18], 'big')

def chain(start, count, consecutive):
    b = start
    for _ in range(count):
        yield b
        b = b + 1 if consecutive else next_block(b)

# file table
raw = b''
for b in chain(ft_block, ft_count, False):
    raw += rd(blk_off(b), 0x1000)
entries = []
for i in range(0, len(raw), 0x40):
    e = raw[i:i+0x40]
    fl = e[0x28]
    if fl & 0x3F == 0: continue
    name = e[:fl & 0x3F].decode('latin1')
    blocks = int.from_bytes(e[0x29:0x2C], 'little')
    start = int.from_bytes(e[0x2F:0x32], 'little')
    path = struct.unpack('>h', e[0x32:0x34])[0]
    size = struct.unpack('>I', e[0x34:0x38])[0]
    entries.append(dict(idx=len(entries), name=name, dir=bool(fl & 0x80), cons=bool(fl & 0x40),
                        blocks=blocks, start=start, path=path, size=size))

def fullpath(e):
    parts = [e['name']]
    while e['path'] != -1:
        e = entries[e['path']]; parts.append(e['name'])
    return '/'.join(reversed(parts))

for e in entries:
    p = fullpath(e)
    if listonly or e['dir']:
        if listonly: print(f"{'D' if e['dir'] else 'F'} {e['size']:>11} {p}")
        if e['dir'] and not listonly: os.makedirs(os.path.join(out, p), exist_ok=True)
        continue
    dst = os.path.join(out, p); os.makedirs(os.path.dirname(dst), exist_ok=True)
    left = e['size']
    with open(dst, 'wb') as o:
        for b in chain(e['start'], e['blocks'], e['cons']):
            n = min(0x1000, left)
            o.write(rd(blk_off(b), n)); left -= n
            if left <= 0: break
print(f"hdr=0x{hdr_size:x} sep={sep} ft={ft_block}+{ft_count} entries={len(entries)}", file=sys.stderr)
