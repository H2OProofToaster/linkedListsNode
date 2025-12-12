#ifndef NODE_H
#define NODE_H

#include <iostream>
#include "student.h"

/*
  Nick H
  11/12/25
  A node for a linked list
*/

using namespace std;

class Node
{
 public:
  Node(Student* v); //Make a node pointing to a student class
  ~Node(); //Destructor, deletes what value is pointing to
  Node* getNext(); //Returns next pointer
  Student* getStudent(); //Returns value pointer
  void setNext(Node* n); //Sets next equal to argument
 private:
  Student* value;
  Node* next;
};

#endif
