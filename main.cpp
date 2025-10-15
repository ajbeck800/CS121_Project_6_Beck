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
	vector<Student*> students;
	loadStudents(students);
	menu(students);
	return 0;
} // end main

void loadStudents(vector<Student*>& students){
	ifstream file("students.csv");
	string line;
	
	while (getline(file, line)) {
		Student* s = new Student();
		s->init(line);
		students.push_back(s);
	} // end while
	file.close();
} // end loadStudents

void printStudents(const vector<Student*>& students){
	for (const auto& student : students) {
		student->printStudent();
		cout << "-------------------" << endl;
	} // end for
} // end printStudents

void showStudentsNames(const vector<Student*>& students){
	for (const auto& student : students) {
		cout << student->getLastFirst() << endl;
	} // end for
} // end showStudentsNames

void findStudent(const vector<Student*>& students){
	std::cout << "Enter last name of student: ";
	std::string lastNameRequest;
	std::cin >> lastNameRequest;
	
	for (const auto& student : students) {
		if (student->getLastName().find(lastNameRequest) != std::string::npos) {
			student->printStudent();
			cout << "-------------------" << endl;
		} // end if
	} // end for
} // end findStudent

void delStudent(vector<Student*>& students){
	for (auto student : students) {
		delete student;
	} // end for
	students.clear();
} // end delStudent

void menu(){
	std::string choice;
	
	while (true) {
		std::cout << "\nMenu:\n";
		std::cout << "0. Quit\n";
		std::cout << "1. Print all student names\n";
		std::cout << "2. Print all student data\n";
		std::cout << "3. Find a student\n";
		std::cout << "Select 0-3: ";
		std::cin >> choice;
		
		if (choice == "0") {
			delStudents(students);
			break;
		} // end if
		else if (choice == "1") {
			showStudentNames(students);
		} // end else if
		else if (choice == "2") {
			printStudents(students);
		} // end else if
		else if (choice == "3") {
			findStudent(students);
		} // end else if
		else {
			cout << "Invalid selection. Try again.\n";
		} // end else
	} // end while
} // end menu
