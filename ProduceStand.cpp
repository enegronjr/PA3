/******************************
 Eddie Negron
 CPSC1020 Spring 2019
 UserName: eddien
 Instructor:  Dr. Yvon Feaster
 *****************************/
#include "ProduceStand.h"
#include "Fruit.h"
#include "Vegetable.h"
#include "LinkedList.h"

ProduceStand::ProduceStand(){
  //sets stand name
  standName = "Eddie's Stand";
}

ProduceStand::ProduceStand(ifstream& in, ofstream& out1, ofstream& out2){
  string temp;
  Vegetable vegi;
  Fruit fruit;
  LinkedList list;

  while((!in.eof())){
    receiptNum++;
    in >> temp;

    //if its a fruit
    if(temp == "Fruit"){
      //read in fruit data
      fruit = Fruit(in, out1);
      //prints fruit
      fruit.printReceipt(out1);
    }
    //if its a Vegetable
    else if(temp == "Vegetable"){
      //reads in Vegetable data
      vegi = Vegetable(in, out1);
      //prints Vegetable
      vegi.printReceipt(out1);
    }
    //gets y or n
    in >> temp;

    //if customer wants to be added
    if(temp == "y"){
      int house, zip, month, day, year;
      string last, first, email, street, city, state;
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
      list.newNode(customer);
      //prints customer infromation
    }
  }
  //print all final info
  printInfo(out1);
  fruit.printInfo(out1);
  vegi.printInfo(out1);
  list.printList(out2);

}

ProduceStand::ProduceStand(string name, double weight, double pricePerlb,
double pricePerEach, int howMany){
  Vegetable vegi;
  Fruit fruit;

  //if its a fruit
  if(name == "Fruit"){
    //read in fruit data
    fruit = Fruit(name, weight, pricePerlb, pricePerEach, howMany);
  }
  //if its a Vegetable
  else if(name == "Vegetable"){
    //reads in Vegetable data
    vegi = Vegetable(name, weight, pricePerlb, pricePerEach, howMany);
  }
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
  out << "Total sales for the day: $" << setprecision(2) << fixed <<
  dailySales << endl;
  out << "Total sales tax collected for the day: $" << setprecision(2) << fixed
  << dailySalesTax << endl;

}

string Person::getLast(){
  return last;
}
