#include "ttime.h"
#include <ctime>
#include <chrono>

void TTime::setSecond(short second) {
		this->second = second;
}

void TTime::setMinute(short minute) {
		this->minute = minute;
}

void TTime::setHour(short hour) {
		this->hour = hour;
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
		// @TODO
}

TTime::TTime() {
		std::time_t current = std::chrono::system_clock::now();
		this->second = current.GetSecond();
		this->minute = current.GetMinute();
		this->hour = current.GetHour();
}

TTime::TTime(short second, short minute, short hour) {
		this->second = second;
		this->minute = minute;
		this->hour = hour;
}

TTime::TTime(short minute, short hour) {
		this->second = -1;
		this->minute = minute;
		this->hour = hour;
}
