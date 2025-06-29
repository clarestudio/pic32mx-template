# $Id: config.mk,v 1.14 2025/06/28 19:44:18 clare Exp $

TOOLDIR=/usr/cross
TOOLBINDIR=$(TOOLDIR)/bin
TOOLTARGET=mipsel-elf

CPP=$(TOOLBINDIR)/$(TOOLTARGET)-cpp
CC=$(TOOLBINDIR)/$(TOOLTARGET)-gcc
LD=$(TOOLBINDIR)/$(TOOLTARGET)-ld
OBJDUMP=$(TOOLBINDIR)/$(TOOLTARGET)-objdump
OBJCOPY=$(TOOLBINDIR)/$(TOOLTARGET)-objcopy
SIZE=$(TOOLBINDIR)/$(TOOLTARGET)-size

ARCH=-march=m4k -msoft-float
COPT?=-O3
CFLAGS+=${ARCH} ${COPT} -Wall
LDFLAGS+=${ARCH} -T ${LDSCRIPT} -Wl,-Map=${LDMAP} -nostdlib
LDARCH=elf32-little
ADDRFIX=

PROG?=
SRCS?=
OBJS?=${ASRCS:%.S=%.o} ${CSRCS:%.c=%.o}

all: ${PROG}.elf ${PROG}.dump ${PROG}.hex

clean:
	rm -f ${PROG}.elf ${PROG}.hex ${PROG}.dump
	rm -f ${OBJS} ${LDMAP}

${PROG}.elf: ${OBJS}
	${CC} -o $@ ${OBJS} ${LDFLAGS}

${PROG}.hex: ${PROG}.elf
	${OBJCOPY} ${ADDRFIX} -O ihex $< $@

${PROG}.dump: ${PROG}.elf
	rm -f $@
	@echo "===> dump all-headers" >> $@
	${OBJDUMP} -x $< >> $@
	@echo "===> dump disassembled" >> $@
	${OBJDUMP} -d $< >> $@
	@echo "===> size" >> $@
	${SIZE} -d $< >> $@

.SUFFIXES: .S .c .o

.c.o:
	${CC} ${CFLAGS} -o $@ -c $<

.S.o:
	${CC} ${CFLAGS} -o $@ -c $<

# this is just an example
#write:
#	pic32prog -d /dev/dtyU0 -w ${PROG}.hex
