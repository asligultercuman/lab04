#include "Deque.h"

///------------------------------------------------------
/// Default constructor
/// 
Deque::Deque() { //Asligul
	head = NULL;
	tail = NULL;
	noOfItems = 0;
} //end-Deque

///------------------------------------------------------
/// Destructor
/// 
Deque::~Deque() {
	// Fill this in
} //end-~Deque

///------------------------------------------------------
/// Adds a new item to the front of the Deque
/// 
void Deque::AddFront(int item) { //Asligul
	DequeNode* n = new DequeNode(item);
	if (head == NULL)//if doubly linked list is empty
	{
		head = n;
		tail = n;
	}
	else {
		n->next = head;
		head->prev = n;
		head = n;
	}
} //end-AddFront

///------------------------------------------------------
/// Adds a new item to the end of the Deque
/// 
void Deque::AddRear(int item) {
	// Fill this in
} //end-AddRear

///------------------------------------------------------
/// Remove and return the item at the front of the Deque
/// If the Deque is empty, throw an exception
/// 
int Deque::RemoveFront() { //Asligul
	if (head == NULL)
	throw(0);

	int tempData = head->item;
	DequeNode* temp = head; 

	head = head->next;

	if (head != NULL)
		head->prev = NULL;
	else
		tail = NULL; //edge case : the removed part could be the last node of the list

	delete temp;
	return tempData;
} //end-RemoveFront

///------------------------------------------------------
/// Remove and return the item at the rear of the Deque
/// If the Deque is empty, throw an exception
/// 
int Deque::RemoveRear() {
	// Fill this in
	return 0;
} //end-RemoveRear

///------------------------------------------------------
/// Return the item at the front of the Deque (do not remove the item)
/// If the Deque is empty, throw an exception
/// 
int Deque::Front() {
	// Fill this in
	return 0;
} //end-Front

///------------------------------------------------------
/// Return the item at the rear of the Deque (do not remove the item)
/// If the Deque is empty, throw an exception
/// 
int Deque::Rear() {
	// Fill this in
	return 0;
} //end-Rear
