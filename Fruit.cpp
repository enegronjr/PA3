/******************************
 Eddie Negron
 CPSC1020 Spring 2019
 UserName: eddien
 Instructor:  Dr. Yvon Feaster
 *****************************/
#include "Fruit.h"

Fruit::Fruit(){
  totalFruitSales = 0.0;
  fruitCount = 0;
}

//reads in the data relating to the fruit class
Fruit::Fruit(ifstream& in, ofstream& out){
  in >> name;
  in >> weight;
  in >> pricePerlb;
  in >> pricePerEach;
  in >> howMany;
}

//sets fruit to variables passed in
Fruit::Fruit(string name, double weight, double pricePerlb, double pricePerEach,
int howMany){
  this->name = name;
  this->weight = weight;
  this->pricePerlb = pricePerlb;
  this->pricePerEach = pricePerEach;
  this->howMany = howMany;
}

void Fruit::calculateTax(ofstream& out){
  //calculates sales tax
  eachSalesTax = eachSale * 0.08;
  //adds it to total tax collected
  dailySalesTax += eachSalesTax;

  //prints formatted tax infromation to sale file
  out << "\t\t\tSales Tax:" << setw(31) << right << setprecision(2)
  << eachSalesTax << endl;
}

void Fruit::calculateSale(ofstream& out){
  //calculates the total cost
  eachSale = weight * pricePerlb + howMany * pricePerEach;
  //adds it to the total sale
  dailySales += eachSale;

  //increments total fruit sales and adds sale to total fruit sale
  fruitCount++;
  totalFruitSales += eachSale;

  //prints formatted sales infromation to sales file
  out << setw(49) << left << name << right << setprecision(4)
  << eachSale << endl;
}

void Fruit::printReceipt(ofstream& out){

  //prints header of Receipt
  out << "**************************************************" << endl;
  out << getStandName() << endl;
  out << "Clemson, SC" << endl;
  out << "Receipt #" << getReceiptNum() << endl;
  out << "**************************************************" << endl;

  //calls to calculate sale and tax
  calculateSale(out);
  calculateTax(out);

  //prints formatted total fruit sale infromation to sales file
  out << "\t\t\tTotal:" << setw(35) << right << setprecision(4) <<
  eachSale + eachSalesTax << endl;

  out << "\n\n" << endl;
}

void Fruit::printInfo(ofstream& out){
  //prints total fruit infromation to end of sales file
  out << "Number of fruit sales for the day: " << fruitCount << endl;
  out << "With total fruit sales of $" << setprecision(4) << totalFruitSales
  << " for the day" << endl;
}
