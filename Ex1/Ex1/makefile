CC=gcc
FLAGS=-Wall -g
ar=ar -rc
bco=basicClassification.o
aclo=advancedClassificationLoop.o
acro=advancedClassificationRecursion.o
bcc=basicClassification.c
aclc=advancedClassificationLoop.c
acrc=advancedClassificationRecursion.c

all: loops recursives recursived loopd mains maindloop maindrec

loops: S1
	$(ar) libclassloops.a $(bco) $(aclo)
S1: $(bcc) $(aclc)
	$(CC) $(FLAGS) -c $(bcc) -c $(aclc)

recursives: S2
	$(ar) libclassrec.a $(bco) $(acro)
S2: $(bcc) $(acrc)
	$(CC) $(FLAGS) -c $(bcc) -c $(acrc)

recursived: S3
	$(CC) $(bco) $(acro) -shared -o libclassrec.so
S3: $(bcc) $(acrc)
	$(CC) $(FLAGS) -c $(bcc) -c $(acrc)

loopd: S4
	$(CC) $(bco) $(aclo) -shared -o libclassloops.so
S4: $(bcc) $(aclc)
	$(CC) $(FLAGS) -c $(bcc) -c $(aclc)

mains:
	$(CC) main.c -L. libclassrec.a -o mains -lm -I.

maindloop:
	$(CC) main.c -L. libclassrec.a libclassloops.so -o maindloop -lm -I.

maindrec:
	$(CC) main.c -L. libclassrec.a libclassloops.so libclassrec.so -o maindrec -lm -I.

.PHONY: clean
clean:
	rm -f all *.o *.a *.so