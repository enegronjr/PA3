/******************************
 Eddie Negron
 CPSC1020 Spring 2019
 UserName: eddien
 Instructor:  Dr. Yvon Feaster
 *****************************/
#include "Address.h"
//default constructor
Address::Address(){
  house = 0;
  street = "noStreet";
  city = "noCity";
  state = "noState";
  zip = 0;
}

//function to set the current address
void Address::setAddress(int house, string street, string city,
string state, int zip){
  this->house = house;
  this->street = street;
  this->city = city;
  this->state = state;
  this->zip = zip;
}

void Address::printAddress(ofstream& out){
  //prints formatted address to customer file
  out << house << " " << street << endl;
  out << city << ", " << state << " " << zip <<  endl;
}
