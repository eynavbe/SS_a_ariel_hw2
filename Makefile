CC=gcc
AR=ar
OBGECT_LIB_CLASS_REC_A= my_mat.o
OBGECT_LIB_CLASS_REC_SO= my_mat.o
FLAGS=-g -Wall
all: recursives loopd connections maindrec


recursives: libclassrec.a
loopd:libclassrec.so

libclassrec.a:$(OBGECT_LIB_CLASS_REC_A)
	$(AR) -rcs libclassrec.a $(OBGECT_LIB_CLASS_REC_A)

libclassrec.so:$(OBGECT_LIB_CLASS_REC_SO) 
	$(CC) -shared -o libclassrec.so $(OBGECT_LIB_CLASS_REC_SO)

my_mat.o: my_mat.c my_mat.h 
	$(CC) $(FLAGS) -c my_mat.c

connections: main.o libclassrec.a 
	$(CC) $(FLAGS) -o connections main.o libclassrec.a
maindrec: main.o libclassrec.so
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so connections maindrec