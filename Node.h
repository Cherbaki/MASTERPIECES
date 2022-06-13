#ifndef Node_H
#define Node_H

#include <iostream>
#include "BST.h"

typedef int T;
class Node{

	T data;
	Node* left = NULL, * right = NULL;
	friend class BST;
public:
	//Default constructor
	Node() = default;

	//Explicite constructor
	Node(T Data, Node* Left = NULL, Node* Right = NULL) :
		data(Data), left(Left), right(Right) {}
	
	//Getter for data
	T GetItem()const { return this->data; }

};


#endif