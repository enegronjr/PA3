/******************************
 Eddie Negron
 CPSC1020 Spring 2019
 UserName: eddien
 Instructor:  Dr. Yvon Feaster
 *****************************/
#include "Date.h"

//default constructor
Date::Date(){
  month = 1;
  day = 1;
  year = 1970;
}
//constructor
Date::Date(int month, int day, int year){
  this->month = month;
  this->day = day;
  this->year = year;
}

void Date::setMonth(int month){
  //sets month to int passed in
  this->month = month;
}

void Date::setDay(int day){
  //sets day to int passed in
  this->day = day;
}

void Date::setYear(int year){
  //sets year to int passed in
  this->year = year;
}

int Date::getMonth(){
  //returns the private variable month
  return month;
}

int Date::getDay(){
  //returns the private variable day
  return day;
}

int Date::getYear(){
  //returns the private variable year
  return year;
}

void Date::printDate(ofstream& out){
  //prints the formatted birthday to customer file
  out << month << "/" << day << "/" << year << endl;
}
