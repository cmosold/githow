# 
# Makefile for livepatch
# $Id: Makefile 330 2004-11-03 11:38:02Z ukai $
# Copyright (C) 2004 Fumitoshi UKAI <ukai@debian.or.jp>
# All rights reserved.
# This is free software with ABSOLUTELY NO WARRANTY.
#
# You can redistribute it and/or modify it under the terms of 
# the GNU General Public License version 2.
#

BINUTILS_DIR=/home/public/study/binutils/target_x86/build

CFLAGS=-Wall -O2 -g -I$(BINUTILS_DIR)/include

all: livepatch

livepatch: livepatch.o
	$(CC) -o $@ $<  -L$(BINUTILS_DIR)/lib -lbfd -liberty -lopcodes

fixup: fixup.o
	$(CC) -o $@ $< -L$(BINUTILS_DIR)/lib -lbfd -liberty -lopcodes

bfd: bfd.o
	$(CC) -o $@ $< -L$(BIN_UTILS_DIR)/lib -lbfd -liberty -lopcodes

clean:
	-rm -f *.o
	-rm -f livepatch fixup bfd

# EOF

