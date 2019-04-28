#include "LinkedList.h"
#include "Person.h"

LinkedList::LinkedList(){
  head = NULL;
  tail = NULL;
}

void LinkedList::printList(ofstream& out){
  node* temp = new node;
  temp = head;
  while(temp != NULL) {
    temp->data.printInfo(out);
    temp = temp->next;
  }
}

void LinkedList::insert(node* newNode){
  if(head == NULL || head->data > newNode->data){
    newNode->next = head;
    head = newNode;
    return;
  }

  node* current = head;
  while(current->next != NULL && current->next->data < newNode->data){
    current = current->next;
  }

  newNode->next = current->next;
  current->next = newNode;
}

void LinkedList::newNode(Person data){
  node *newNode = new node;
  newNode->data = data;
  newNode->next = NULL;
  insert(newNode);
}
