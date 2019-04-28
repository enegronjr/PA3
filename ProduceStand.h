/******************************
 Eddie Negron
 CPSC1020 Spring 2019
 UserName: eddien
 Instructor:  Dr. Yvon Feaster
 *****************************/
#ifndef STAND_H
#define STAND_H

#include <string>
#include <ctime>
#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include "Person.h"

using namespace std;

/*struct Node{
  Person person;
  struct Node *next;
}*/

class ProduceStand
{
  protected:
    string name;
    double weight;
    double pricePerlb;
    double pricePerEach;
    int howMany;
    //the amount of each sale used in calculateSales and then in calculateTax
    double eachSale;
    //the amount of tax for each sale used in calculateSales and calculateTax
    double eachSalesTax;

    //keeps track of the dailySales of both Fruit and Vegtable.

    static double dailySales;
    static double dailySalesTax;
    Person customer;

  private:
    string standName;
    /*because PS's constructor gets called each time an instance of fruit or
     *vegetable gets cretated then increment receiptNum also.*/
    static int receiptNum;

  public:

    //constructor
    ProduceStand();

   /*PARAMETERS: ifstream& ofstream&
    *constructor that reads in all the customer data
    */
    ProduceStand(ifstream&, ofstream&, ofstream&);

    ProduceStand(string, double, double, double, int);

   /*PARAMETERS: none
    *RETURN: string that represents the stand name
    *This function returns the stand name
    */
    string getStandName();

   /*PARAMETERS: none
    *RETURN: int that represents receipt number
    *This function returns the receipt number
    */
    int getReceiptNum();

    /*This function prints the information on the dailySales and dailySalesTax
     *for the day. */
     static void printInfo(ofstream& out);
};
#endif
