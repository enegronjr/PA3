/******************************
 Eddie Negron
 CPSC1020 Spring 2019
 UserName: eddien
 Instructor:  Dr. Yvon Feaster
 *****************************/
#ifndef ADDRESS_H
#define ADDRESS_H
#include <string>
#include <fstream>
using namespace std;

class Address
{
  private:
    int house;
    string street;
    string city;
    string state;
    int zip;

  public:
    Address();
   /*PARAMETERS: int string string string int
    *RETURN: none
    *This function sets the address for the current customer
    */
    void setAddress(int, string, string, string, int);

   /*PARAMETERS: ofstream&
    *RETURN: none
    *This function prints the formatted address to the
    *customer file
    */
    void printAddress(ofstream&);

    //destructor
    virtual ~Address() {}
};

#endif
