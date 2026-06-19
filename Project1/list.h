#pragma once

template<typename T>
class Node {
private:
	T data;
	Node* next;
	Node* prev;
public:	
	T getData() const { return data; }
	Node* getNext() const { return next; }
	Node* getPrev() const { return prev; }

	void setData(T value) { data = value; }
	void setNext(Node* n) { next = n; }
	void setPrev(Node* p) { prev = p; }	

	Node(T value) : data(value), next(nullptr), prev(nullptr) {}
	Node() : data(T()), next(nullptr), prev(nullptr) {}

	~Node(){}

	Node(const Node& other) : data(other.data), next(other.next), prev(other.prev) {}

};


template<typename T>
class List {
private:
	int length;
	Node<T>* head;
	Node<T>* tail;
public:
	List() : length(0), head(nullptr), tail(nullptr) {}
	
	void setHead(Node<T>* hd) { head = hd; }
	void setTail(Node<T>* tl) { tail = tl; }

	Node<T>* getHead() const { return head; }
	Node<T>* getTail() const { return tail; }

	void push_back(T data) {
		Node<T> node(data);
		tail->setNext(node);
		node->setPrev(tail);
		tail = node;
	}
};