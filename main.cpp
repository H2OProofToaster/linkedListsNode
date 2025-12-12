#include "node.h"
#include "student.h"
#include <iostream>
#include <cstring>

using namespace std;

void addStudent(Node* &head, char* name);
void printStudents(Node* head);

/*
  Nick H
  11/12/25
  Test for linked lists with student node class
*/

int main()
{
  Node* head = nullptr;

  addStudent(head, "1");
  printStudents(head);
  cout << endl;
  
  addStudent(head, "2");
  printStudents(head);
  cout << endl;

  addStudent(head, "4");
  printStudents(head);
  cout << endl;

  delete head->getNext()->getNext();
  head->getNext()->setNext(nullptr);
  printStudents(head);
  cout << endl;
  
  return 0;
}

void addStudent(Node* &head, char* name)
{
  Node* curr = head;

  //First item
  if(curr == nullptr)
    {
      head = new Node(new Student(name));
    }
  //Cycle until end of list
  else
    {
      //Go through them
      while(curr->getNext() != nullptr)
	{
	  curr = curr->getNext();
	}
      //Set next one
      curr->setNext(new Node(new Student(name)));
    }
}

void printStudents(Node* head)
{
  cout << head->getStudent()->getName() << endl;
  if(head->getNext() != nullptr)
    {
      printStudents(head->getNext());
    }
}
