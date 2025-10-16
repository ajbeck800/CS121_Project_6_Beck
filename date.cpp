#include "date.h"
#include <iostream>
#include <sstream>
#include <string>

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
	std::string tMonth;
	std::string tDay;
	std::string tYear;

	if (month == 1){
		tMonth = "January";
	} // end if
	else if (month == 2) {
		tMonth = "February";
	} // end else if
	else if (month == 3) {
                tMonth = "March";
        } // end else if
	else if (month == 4) {
                tMonth = "April";
        } // end else if
	else if (month == 5) {
                tMonth = "May";
        } // end else if
	else if (month == 6) {
                tMonth = "June";
        } // end else if
	else if (month == 7) {
                tMonth = "July";
        } // end else if
	else if (month == 8) {
                tMonth = "August";
        } // end else if
	else if (month == 9) {
                tMonth = "September";
        } // end else if
	else if (month == 10) {
                tMonth = "October";
        } // end else if
	else if (month == 11) {
                tMonth = "November";
        } // end else if
	else if (month == 12) {
                tMonth = "December";
        } // end else if
	
	std::ostringstream str1;
	str1 << day;
	tDay = str1.str();

	std::ostringstream str2;
        str2 << year;
        tYear = str2.str();

	dateString = tMonth + " " + tDay + ", " + tYear;
	std::cout << dateString << std::endl;
} // end printDate
