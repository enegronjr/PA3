#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Person.h"
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>

using namespace std;

struct node{
  Person data;
  node* next;
};

class LinkedList
{
private:
  node *head, *tail;
public:
  LinkedList();

  void printList(ofstream&);
  void newNode(Person);
  void insert(node*);
};
#endif
