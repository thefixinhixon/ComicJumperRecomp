#!/usr/bin/env bash
# ppcdis.sh IMAGE START END : disassemble big-endian PPC from a 0x82000000-based image with llvm-mc
img=$1; s=$(($2)); e=$(($3))
python3 -I -c "
import sys,struct
d=open('$img','rb').read()
for a in range($s,$e,4):
    w=d[a-0x82000000:a-0x82000000+4]; print(' '.join('0x%02x'%b for b in w))
" | llvm-mc -triple=powerpc64-unknown-unknown -mcpu=pwr7 --disassemble 2>/dev/null | grep -v '^\s*\.text' | awk -v s=$s '{printf "%08X: %s\n", s+4*(NR-1), $0}'
