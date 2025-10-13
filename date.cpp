#include "date.h"
#include <iostream>

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
	std::cout << month << " " << day << ", " << year << std::endl;
} // end printDate
