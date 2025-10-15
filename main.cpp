#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include "date.h"
#include "address.h"
#include "student.h"

void loadStudents(students);
void printStudents(students vector);
void showStudentNames(students vector);
void findStudent(students vector);
void delStudents(students vector);
void menu();

int main(){
	std::ifstream inFile;
	std::string currentLine;
	std::stringstream converter;
	
	inFile.open("students.csv");
	while (getline(inFile, currentLine)){
		converter.clear();
		converter.str(currentLine);
 	} // end while
 	inFile.close();
} // end main

void loadStudents(students){
	std::ifstream inFile;

	inFile.open("students.csv");

} // end loadStudents

void printStudents(students){
        
} // end printStudents

void showStudentsNames(students){

} // end showStudentsNames

void findStudent(students){

} // end findStudent

void delStudent(students){

} // end delStudent

void menu(){

} // end menu
