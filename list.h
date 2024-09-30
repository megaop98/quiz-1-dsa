#pragma once
#include<iostream>
#include"node.h"
using namespace std;
class list
{
public:
	node* head;
	list();
	~list();
	
	void push(int a);
	void peek(int c);
	void pop(int b);
	void size(int d);
	bool isempty();
};

