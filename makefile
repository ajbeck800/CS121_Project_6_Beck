heapStudents: main.o date.o address.o student.o
	g++ -g critter.o car.o main.o -o game

main.o: main.cpp date.h
	g++ -g

date.o: 


address.o: 


student.o: 

run: heapStudents
	./heapStudents

clean:
	rm *.o
	rm heapStudents

debug: heapStudents
	gdb heapStudents
