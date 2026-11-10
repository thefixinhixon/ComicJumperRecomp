#!/usr/bin/env python3
"""Dump XEX2 optional headers. usage: xexhdr.py default.xex"""
import struct, sys
d = open(sys.argv[1], 'rb').read()
u32 = lambda o: struct.unpack_from('>I', d, o)[0]
u16 = lambda o: struct.unpack_from('>H', d, o)[0]
flags, pe_off, _, sec_off, nhdr = u32(4), u32(8), u32(12), u32(16), u32(20)
print(f"module_flags=0x{flags:x} pe_data_off=0x{pe_off:x} sec_info=0x{sec_off:x} opt_headers={nhdr}")
NAMES = {0x2FF: 'RESOURCE_INFO', 0x3FF: 'FILE_FORMAT_INFO', 0x5FF: 'DELTA_PATCH', 0x405: 'BASE_REFERENCE',
         0x5FF: 'BOUNDING_PATH', 0x10001: 'ORIGINAL_BASE_ADDRESS', 0x10100: 'ENTRY_POINT', 0x10201: 'IMAGE_BASE_ADDRESS',
         0x103FF: 'IMPORT_LIBRARIES', 0x18002: 'CHECKSUM_TIMESTAMP', 0x18102: 'ENABLED_FOR_CALLCAP',
         0x183FF: 'ORIGINAL_PE_NAME', 0x200FF: 'STATIC_LIBRARIES', 0x20104: 'TLS_INFO', 0x20200: 'DEFAULT_STACK_SIZE',
         0x20301: 'DEFAULT_FS_CACHE_SIZE', 0x20401: 'DEFAULT_HEAP_SIZE', 0x28002: 'PAGE_HEAP_SIZE_AND_FLAGS',
         0x30000: 'SYSTEM_FLAGS', 0x40006: 'EXECUTION_INFO', 0x40201: 'TITLE_WORKSPACE_SIZE',
         0x40310: 'GAME_RATINGS', 0x40404: 'LAN_KEY', 0x406FF: 'XBOX360_LOGO', 0x407FF: 'MULTIDISC_MEDIA_IDS',
         0x408FF: 'ALTERNATE_TITLE_IDS', 0x40801: 'ADDITIONAL_TITLE_MEMORY', 0xE10402: 'EXPORTS_BY_NAME'}
hdrs = {}
for i in range(nhdr):
    k, v = u32(24 + i*8), u32(28 + i*8)
    hdrs[k] = v
    print(f"  {k:08x} {NAMES.get(k, '?'):24} 0x{v:08x}")
def blob(k):
    o = hdrs[k]; return o, u32(o)
if 0x3FF in hdrs:
    o, sz = blob(0x3FF)
    enc, comp = u16(o+4), u16(o+6)
    print(f"FILE_FORMAT: encryption={['none','normal'][enc] if enc<2 else enc} compression={ {0:'none',1:'basic',2:'normal(LZX)',3:'delta'}.get(comp, comp)}")
    if comp == 2: print(f"  lzx window_size=0x{u32(o+8):x}")
    if comp == 1: print(f"  basic blocks={(sz-8)//8}")
if 0x183FF in hdrs:
    o, sz = blob(0x183FF); print("ORIGINAL_PE_NAME:", d[o+4:o+sz].split(b'\0')[0].decode())
if 0x40006 in hdrs:
    o = hdrs[0x40006]
    media, ver, base, tid = u32(o), u32(o+4), u32(o+8), u32(o+12)
    print(f"EXECUTION: media=0x{media:08x} version={ver>>28}.{(ver>>24)&15}.{(ver>>8)&0xFFFF}.{ver&255} title_id=0x{tid:08x} disc={d[o+18]}/{d[o+19]}")
if 0x200FF in hdrs:
    o, sz = blob(0x200FF)
    for p in range(o+4, o+sz, 16):
        name = d[p:p+8].split(b'\0')[0].decode()
        a, b, c, e = u16(p+8), u16(p+10), u16(p+12), u16(p+14)
        print(f"  STATICLIB {name:12} {a}.{b}.{c}.{e & 0x7FFF}")
if 0x103FF in hdrs:
    o, sz = blob(0x103FF)
    strsz, nlib = u32(o+4), u32(o+8)
    names = [s.decode() for s in d[o+12:o+12+strsz].split(b'\0') if s]
    p = o + 12 + strsz
    for _ in range(nlib):
        lsz = u32(p)
        ver, minver, nameidx, nimp = u32(p+0x1C), u32(p+0x20), u16(p+0x24), u16(p+0x26)
        fv = lambda v: f"{v>>28}.{(v>>24)&15}.{(v>>8)&0xFFFF}.{v&255}"
        print(f"  IMPORT {names[nameidx]:14} v{fv(ver)} (min {fv(minver)}) records={nimp}")
        p += lsz
# security info
img_size = u32(sec_off + 4)
load_addr = u32(sec_off + 0x110)
print(f"SECURITY: image_size=0x{img_size:x} load_address=0x{load_addr:08x} region=0x{u32(sec_off+0x178):08x} media_flags=0x{u32(sec_off+0x17c):08x}")
