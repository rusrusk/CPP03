#ifndef TEST_HPP
# define TEST_HPP

#include <iostream>
#include <string>


class Date {

	public :

			enum Month {
				jan = 1,
				feb,
				mar,
				apr,
				may,
				jun,
				jul,
				aug,
				sep,
				oct,
				nov,
				dec
			}
			class Bad_date{};
			Date(int dd = 0, Month mm = Month(0), int yy = 0);

			int day() const;
			Month month() const;
			int year() const;

			std::string string_rep() const;
			void char_rep(char s[]) const;

			
}



#endif