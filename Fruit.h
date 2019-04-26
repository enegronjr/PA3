/******************************
 Eddie Negron
 CPSC1020 Spring 2019
 UserName: eddien
 Instructor:  Dr. Yvon Feaster
 *****************************/
#ifndef FRUIT_H
#define FRUIT_H

#include <string>
#include "ProduceStand.h"
#include <fstream>
#include <iostream>

using namespace std;
class Fruit : public ProduceStand
{
  private:

    static double totalFruitSales;
    static int fruitCount;

  public:
    //constructor
    Fruit();

   /*PARAMETERS: ifstream& ofstream
    *constructor that reads in from input file
    */
    Fruit(ifstream&, ofstream& out);

   /*PARAMETERS: string double double double int
    *constructor that sets the fruit infromation
    */
    Fruit(string, double, double, double, int);

    //destructor
    virtual ~Fruit() {}

   /*PARAMETERS: ofstream& out
    *RETURN: none
    *This function calculates tax and prints it to sales file
    */
    void calculateTax(ofstream& out);

   /*PARAMETERS: ofstream& out
    *RETURN: none
    *This function calculates sale and prints it to the sales file
    */
    void calculateSale(ofstream& out);

   /*PARAMETERS: ofstream& out
    *RETURN: none
    *This function prints the header for the receipt, calls to calculateTax
    *and calculateSale, then prints total sale infromation
    */
    void printReceipt(ofstream& out);

   /*PARAMETERS: ofstream& out
    *RETURN: none
    *This function prints the total fruit sales at the end of the file
    */
    void printInfo(ofstream& out);

};

#endif
