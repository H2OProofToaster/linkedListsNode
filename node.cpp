#include "node.h"
#include "student.h"
#include <iostream>

using namespace std;

Node::Node(Student* v)
{
  value = v;
  next = nullptr;
}

Node::~Node()
{
  delete value;
}

Node* Node::getNext()
{
  return next;
}

Student* Node::getStudent()
{
  return value;
}

void Node::setNext(Node* n)
{
  next = n;
}
