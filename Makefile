MAIN=main.c
LIB=dnsrato.h dnsrato.c
LIBOBJ=dnsrato.o
EXEC=main
LFLAG=-c
FLAG=-o
CC=gcc
TRASH=*.*.gch
CLEAN=rm -f

default:all

libs:clean
	$(CC) $(LIB) $(LFLAG)

all:libs
	$(CC) $(LIBOBJ) $(MAIN) $(FLAG) $(EXEC)

clean:
	$(CLEAN) $(LIBOBJ) $(EXEC) $(TRASH)
