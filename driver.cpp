/******************************
 Eddie Negron
 CPSC1020 Spring 2019
 UserName: eddien
 Instructor:  Dr. Yvon Feaster
 *****************************/
#include "Address.h"
#include "Fruit.h"
#include "ProduceStand.h"
#include "Date.h"
#include "Person.h"
#include "Vegetable.h"

//global declaration of static variables
double Fruit::totalFruitSales = 0.0;
int Fruit::fruitCount = 0;
double Vegetable::totalVegtSales = 0.0;
int Vegetable::vegtCount = 0;
double ProduceStand::dailySalesTax = 0.0;
double ProduceStand::dailySales = 0.0;
int ProduceStand::receiptNum = 0;


int main(int argc, const char* argv[]){
  //check cmd arguments
  if(argc != 4){
    cout << "Too few arguments" << endl;
    return 1;
  }
  //declare files
  ifstream in;
  ofstream out1, out2;

  //opens files
  in.open(argv[1]);
  out1.open(argv[2]);
  out2.open(argv[3]);

  //checks if all files opened
  if(!(in.is_open()) || !(out1.is_open()) || !(out2.is_open())){
    cout << "Error opening file" << endl;
  }

  //declaration of necessary variables
  ProduceStand stand;
  string temp;
  Vegetable vegi;
  Fruit fruit;

  //while not eof
  while((!in.eof())){
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
      //adds and prints customer
      stand = ProduceStand(in, out2);
    }
  }

  //prints total sales info
  stand.printInfo(out1);
  //prints total vegetable info
  vegi.printInfo(out1);
  //prints total fruit info
  fruit.printInfo(out1);

  //closes all files
  in.close();
  out1.close();
  out2.close();
}
