# $Id: Makefile,v 1.14 2018/03/21 21:29:19 clare Exp $
# This makefile was written for GNU make.

PROG=hello-pic32mx210
CSRCS=main.c
ASRCS=start.S
LDSCRIPT=ldscript/target.x
LDMAP=$(PROG).map
CFLAGS=-I./include -D__PIC32MX210__

include config.mk
include release.mk
