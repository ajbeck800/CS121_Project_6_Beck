heapStudents: main.o date.o address.o student.o
	g++ -g main.o date.o address.o student.o -o heapStudents

main.o: main.cpp date.h address.h student.h
	g++ -c -g main.cpp

date.o: date.cpp date.h
	g++ -c -g date.cpp

address.o: address.cpp address.h
	g++ -c -g address.cpp

student.o: student.cpp student.h
	g++ -c -g student.cpp

run: heapStudents
	./heapStudents

clean:
	rm *.o
	rm heapStudents

debug: heapStudents
	gdb heapStudents

valgrind:
	valgrind ./heapStudents
