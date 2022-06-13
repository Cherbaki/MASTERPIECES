#ifndef BST_H
#define BST_H

#include <iostream>
#include "Node.h"


class BST {
	
	Node* root = NULL;

public:

	//Default construcor
	BST() = default;
	//Initialise list constructor
	BST(std::initializer_list<T>);
	//Copy constructor
	BST(const BST&);
	//Destructor
	~BST();
	//Displays the elements of BST
	void DisplayIn();
	void DisplayPre();
	void DisplayPost();
	//Inserts item in BST
	void Add(T);
	//Deletes given item form BST if it is in so
	void Delete(T);
	//Searchs item in BST and retuns boolean
	bool Search(T data);
	//Overloading assignment operator
	BST& operator =(const BST&);

private:

	//Copy Constructor Helper
	void HelpInCopy(Node*);
	//Destructor Helper
	void HelpInDelete(Node*&);
	//Inoder traversial helper
	void DisplayIn(Node*);
	//Postorder traversial helper
	void DisplayPost(Node*);
	//Preorder traversial helper
	void DisplayPre(Node*);
	//Insertion helper
	void Add(Node*&, T);
	//Deletiong helper
	void Delete(Node*&, T);
	//Search helper
	bool Search(Node*, T);

};


#endif