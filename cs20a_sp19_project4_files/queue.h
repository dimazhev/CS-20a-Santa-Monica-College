#ifndef QUEUE_H
#define QUEUE_H
#include"list.h"

// Queue ADT using linked list as primary data structure.
// 
template<typename Type>
class Queue {
public:

	Queue();

	// Basic queue operations
	void	push(Type item);
	void	pop();
	Type	peek() const;

	// Check to see if there is anything on the queue
	bool	isEmpty() const;

	// Use to see what is in the queue for debugging
	void	printQueue() const;
#ifndef MAKE_MEMBERS_PUBLIC
private:
#endif
	List<Type> m_list;
};


// Queue Implementation
//

// Queue() Default constrcutor:
//		Call the defualt constructor for its List.
//		Already implemented.
template<typename Type>
Queue<Type>::Queue() :m_list() {}

// push():
//		Add item to the queue in a manor appropriate for
//		Queue behavoir.
//
template<typename Type>
void Queue<Type>::push(Type item) {
	m_list.addToRear(item);

}

// pop():
//		Remove the item on the "top" of the queue.
//
template<typename Type>
void Queue<Type>::pop() {
	m_list.deleteFront();

}

// isEmpty():
//		return true if there are no items in the queue
//		otherwise return false.
//
template<typename Type>
bool Queue<Type>::isEmpty() const {
	return m_list.isEmpty();
}

// peek():
//		Look at the "top" of the queue without changing the
//		Queue itself.
//
template<typename Type>
Type Queue<Type>::peek() const {
	return m_list.getFront();
}

// printStack()
//		Print to console the elements of the queue.
//		Used for debugging.
//
template<typename Type>
void Queue<Type>::printQueue() const {

	m_list.printItems();

}













#endif