#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};
 
Node* createNewNode(int val){
	Node *temp = new Node;
	temp->data = val;
	temp->next = NULL;
	return temp;
}

//complete the functions
class Stack{
	Node *head;
	Node *tail;
	int s;
	
	public:
	//constructor is called whenever an object of the class is declared
	Stack(){
		cout<<"constructor is Called\n";
		tail=NULL;
		s=0; 
	}
	
	//push the value at the back
	void push(int val){
		cout<<"pushing the val: "<<val<<" at the back of queue\n";
		Node *temp1=createNewNode(val);
		temp1->next=tail;
		tail=temp1;
		s++;
	}
	
	int top(){
		cout<<"returning the value at top or last\n";
		return tail->data;
	}
	
	void pop(){
		cout<<"removing the last element\n";
		tail=tail->next;
		s--;
	}
	
	int size(){
		cout<<"return the size of the queue\n";
		return s;
	}
	
	bool isEmpty(){
		cout<<"returning if the stack is empty\n";
		if(s<=0)
		return true;
		else
		return false;
	}
};

int main() {
	Stack s; //constructor is called on this line
	s.push(4);
	cout<<"top: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	
	s.push(5);
	s.push(3);
	cout<<"front: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	
	cout<<"top: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	return 0;
}
