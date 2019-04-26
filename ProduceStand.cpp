/******************************
 Eddie Negron
 CPSC1020 Spring 2019
 UserName: eddien
 Instructor:  Dr. Yvon Feaster
 *****************************/
#include "ProduceStand.h"

ProduceStand::ProduceStand(){
  //sets stand name
  standName = "Eddie's Stand";
}

ProduceStand::ProduceStand(ifstream& in, ofstream& out){
  string last, first, email, street, city, state;
  receiptNum++;
  int house, zip, month, day, year;
  //reads in all customer infromation
  in >> first;
  in >> last;
  in >> email;
  in >> house;
  in >> street;
  in >> city;
  in >> state;
  in >> zip;
  in >> month;
  in >> day;
  in >> year;
  //calls to setPerson to set customer data
  customer.setPerson(last, first, email, house, street, city, state, zip, month,
  day, year);
  //prints customer infromation
  customer.printInfo(out);
}

string ProduceStand::getStandName(){
  //returns the stand name
  return standName;
}

int ProduceStand::getReceiptNum(){
  //returns the receip number
  return receiptNum;
}

void ProduceStand::printInfo(ofstream& out){
  //prints formatted total sale infromation
  out << "Total sales for the day: $" << setprecision(4) << dailySales << endl;
  out << "Total sales tax collected for the day: $" << setprecision(4)
  << dailySalesTax << endl;

}
