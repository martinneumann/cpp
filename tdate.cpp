#include "tdate.h"
#include <ctime>

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
		// @TODO	
}

TDate::TDate() {
		std::time_t current = std::time();
		this->day = current.GetDay();   
		this->month = current.GetMonth();
		this->year = current.GetYear();
}

TDate::TDate(short day, short month, short year) {
		this->day = day;
		this->month = month;
		this->year = year;
}

