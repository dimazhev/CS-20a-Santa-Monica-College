#ifndef CS20A_LIST_H
#define CS20A_LIST_H

#include<iostream>
#include<assert.h>
// Linked List object that maintains both head and tail pointers
// and the size of the list.  Note that you have to keep the head,
// tail and size consistent with the intended state of the List 
// otherwise very bad things happen. 
template<typename Type>
class List {
public:

	List();

	List(const List<Type>& other);

	List<Type>& operator=(const List<Type>& other);

	~List();

	void	printItems() const;
	bool	isEmpty() const;

	void	addToFront(const Type &item);
	void	addToRear(const Type &item);
	void	addItem(int index, const Type &item);

	// Note that the user must first ensure the list is not empty
	// prior to calling these functions.
	Type	getFront() const;
	Type	getRear() const;
	Type	getItem(int index) const;

	int		getSize() const;
	int		findItem(const Type &item) const;

	bool	deleteFront();
	bool	deleteRear();
	bool	deleteItem(int index);

#ifndef MAKE_MEMBERS_PUBLIC
private:
#endif
	// Forward declare the nodes for our List.
	// Will be implemented along with list's
	// member functions
	class Node;

	// We'll have both head and tail points for 
	// Fast insertion/deletion from both ends.
	Node*	head;
	Node*	tail;

	// Keep track of size of list
	int		size;
};


// List Implementation
//
//  Since List is a template class (which is not an actual 
//  class yet, not until we actually instantiate the list) 
//  we need to keep the implementation together with 
//  the definition.  There are ways to simulate having 
//  separate "implementation/definition" with templates, 
//  but they aren't necessary and can be confusing.
//

// Node definition
//		Already implemented, nothing to do here but to use it.
template<typename Type>
class List<Type>::Node {
public:
	Node() :next(nullptr), prev(nullptr) {}
	Node(Type item, Node* p, Node* n) : item(item), next(n), prev(p) {}

	Type  item;
	Node* next;
	Node* prev;
};



// List default constructor
//		Set head and tail pointer to point to nothing, size is zero
//		Already implemented, nothing to do.
template<typename Type>
List<Type>::List() :head(nullptr), tail(nullptr), size(0) {
}


// Copy constructor  
//		This should create an entirely new linked list with the same 
//		number of Nodes and the Values stored these Nodes in the same 
//		order as seen the other list’s Nodes.  This should not result 
//		in any memory leaks or aliasing.  
template<typename Type>
List<Type>::List(const List<Type>& other) {
	if (other.head == nullptr) {
		head = tail = nullptr;
		return;
	}
	
	Node* originNode = other.head;
	Node* destinationNode = nullptr;
	Node* previousNode = nullptr;
	while (originNode != nullptr) {
		destinationNode = new Node(origin.item, previousNode, nullptr);
		if (previousNode == nullptr) {
			head = destinationNode;
		} else {
			previousNode.next = destinationNode;
		}
		originNode = originNode->next;
		previousNode = destinationNode;
	}
	tail = destinationNode;
}
// Overloaded assignment operator 
//		Causes the already existing linked list to be identical to the 
//		other linked list without causing any memory leaks or aliasing.
template<typename Type>
List<Type>& List<Type>::operator=(const List<Type>& other) {
	if (&other == this)
		return *this;


}


// List destructor
//		Traverses the nodes and deletes them without causing memory leaks
template<typename Type>
List<Type>::~List() {
	while (head ->next != head)
	{
		Node* p = head->next;
		p->next->previous = head;
		head->next = p->next;
		delete p;
	}
	delete head;

// List printItems
//		Traverses list and prints items in list to console
//		Assumes << is overloaded for object Type.
//		

template<typename Type>
void List<Type>::printItems() const {
	Node* node = head;
	for (int i = 0; i < size; i++) {
		cout << node->item << " ";
		node = node->next;
	}
}

// List isEmpty
//		returns true if there are no items in the list
//		otherwise returns false.
template<typename Type>
bool List<Type>::isEmpty() const {
	return size == 0;
}


// List addToFront
//		Adds a new item to the front of the list
//		updates head, tail, and size accordingly.
//		
//		Two cases to consider: If the list is empty 
//		and if the list has items already it.
//
template<typename Type>
void List<Type>::addToFront(const Type &item) {
	
	Node* next_node = head;

	Node* new_node = new Node(item, nullptr, next_node);

	head = new_node;
	next_node->prev = new_node;
	if (tail == nullptr) {
		tail = new_node;
	}
	size++;
}

// List addToRear
//		Adds a new item to the rear of the list
//		updates head, tail, and size accordingly.
//
//		Two cases to consider: If the list is empty 
//		and if the list has items already it.
//
template<typename Type>
void List<Type>::addToRear(const Type &item) {
	Node* previous_node = tail;
	Node* new_node = new Node(item, previous_node, nullptr);

	tail = new_node;
	previous_node->next = new_node;
	if (head == nullptr) {
		head = new_node;
	}
	size++;
}

// List addItem
//		Adds a new item at the index indicated
//		updates head, tail, and size accordingly.
//
//		If the index less than or equal to zero add to the front.
//		If the index is greater than or equal to
//			the size of the list, add to the rear.
//		All other cases, add the item to the appropriate
//			location
//
template<typename Type>
void List<Type>::addItem(int index, const Type &item) {
	if (index <= 0) {
		addToFront(item);
	}
	else if (index >= size) {
		addToRear(item);
	}
	else {
		Node* previous = head;
		for (int i = 0; i < index; i++) {
			previous = previous->next;
		}
		Node* next = previous->next;
		Node* new_node = new Node(item, previous, next);
		previous->next = new_node;
		next->previous = new_node;
		size++;
			   

	}
}

// 8. List getFront
//		returns the first item in the list.
//
template<typename Type>
Type List<Type>::getFront() const {
	// Force check that the head is pointing to a Node
	// Typical solution for deployement code is to throw
	// exceptions, but since we haven't covered that yet
	// we'll make due with assert, which is used for testing
	assert(head != nullptr);

	if (head == nullptr) {
		return nullptr;
	}
	return head->item;
}

// List getRear
//		returns the last item in the list
//
template<typename Type>
Type List<Type>::getRear() const {

	// Force check that the tail is pointing to a Node
	// Typical solution for deployement code is to throw
	// exceptions, but since we haven't covered that yet
	// we'll make due with assert, which is used for testing
	assert(tail != nullptr);

	if (tail == nullptr) {
		return nullptr;
	}
	return tail->item;
}

// List getItem
//		returns the item at index
//
template<typename Type>
Type List<Type>::getItem(int index) const {

	// Force index to be correct before getting the Item
	// Typical solution for deployement code is to throw
	// exceptions, but since we haven't covered that yet
	// we'll make due with assert, which is used for testing
	assert(index >= 0 && index < size);

	if (index <= 0) {
		return head->item;
	}
	else if (index >= size -1) {
		return tail->item;
	}
	else {
		Node* previous = head;
		for (int i = 0; i < index; i++) {
			previous = previous->next;
		}
		return previous->item;
	}

	
}

// List getSize
//		return the size of the list
template<typename Type>
int List<Type>::getSize() const {
	return size;
}

// List findItem
//		Traverses the list to see if the item is in the list
//		if it is return the index of that item, otherwise
//		return -1. Assumes the == operator is overloaded for
//		object Type.
template<typename Type>
int List<Type>::findItem(const Type &item) const {
	Node* node = head;
	for (int i = 0; i < size; i++) {
		if (node->item == item) {
			return i;
		}
		node = node->next;
	}
	return -1;
}
	


// List deleteFront
//		Removes the first item in the list returns true
//		if the item was deleted, false otherwise. Updates 
//		head, tail, and size accordingly.
//
//		Must consider at least two cases where the list: is empty, 
//		has one or more items.
//		
template<typename Type>
bool List<Type>::deleteFront() {
	if (size == 0) {
		return false;
	}
	
	Node* temp = head;
	head = temp->next;
	head->previous = nullptr;
	delete temp;
	size--;

	return true;
}
// List deleteRear
//		Removes the last item in the list returns true
//		if the item was deleted, false otherwise. Updates 
//		head, tail, and size accordingly.
//
//		Must consider at least three cases where the list: is empty, 
//		has one item, has two or more items.
//	
template<typename Type>
bool List<Type>::deleteRear() {
	if (size == 0) {
		return false;
	}

	Node* temp = tail;
	tail = temp->previous;
	tail->next = nullptr;
	delete temp;
	size--;

	return true;
}

// List deleteItem
//		Removes the item at the index returns true
//		if the item was deleted, false otherwise. Updates 
//		head, tail, and size accordingly. If the index is
//		out of bounds return false.
//
template<typename Type>
bool List<Type>::deleteItem(int index) {

	if (size == 0) {
		return false;
	}

	if (index >= size) {
		return false;
	}
	if (node->previous == nullptr) {
		deleteFront();
	}
	else if (node->next == nullptr) {
		deleteRear();
	}
	else {
		Node* node = head;
		for (int i = 0; i < index; i++) {
			node = node->next;
		}


		Node* previous = node->previous;
		Node* next = node->next;
		previous->next = next;
		next->previous = previous;


		node->previous->next = node->next;
		node->next->previous = node->previous;



		delete node;
		size--;
	}
	return true;
}

#endif