#ifndef TTIME_H
#define TTIME_H

class TTime {
		private:
				short second;
				short minute;
				short hour;

		public:
				short getSecond();
				short getMinute();
				short getHour();
				void setSecond(short second);
				void setMinute(short minute);
				void setHour(short hour);
				void print();
				TTime();
				TTime(short hour, short minute, short second);
				TTime(short minute, short second);
};

#endif
