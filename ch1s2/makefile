#David D'Alessandro
#makefile for ch1s2

output : ch1s2.o
	gcc -o output ch1s2.o

ch1s2.o : ch1s2.c
	gcc -c ch1s2.c

.PHONY : clean run


clean :
	rm -f *.o *~ output

run:
	./output
