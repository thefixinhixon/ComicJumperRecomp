#!/usr/bin/env python3
"""Map PPC function addresses from image A to image B by masked byte signatures.
usage: sigmap.py A.bin B.bin addr [addr...]   (images based at 0x82000000)"""
import struct, sys, re
BASE = 0x82000000
A, B = open(sys.argv[1], 'rb').read(), open(sys.argv[2], 'rb').read()

def mask(word):
    op = word >> 26
    if op == 18: return word & 0xFC000003, 0xFC000003           # b/bl
    if op == 16: return word & 0xFFFF0003, 0xFFFF0003           # bc
    if op in (14, 15, 24, 25, 32, 34, 36, 38, 40, 48, 50, 52, 54, 58, 62):  # addi/lis/ori/oris/loads/stores w/ disp
        return word & 0xFFFF0000, 0xFFFF0000
    return word, 0xFFFFFFFF

def sig(img, off, n):
    parts = []
    for i in range(n):
        w = struct.unpack_from('>I', img, off + 4*i)[0]
        v, m = mask(w)
        if m == 0xFFFFFFFF: parts.append(re.escape(struct.pack('>I', w)))
        else:
            bs = struct.pack('>I', v); mb = struct.pack('>I', m)
            parts.append(b''.join(re.escape(bytes([b])) if k == 0xFF else (b'.' if k == 0 else
                b'[' + b''.join(re.escape(bytes([x])) for x in range(256) if x & k == b) + b']')
                for b, k in zip(bs, mb)))
    return re.compile(b''.join(parts), re.S)

for a in sys.argv[3:]:
    a = int(a, 16); off = a - BASE
    res = None
    for n in (8, 12, 16, 24, 32, 48):
        hits = [m.start() for m in sig(A, off, n).finditer(B) if m.start() % 4 == 0]
        res = (n, hits)
        if len(hits) <= 1: break
    n, hits = res
    tag = 'UNIQUE' if len(hits) == 1 else ('NONE' if not hits else f'{len(hits)} hits')
    print(f"{a:08X} -> {' '.join(f'{BASE+h:08X}' for h in hits[:4])}  [{tag}, {n} insns]")
