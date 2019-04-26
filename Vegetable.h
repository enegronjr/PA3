/******************************
 Eddie Negron
 CPSC1020 Spring 2019
 UserName: eddien
 Instructor:  Dr. Yvon Feaster
 *****************************/
 #ifndef VEGETABLE_H
#define VEGETABLE_H

#include <string>
#include "ProduceStand.h"
#include <fstream>
#include <iostream>

using namespace std;

class Vegetable : public ProduceStand
{
  private:

    static double totalVegtSales;
    static int vegtCount;

  public:
    //constructor
    Vegetable();

   /*PARAMETERS: ifstream& ofstream
    *constructor that reads in from input file
    */
    Vegetable(ifstream&, ofstream& out);

   /*PARAMETERS: string double double double int
    *constructor that sets the vegetable infromation
    */
    Vegetable(string, double, double, double, int);

    //destructor
    virtual ~Vegetable() {}

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
    *This function prints the total vegetable sales at the end of the file
    */
    void printInfo(ofstream& out);

};

#endif
