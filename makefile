game: student.o date.o address.o main.o
	g++ -g student.o date.o address.o main.o -o game

main.o: student.h date.h address.h main.cpp
	g++ -c -g main.cpp

student.o: student.h student.cpp
	g++ -c -g student.cpp

date.o: student.h date.h date.cpp
	g++ -c -g date.cpp

address.o: student.h address.h address.cpp
        g++ -c -g address.cpp

clean:
	rm *.o
	rm game

run: game
	./game

debug: game
	gdb game
