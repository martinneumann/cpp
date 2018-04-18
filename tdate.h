class TDate {
		private:
				short day;
				short month;
				short year;

		public:
				void setDate(short date);
				short getDay();
				short getMonth();
				short getYear();
				void print();
				TDate();
				TDate(short day, short month, short year);
};
