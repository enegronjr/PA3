/******************************
 Eddie Negron
 CPSC1020 Spring 2019
 UserName: eddien
 Instructor:  Dr. Yvon Feaster
 *****************************/
#include "LinkedList.h"
#include "Person.h"

//default constructor
LinkedList::LinkedList(){
  head = NULL;
}

void LinkedList::printList(ofstream& out){
  node* temp = new node;
  //set temp to beginning of the list
  temp = head;
  //go through the whole list
  while(temp != NULL) {
    //print current person
    temp->data.printInfo(out);
    //move to next node
    temp = temp->next;
  }
}

void LinkedList::insert(node* newNode){

  //if list empty or if head is greater than newNode
  if(head == NULL || head->data > newNode->data){
    //place newNode infront of head
    newNode->next = head;
    head = newNode;
    return;
  }

  node* current = head;
  //loop until in correct place
  while(current->next != NULL && current->next->data < newNode->data){
    current = current->next;
  }

  //insert the new node
  newNode->next = current->next;
  current->next = newNode;
}

void LinkedList::newNode(Person data){
  //create newNode with Person data and no next node
  node *newNode = new node;
  newNode->data = data;
  newNode->next = NULL;
  insert(newNode);
}
