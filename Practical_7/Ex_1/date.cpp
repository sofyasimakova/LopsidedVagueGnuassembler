#include "date.hpp"

int Date::getDay(){
  return day
}

int Date::getMonth(){
  return month;
}

int Date::getYear(){
  return year
}

Date::Date(const int day, const int month, const int year){
  day;
  month;
  year;
}

void Date::print(){
  cout << day << "/" << month << "/" << year << endl;
}