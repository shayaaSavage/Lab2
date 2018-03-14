CC=gcc
CFLAGS=-I.
all: stat din
stat: stComp stLink
stComp:
	ar rcs ./stat/libStat.a  ./stat/swap.o  ./stat/revert_string.o
stLink:
	$(CC)  main.o  -Lstat -lStat -o ./stat/stLinked

din: dComp dLink
dComp:
	$(CC) -shared ./din/swap.o ./din/revert_string.o -o ./din/libDin.so
dLink:
	$(CC)  main.o  -Ldin -lDin -o ./din/dLinked
