/******************************
 Eddie Negron
 CPSC1020 Spring 2019
 UserName: eddien
 Instructor:  Dr. Yvon Feaster
 *****************************/
 #include "Vegetable.h"

Vegetable::Vegetable(){
  totalVegtSales = 0.0;
  vegtCount = 0;
}

//reads in the data relating to the vegetable class
Vegetable::Vegetable(ifstream& in, ofstream& out){
  in >> name;
  in >> weight;
  in >> pricePerlb;
  in >> pricePerEach;
  in >> howMany;
}

//sets vegetable to variables passed in
Vegetable::Vegetable(string name, double weight, double pricePerlb,
double pricePerEach, int howMany){
  this->name = name;
  this->weight = weight;
  this->pricePerlb = pricePerlb;
  this->pricePerEach = pricePerEach;
  this->howMany = howMany;
}

void Vegetable::calculateTax(ofstream& out){
  //calculates sales tax
  eachSalesTax = eachSale * 0.08;
  //adds it to total tax collected
  dailySalesTax += eachSalesTax;

  //prints formatted tax infromation to sale file
  out << "\t\tSales Tax:" << setw(36) << right << setprecision(2)
  << fixed << eachSalesTax << endl;
}

void Vegetable::calculateSale(ofstream& out){
  //calculates the total cost
  eachSale = weight * pricePerlb + howMany * pricePerEach;
  //adds it to the total sale
  dailySales += eachSale;

  //increments total vegetable sales and adds sale to total vegetable sale
  totalVegtSales += eachSale;
  vegtCount++;

  //prints formatted sales infromation to sales file
  out << setw(46) << left << name << right << setprecision(2)
  << fixed << eachSale << endl;
}

void Vegetable::printReceipt(ofstream& out){
  //prints header of Receipt
  out << "**************************************************" << endl;
  out << getStandName() << endl;
  out << "Clemson, SC" << endl;
  out << "Receipt #" << getReceiptNum() << endl;
  out << "**************************************************" << endl;

  //calls to calculate sale and tax
  calculateSale(out);
  calculateTax(out);

  //prints formatted total vegetable sale infromation to sales file
  out << "\t\tTotal:" << setw(40) << right << setprecision(2) << fixed <<
  eachSale + eachSalesTax << endl;

  out << "\n\n" << endl;

}

void Vegetable::printInfo(ofstream& out){
  //prints total vegetable infromation to end of sales file
  out << "Number of vegetable sales for the day: " << vegtCount << endl;
  out << "With total vegetable sales of $" << setprecision(2) << fixed <<
  totalVegtSales << " for the day" << endl;
}
