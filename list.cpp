#include "list.h"
#include<iostream>
using namespace std;



list::list()
{
	head = 0;
}


list::~list()
{
	node* a, * b;
	a = head;
	b = a->next;
}
bool list::isempty()
{
	if (head == NULL)
	{
		cout << "list is empty" << endl;

	}
}
void list::push(int val)
{
	node* newnode;
	newnode = head->next;
}
void list::pop(int val)
{
	node* temp;
	temp->next;
	while (head->next != NULL)
	{
		temp = head->next;
		delete head;
	}

}
void list::peek(int val)

{

}
void list::pop(int val)
{
	if (isempty())
	{
		cout << " the list is empty"<<endl;
	}
	node* t;
	t = head->next;
	while (head->next == NULL)
	{
		node* t;
		t = head->next;
	}
}
void list::size(int val)
{
	if (isempty())
	{
		cout << "the list is empty" << endl;
	}
	else {
		int count = 0;
		while (head->next!-= NULL)
		{
			count++;

		}
		cout << "elements are"<< count<< endl;
	}
