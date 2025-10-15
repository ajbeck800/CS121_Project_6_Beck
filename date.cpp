#include "date.h"
#include <iostream>
#include <sstream>

std::string currentLine;
std::stringstream converter;
std::string tMonth, tDay, tYear;

Date::Date(){
	dateString = "";
	month = 0;
	day = 0;
	year = 0;
} // end constructor

void Date::init(std::string dateString){
	Date::dateString = dateString;
	std::string month = month;
	std::string day = day;
	std::string year = year;
} // end init

void Date::printDate(){
	std::cout << dateString << std::endl;
} // end printDate
