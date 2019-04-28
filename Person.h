/******************************
 Eddie Negron
 CPSC1020 Spring 2019
 UserName: eddien
 Instructor:  Dr. Yvon Feaster
 *****************************/
#ifndef PERSON_H
#define PERSON_H

#include "Address.h"
#include "Date.h"
#include <string>
#include <fstream>

class Person
{
  private:
    string last;
    string first;
    string email;
    Address address;
    Date bday;

  public:
    //default constructor
    Person();

   /*PARAMETERS: string string int string string string int int int int
    *constructor that sets all the data
    */
    Person(string, string, string, int, string, string, string, int,
      int, int, int);

   /*PARAMETERS: none
    *RETURN: address type representing the address
    *This function returns the private data inside of the address class
    */
    Address getAddress();

   /*PARAMETERS: string last, string first, string email, int house,
    *            string street, string city, string state, int zip,
    *            int month, int day, int year
    *RETURN: none
    *This function sets all variable inside of the class, and calls to the date
    *and address class to set those variable
    */
    void setPerson(string last, string first, string email, int house,
                   string street, string city, string state, int zip,
                   int month, int day, int year);

   /*PARAMETERS: none
    *RETURN: date type variable representing the date
    *This function returns the date
    */
    Date getDate();

   /*PARAMETERS: ofstream&
    *RETURN: none
    *This function prints the customer info and calls to address and date to
    *print their infromation
    */
    void printInfo(ofstream&);

    string getLast();

    bool operator<(Person);
    bool operator>(Person);
};

#endif
