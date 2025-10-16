#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include "date.h"
#include "address.h"
#include "student.h"

void testAddress();
void testDate();
void testStudent();
void loadStudents(vector<type> para_name);
void printStudents(vector<type> para_name);
void showStudentNames(vector<type> para_name);
void findStudent(vector<type> para_name);
void delStudents(vector<type> para_name);
void menu();

int main(){
	std::cout << "Hello!" << std::endl;
	testAddress();
	testDate();
	testStudent();
	
	std::vector<Student*> students;
	loadStudents(students);
	menu();

	return 0;
} // end main

void testAddress(){
  Address a;
  a.init("123 W Main St", "Muncie", "IN", "47303");
  a.printAddress();
} // end testAddress

void testDate(){
 Date d;
 d.init("01/27/1997");
 d.printDate();
} // end testDate

void testStudent(){
  std::string studentString = "Danielle,Johnson,32181 Johnson Course Apt. 389,New Jamesside,IN,59379,02/17/2004,05/15/2027,65";
  Student* student = new Student();
  student->init(studentString);
  student->printStudent();
  std::cout << std::endl;
  std::cout << student->getLastFirst();
  delete student;
} // end testStudent

void loadStudents(std::vector<Student*>& students){
	std::fstream inFile;
	std::string currentLine;
	
	inFile.open("students.csv")
	while (getline(inFile, currentLine)) {
		Student* s = new Student;
		s->init(currentLine);
		students.push_back(s);
	} // end while
	inFile.close();
} // end loadStudents

void printStudents(std::vector<Student*>& students){
	for (Student* student: students) {
		student->printStudent();
	} // end for
} // end printStudents

void showStudentsNames(std::vector<Student*>& students){
	for (Student* student: students) {
		std::cout << student->getLastFirst();
		std::cout << ", " << student->getCreditHours() << std::endl;
	} // end for
} // end showStudentsNames

void findStudent(std::vector<Student*>& students){
	std::cout << "Enter last name of student: ";
	std::string lastNameRequest;
	std::cin >> lastNameRequest;

	for (Student* student: students) {
		std::string lName = student->getLastName();
		if (lName.find(lastNameRequest) != std::string::npos) {
			student->printStudent();
		} // end if
	} // end for
} // end findStudent

void delStudent(std::vector<Student*>& students){
	for (Student* student: students) {
		delete student;
	} // end for
	students.clear();
} // end delStudent

void menu(){
	std::string selection;

	bool keepGoing = true;

	while (keepGoing == true) {
		std::cout << "0) quit" << std::endl;
		std::cout << "1) print all student names" << std::endl;
		std::cout << "2) print all student data" << std::endl;
		std::cout << "3) find a student" << std::endl;
		std::cout << "Select 0-3: ";
		std::cin >> selection;
		
		if (selection == "0") {
			delStudents(students);
			keepGoing = false;
		} // end if
		else if (selection == "1") {
			showStudentNames(students);
		} // end else if
		else if (selection == "2") {
			printStudents(students);
		} // end else if
		else if (selection == "3") {
			findStudent(students);
		} // end else if
		else {
			std::cout << "Invalid selection. Select 0-3: " << std::endl;
		} // end else
	} // end while
} // end menu
