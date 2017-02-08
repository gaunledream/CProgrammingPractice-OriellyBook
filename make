File: calc1/makefile.unx
#-----------------------------------------------#
#
#
Makefile for Unix systems
#
using a GNU C compiler
#
#-----------------------------------------------#
CC=gcc
CFLAGS=-g
#
# Compiler flags:
#	-g -- Enable debugging
calc: calc.c
	$(CC) $(CFLAGS) -o calc1 calc1.c
clean:
	rm -f calc