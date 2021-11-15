#David D'Alessandro
#makefile for ch1s1.c

output : ch1s1.o
	gcc -o output ch1s1.o

ch1s1.o : ch1s1.c
	gcc -c ch1s1.c

.PHONY : clean run

clean :
	rm -f ch1s1.o *~ output

run :
	./output
