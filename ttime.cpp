#include <ctime>
#include <iostream>
#include <iomanip>

#include "ttime.h"

void TTime::setSecond(short second) {
	if  (second < 59 && second >= 0) { this->second = second; } else { std::cout << "Bad second." << std::endl; }
}

void TTime::setMinute(short minute) {
	if (minute < 59 && minute >= 0) { this->minute = minute; } else { std::cout << "Bad minute." << std::endl; }

}

void TTime::setHour(short hour) {
	if (hour < 59 && hour >= 0) { this->hour = hour; } else { std::cout << "Bad hour." << std::endl; }

}

short TTime::getSecond() {
	return second;
}

short TTime::getMinute() {
	return minute;
}

short TTime::getHour() {
	return hour;
}

void TTime::print() {
	std::cout << std::setfill('0') << std::setw(2) << this->hour << ":" << std::setfill('0') << std::setw(2) << this->minute;
	if (this->second != 0)  std::cout << ":" << std::setfill('0') << std::setw(2) << this->second;

}



TTime::TTime() {
	std::time_t t= std::time(0);
	std::tm* now = std::localtime(&t);
	this->second = now->tm_sec;
	this->minute= now->tm_min;
	this->hour= now->tm_hour;
}

TTime::TTime(short hour, short minute, short second) {
	if (second < 60 && second >= 0 && minute < 60 && minute >= 0 && hour < 24 && hour >= 0) {
		this->second = second;
		this->minute = minute;
		this->hour = hour;
	} else {
		this->second = 0;
		this->minute = 0;
		this->hour = 0;
		std::cout << "Bad time." << std::endl;
	}


}

TTime::TTime(short hour, short minute) {
	if (minute < 60 && minute >= 0 && hour < 24 && hour >= 0) {
		this->second = 0;
		this->minute = minute;
		this->hour = hour;
	} else {
		this->second = 0;
		this->minute = 0;
		this->hour = 0;
		std::cout << "Bad time." << std::endl;
	}

}
