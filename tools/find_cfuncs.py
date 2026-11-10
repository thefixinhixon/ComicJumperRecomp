#!/usr/bin/env python3
"""List lis/addi-built code addresses passed as r4 to a given call target (e.g. lua_pushcclosure),
and whether codegen defined a function there. usage: find_cfuncs.py image.bin gen_dir [target_hex]"""
import struct, sys, re, glob
img = open(sys.argv[1], 'rb').read(); B = 0x82000000
defined = set()
for f in glob.glob(sys.argv[2] + '/*.cpp'):
    defined |= {int(m, 16) for m in re.findall(r'DEFINE_REX_FUNC\(sub_([0-9A-Fa-f]{8})\)', open(f).read())}
TEXT = (0x82120000, 0x827b2a00 + 0x4b38)
w = lambda a: struct.unpack_from('>I', img, a - B)[0]
calls = {}
for a in range(TEXT[0], TEXT[1], 4):
    x = w(a)
    if x >> 26 == 18 and x & 1:  # bl
        d = x & 0x3FFFFFC
        if d & 0x2000000: d -= 0x4000000
        t = (a + d) & 0xFFFFFFFF
        # look back up to 8 insns for r4 = lis/addi
        r4 = None; lis = {}
        for b in range(a - 32, a, 4):
            y = w(b); op = y >> 26
            if op == 15 and (y >> 16) & 31 == 0: lis[(y >> 21) & 31] = y & 0xFFFF
            elif op == 14 and (y >> 21) & 31 == 4 and (y >> 16) & 31 in lis:
                imm = y & 0xFFFF; imm = imm - 0x10000 if imm & 0x8000 else imm
                r4 = ((lis[(y >> 16) & 31] << 16) + imm) & 0xFFFFFFFF
        if r4 and TEXT[0] <= r4 < TEXT[1]:
            calls.setdefault(t, set()).add(r4)
want = int(sys.argv[3], 16) if len(sys.argv) > 3 else None
for t, fns in sorted(calls.items(), key=lambda kv: -len(kv[1])):
    if want and t != want: continue
    missing = sorted(f for f in fns if f not in defined)
    if want or len(fns) >= 20:
        print(f"callee {t:08X}: {len(fns)} code-pointer args, {len(missing)} not defined by codegen")
        if want: print(' '.join(f'{m:08X}' for m in missing))
