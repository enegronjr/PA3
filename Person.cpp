/******************************
 Eddie Negron
 CPSC1020 Spring 2019
 UserName: eddien
 Instructor:  Dr. Yvon Feaster
 *****************************/
#include "Person.h"

//sets person to default data
Person::Person(){
  last = "noLast";
  first = "noFirst";
  email = "noEmail";
  address.setAddress(0, "noStreet", "noCity", "noState", 0);
}

//returns the address
Address Person::getAddress(){
  return address;
}

//function sets variables inside of person class and calls to setter functions
//inside of address class and date class
void Person::setPerson(string last, string first, string email, int house,
string street, string city, string state, int zip,
int month, int day, int year){
  this->last = last;
  this->first = first;
  this->email = email;
  address.setAddress(house, street, city, state, zip);
  bday.setDay(day);
  bday.setMonth(month);
  bday.setYear(year);
}

//prints all of the customer infromation
void Person::printInfo(ofstream& out){
  out << last << ", " << first << endl;
  address.printAddress(out);
  out << email << endl;
  bday.printDate(out);
  out << "\n" << endl;
}

//operator to compare the last names
bool Person::operator>(Person temp){
  if(this->last > temp.getLast()){
    return true;
  }
  return false;
}

//operator to compare the last names
bool Person::operator<(Person temp){
  if(this->last < temp.getLast()){
    return true;
  }
  return false;
}
