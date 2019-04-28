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

  //create instance of prodice stand and reads in all data
  ProduceStand stand;
  stand = ProduceStand(in, out1, out2);

  //closes all files
  in.close();
  out1.close();
  out2.close();
}
