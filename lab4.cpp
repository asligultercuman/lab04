#include "Deque.h"
#include <stdexcept>

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
Deque::~Deque() {//Elif

}

///------------------------------------------------------
/// Adds a new item to the front of the Deque
/// 
void Deque::AddFront(int item) { //Asligul
	DequeNode* n = new DequeNode(item);
	if (head == NULL)//if doubly linked list is empty
	{
		head = tail = n;
	}
	else {
		n->next = head;
		head->prev = n;
		head = n;
	}
	noOfItems++;
} //end-AddFront

///------------------------------------------------------
/// Adds a new item to the end of the Deque
/// 
void Deque::AddRear(int item) {     //Özge
	DequeNode *n = new DequeNode(item);
    n->item = item;
    n->next = nullptr;
    n->prev = nullptr;

    if(head==nullptr){
        head = tail = n;
    }
    else {
       tail->next = n;
       n->prev = tail;
       tail = n;
    }
    	noOfItems++;
} //end-AddRear

///------------------------------------------------------
/// Remove and return the item at the front of the Deque
/// If the Deque is empty, throw an exception
/// 
int Deque::RemoveFront() { //Asligul
	if (head == NULL)
		throw std::runtime_error("Deque is empty!");

	int tempData = head->item;
	DequeNode* temp = head; 

	head = head->next;

	if (head != NULL)
		head->prev = NULL;
	else
		tail = NULL; //edge case : the removed part could be the last node

	delete temp;
		noOfItems--;
	return tempData;

} //end-RemoveFront

///------------------------------------------------------
/// Remove and return the item at the rear of the Deque
/// If the Deque is empty, throw an exception
/// 
int Deque::RemoveRear() {//Elif
	if(tail==NULL)
		throw std::runtime_error("Deque is empty!");
		int tempData=tail->item;
		DequeNode*temp=tail;
		tail=tail->prev;
		if(tail!=NULL)
		tail->next=NULL;
		delete temp;
			noOfItems--;
		return tempData;
	
} //end-RemoveRear

///------------------------------------------------------
/// Return the item at the front of the Deque (do not remove the item)
/// If the Deque is empty, throw an exception
/// 
int Deque::Front() {    //Özge
	if(head==nullptr){
     throw std::runtime_error("Deque is empty!");
    }
    else {
        return head->item;
    }
	return 0;
} //end-Front

///------------------------------------------------------
/// Return the item at the rear of the Deque (do not remove the item)
/// If the Deque is empty, throw an exception
/// 
int Deque::Rear() {     //Özge
	if(tail==nullptr){
        throw std::runtime_error("Deque is empty!");
    }
    else {
        return tail->item;
    }
	return 0;
} //end-Rear
