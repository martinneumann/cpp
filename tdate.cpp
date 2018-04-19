#include <ctime>
#include <iostream>
#include <iomanip>

#include "tdate.h"

short TDate::getDay() {
	return day;
}

short TDate::getMonth() {
	return month;
}

short TDate::getYear() {
	return year;
}

void TDate::print() {
	// prints the date: DD.MM.YYYY with leading zeros
	std::cout 
		<< std::setfill('0') << std::setw(2) << this->day << "." 
		<< std::setfill('0') << std::setw(2) << this->month << "." 
		<< this->year;
}

TDate::TDate() {
	std::time_t t = std::time(0);   // get time now
	std::tm* now = std::localtime(&t); // create tm struct from t
	this->day = now->tm_mday;   
	this->month = now->tm_mon+1;
	this->year = now->tm_year+1900;
}

TDate::TDate(short day, short month, short year) {
	// months with 31 days - months with 30 days - gap years
	// order of checks not optimized
    // maybe implement isValid()
	if (((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day <= 31 && day >= 1)) ||
			((month == 4 || month == 6 || month == 9 || month == 11) && (day <= 30 && day >= 1)) ||
			(month == 2 && (day <= 29 && day >= 1) && ((year%4 == 0 && year%100 != 0) || (year%400 == 0)))) {
		this->day = day;
		this->month = month;
		this->year = year;
	} else {
		this->day = -1;
		this->month = -1;
		this->year = -1;
	}
}

