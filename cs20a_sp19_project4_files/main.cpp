// DEFINE YOUR TEST
#define TEST2

#ifdef TEST1
//		What single specific paricular one-thing is being tested?:
//		What is expected?:
//		What happens?:
#include"list.h"
int main() {
	
	List<int> l;

	l.addToRear(3);
	l.addToFront(-1);
	l.addToFront(9000);
	l.addToFront(2);
	l.printItems();
	l.deleteRear();
	l.printItems();

	l.deleteItem(2);
	l.printItems();
	return 0;
}

#elif defined(TEST2)
//		What single specific paricular one-thing is being tested?:
//		What is expected?:
//		What happens?:
#include<string>
using std::string;
#include"stack.h"
#include"queue.h"

int main() {
	
	Stack<std::string> stack;
	Queue<std::string> queue;

	stack.push("Feynman");
	stack.push("Turing");
	stack.push("Einstein");
	stack.push("Bohr");
	stack.push("Sanchez");

	stack.printStack();

	queue.push(stack.peek());
	stack.pop();

	queue.push(stack.peek());
	stack.pop();

	queue.push(stack.peek());
	stack.pop();

	queue.push(stack.peek());
	stack.pop();

	queue.pop();
	queue.pop();

	queue.printQueue();
	
	return 0;
}

#elif defined(TEST3) //Test the game

//		What single specific paricular one-thing is being tested?:
//		What is expected?:
//		What happens?:

#include"game.h"
#include<string>

int main() {

	std::string fsettings = "settings.ini";
	
	//Setup game
	Game g(fsettings);

	//Exectute game loop
	g.play();
	
	return 0;
}
#else
int main() {
	cout << "Hello World!" << endl;
	return 0;
}
#endif
