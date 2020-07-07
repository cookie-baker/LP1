#include "Date.h"

#include <sstream>

Date::Date() : year(0), month(0), day(0)
{
}

void Date::set_from_string(const std::string& date)
{
    char discard;
    std::stringstream stream(date);
    if(date[0]=='#'){
    	stream>>discard;
	}
    stream >> day;
    stream >> discard;
    stream >> month;
    stream >> discard;
    stream >> year;
}

std::string Date::to_string()
{
    std::stringstream stream;

    if (day < 10) {
        stream << 0;
    }
    stream << day;
    stream << '/';

    if (month < 10) {
        stream << "0";
    }
    stream << month << "/";
    stream << year;

    return stream.str();
}
