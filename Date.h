/******************************
 Eddie Negron
 CPSC1020 Spring 2019
 UserName: eddien
 Instructor:  Dr. Yvon Feaster
 *****************************/
#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <fstream>
using namespace std;

class Date
{
  private:
    int month;
    int day;
    int year;


  public:
    Date();
    Date(int, int, int);

   /*PARAMETERS: int
    *RETURN:none
    *This function sets the month
    */
    void setMonth(int);

   /*PARAMETERS: int
    *RETURN:none
    *This function sets the day
    */
    void setDay(int);

   /*PARAMETERS: int
    *RETURN:none
    *This function sets the year
    */
    void setYear(int);

   /*PARAMETERS: none
    *RETURN: int that represents month
    *This function returns the month
    */
    int getMonth();

   /*PARAMETERS: none
    *RETURN: int that represents day
    *This function returns the day
    */
    int getDay();

   /*PARAMETERS: none
    *RETURN: int that represents year
    *This function returns the year
    */
    int getYear();

   /*PARAMETERS: ofstream&
    *RETURN: none
    *This function prints the formatted date to
    *the customer file
    */
    void printDate(ofstream&);

};
#endif
