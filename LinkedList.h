/******************************
 Eddie Negron
 CPSC1020 Spring 2019
 UserName: eddien
 Instructor:  Dr. Yvon Feaster
 *****************************/
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Person.h"
#include <iostream>

using namespace std;

//linked list struct
struct node{
  Person data;
  node* next;
};

class LinkedList
{
private:
  node *head;
public:
  //default constructor
  LinkedList();

 /*PARAMETERS: ofstream&
  *RETURN: none
  *This function prints every element
  *in the list
  */
  void printList(ofstream&);

 /*PARAMETERS: Person
  *RETURN: none
  *This function creates a node with the Person
  *passed into it and calls to insert
  */
  void newNode(Person);

 /*PARAMETERS: node*
  *RETURN: none
  *This function takes the new node and automatically
  *places it in the correct sorted position
  */
  void insert(node*);
};
#endif
