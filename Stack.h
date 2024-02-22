#include<iostream>

template <typename T>
class Stack {
	private:
		int MAXSIZE = 10;
		int size = 0;
		
		class Node {
			public:
				T data;
				Node* next;
				
				Node(T d, Node* n) {
					data = d;
					next = n;
				}
		};
		
		Node* head = nullptr;
	public:
		void Push(T item) {
			if (!IsFull()) {
				Node* curr = new Node (item, head);
				head = curr;
				size++;
			} else {
				std::cout << "Error: Stack is full." << std::endl;
			}
		}
		
		void Pop() {
			if (!IsEmpty()) {
				Node* tmp = head;
				head = head->next;
				size--;
				delete tmp;
			} else {
				std::cout << "Error: Stack is empty." << std::endl;
			}
		}
		
		T Top() {
			return head->data;
		}

		bool IsEmpty() {
			if (size == 0) {
				return true;
			} else {
				return false;
			}
		}
		
		bool IsFull() {
			if (size < MAXSIZE) {
				return false;
			} else {
				return true;
			}
		}
		
		//Function to display Stack
		void PrintStack(){
			Node* curr = head;
			if (head != nullptr){
				std::cout  << "Stack data: (" << curr->data;
				while (curr->next != nullptr){
					std::cout << ", " << curr->next->data;
					curr = curr->next;
				}
				std::cout << ")" << std::endl;
			}
			else {
				std::cout << "The stack is empty" << std::endl;
			}
		}
};
