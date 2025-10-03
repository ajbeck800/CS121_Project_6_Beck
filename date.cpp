#include "date.h"
#include <iostream>

Date::Date(){
	dateString = "";
	month = tMonth;
	date = tDate;
	year = tYear;
} // end constructor

void Date::init(std::string dateString){
	Date::dateString = dateString;
	std::stringstream ss;
	std::string tMonth;
	std::string tDate;
	std::string tYear;
} // end init

void Date::printDate(){
	std::cout << tMonth << " " << tDate << ", " << tYear << std::endl;
} // end printDate
