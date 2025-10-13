#include "student.h" 
#include "address.h"
#include "date.h"
#include <iostream>
#include <sstream>

Student::Student(){
	studentString = "";
	firstName = "";
	lastName = "";
	birthDate = "";
	gradDate = "";
	address = "";
	creditHours = 0;
} // end constructor

void Student::init(std::string studentString){
	std::stringstream ss;
	ss.str(studentString);
	
	std::string street;
	std::string city;
	std::string state;
	std::string zip;
	std::string tBirthDate;
	std::string tGradDate;
	std::string tCreditHours;

	getline(ss, firstName, ',');
	getline(ss, lastName, ',');
	getline(ss, street, ',');
	getline(ss, city, ',');
	getline(ss, state, ',');
	getline(ss, zip, ',');
	getline(ss, tBirthDate, ',');
	getline(ss, tGradDate, ',');
	getline(ss, tCreditHours);

	address->init(street, city, state, zip);
	birthDate->init(tBirthDate);
	gradDate->init(tGradDate);

	ss.clear();
	ss.str(tCreditHours);
	ss >> creditHours;
} // end init

void Student::printStudent(){
	std::cout << "Birth: ";
	birthDate->printDate();
	std::cout << "Grad: ";
	gradDate->printDate();

	std::cout << "Credits: " << creditHours << std::endl;
	std::cout << "____________________________________";
	std::cout << std::endl;
} // end printStudent

std::string Student::getLastFirst(){
	std::stringstream ss;
	ss.clear();
	ss << lastName << ", " << firstName;
	return ss.str();
} // end getLastFirst

std::string Student::getLastName(){
	return lastName;
} // end getLastName

std::string Student::getFirstName(){
        return firstName;
} // end getFirstName

int Student::getCreditHours(){
        return creditHours;
} // end getCreditHours
