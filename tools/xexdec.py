#!/usr/bin/env python3
"""Decrypt + decompress (basic only) a retail XEX2 to its memory image. usage: xexdec.py in.xex out.bin"""
import struct, sys
from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes
RETAIL = bytes.fromhex('20B185A59D28FDC340583FBB0896BF91')
d = open(sys.argv[1], 'rb').read()
u32 = lambda o: struct.unpack_from('>I', d, o)[0]
pe_off, sec, n = u32(8), u32(16), u32(20)
hdrs = {u32(24+i*8): u32(28+i*8) for i in range(n)}
ff = hdrs[0x3FF]; ffsz = u32(ff)
enc, comp = struct.unpack_from('>HH', d, ff+4)
assert comp == 1, f"compression {comp} unsupported"
key = Cipher(algorithms.AES(RETAIL), modes.ECB()).decryptor().update(d[sec+0x150:sec+0x160])
payload = d[pe_off:]
payload = payload[:len(payload) & ~15]
if enc == 1:
    payload = Cipher(algorithms.AES(key), modes.CBC(b'\0'*16)).decryptor().update(payload)
out, p = bytearray(), 0
for o in range(ff+8, ff+ffsz, 8):
    dsz, zsz = struct.unpack_from('>II', d, o)
    out += payload[p:p+dsz]; p += dsz; out += b'\0'*zsz
img = u32(sec+4)
out = out[:img] + b'\0'*max(0, img-len(out))
assert out[:2] == b'MZ', 'bad decrypt (no MZ)'
open(sys.argv[2], 'wb').write(out)
print(f"{sys.argv[2]}: {len(out):#x} bytes")
