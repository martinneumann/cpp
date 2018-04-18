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
	std::cout << std::setfill('0') << std::setw(2) << this->day << "." << std::setfill('0') << std::setw(2) << this->month << "." << this->year;
}

TDate::TDate() {
	std::time_t t = std::time(0);   // get time now
	std::tm* now = std::localtime(&t);
	this->day = now->tm_mday;   
	this->month = now->tm_mon+1;
	this->year = now->tm_year+1900;
}

TDate::TDate(short day, short month, short year) {
	this->day = day;
	this->month = month;
	this->year = year;
}

