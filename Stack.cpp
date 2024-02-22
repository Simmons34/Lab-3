#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
	cout << "Hello Stack" << endl;

	Stack<int> ll;
	ll.PrintStack();

	ll.Push(3);
	ll.PrintStack();
	
	ll.Push(5);
	ll.Push(9);
	ll.Push(7);

	ll.PrintStack();
	
	ll.Push(5);
	ll.Push(100);
	ll.Push(500);
	ll.PrintStack();

	ll.Pop();
	ll.PrintStack();	
	ll.Pop();
	ll.Pop();
	ll.PrintStack();	
	ll.Pop();
	ll.PrintStack();	
	ll.Pop();
	ll.Pop();
	ll.Pop();
	ll.Pop();
	
	return 0;
}
