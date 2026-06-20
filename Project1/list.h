#pragma once
#include <stdexcept>
#include <utility>

template<typename T>
class Node {
private:
	T data;
	Node<T>* next;
	Node<T>* prev;
public:	
	const T& getData() const { return data; }
	Node<T>* getNext() const { return next; }
	Node<T>* getPrev() const { return prev; }

	void setData(T value) { data = value; }
	void setNext(Node<T>* n) { next = n; }
	void setPrev(Node<T>* p) { prev = p; }    

	Node(T value) : data(value), next(nullptr), prev(nullptr) {}
	Node() : data(T()), next(nullptr), prev(nullptr) {}

};


template<typename T>
class List {
private:
	int length;
	Node<T>* head;
	Node<T>* tail;
public:
	List() : length(0), head(nullptr), tail(nullptr) {}
	List(const T* arr, int n) : List() {
		for (int i = 0; i < n; ++i) push_back(arr[i]);
	}

	List(const List& other) : length(0), head(nullptr), tail(nullptr) {
		Node<T>* cur = other.head;
		while (cur) {
			push_back(cur->getData());
			cur = cur->getNext();
		}
	}

	List& operator=(const List& other) {
		if (this != &other) {
			List tmp(other);
			std::swap(length, tmp.length);
			std::swap(head, tmp.head);
			std::swap(tail, tmp.tail);
		}
		return *this;
	}

	List(List&& other) noexcept : length(other.length), head(other.head), tail(other.tail) {
		other.length = 0;
		other.head = other.tail = nullptr;
	}

	List& operator=(List&& other) noexcept {
		if (this != &other) {
			clear();
			length = other.length;
			head = other.head;
			tail = other.tail;
			other.length = 0;
			other.head = other.tail = nullptr;
		}
		return *this;
	}
	~List() { 
		Node<T>* current = head; 
		while (current) { 
			Node<T>* next = current->getNext(); 
			delete current; current = next; 
		} 
		head = tail = nullptr; 
		length = 0; 
	}
	void setHead(Node<T>* hd) { head = hd; }
	void setTail(Node<T>* tl) { tail = tl; }

	Node<T>* getHead() const { return head; }
	Node<T>* getTail() const { return tail; }

	void push_back(const T data) {
		Node<T>* node = new Node<T>(data);
		if (tail == nullptr) {
			head = tail = node;
		}
		else {
			tail->setNext(node);
			node->setPrev(tail);
			tail = node;
		}
		++length;
	}

	void push_front(const T data) {
		Node<T>* node = new Node<T>(data);
		if (head == nullptr) {
			head = tail = node;
		}
		else {
			head->setPrev(node);
			node->setNext(head);
			head = node;
		}
		++length;
	}

	int size() const { return length; }

	void clear() {
		for (Node<T>* current = head; current != nullptr; ) {
			Node<T>* next = current->getNext();
			delete current;
			current = next;
		}
		head = tail = nullptr;
		length = 0;
	}

	T operator[](int index) const {
		if (index < 0 || index >= length) {
			throw std::out_of_range("Index out of bounds");
		}
		Node<T>* current = head;
		for (int i = 0; i < index; ++i) {
			current = current->getNext();
		}
		return current->getData();
	}
};

template <typename T>
class ListModel {
private:
	int leight;
	Node<List<T>>* head;
	Node<List<T>>* tail;
public:
	int getLeight() const { return leight; }
	void setLeight(int len) { leight = len; }

	Node<List<T>>* getHead() const { return head; }
	Node<List<T>>* getTail() const { return tail; }

	void setHead(Node<List<T>>* hd) { head = hd; }
	void setTail(Node<List<T>>* tl) { tail = tl; }

	ListModel() : leight(0), head(nullptr), tail(nullptr) {}

	ListModel(const ListModel& other) : leight(0), head(nullptr), tail(nullptr) {
		Node<List<T>>* current = other.head;
		while (current != nullptr) {
			push_back(current->getData());
			current = current->getNext();
		}
	}

	ListModel& operator=(const ListModel& other) {
		if (this != &other) {
			ListModel tmp(other);
			std::swap(leight, tmp.leight);
			std::swap(head, tmp.head);
			std::swap(tail, tmp.tail);
		}
		return *this;
	}

	// Move-семантика
	ListModel(ListModel&& other) noexcept : leight(other.leight), head(other.head), tail(other.tail) {
		other.leight = 0;
		other.head = nullptr;
		other.tail = nullptr;
	}

	ListModel& operator=(ListModel&& other) noexcept {
		if (this != &other) {
			Node<List<T>>* current = head;
			while (current != nullptr) {
				Node<List<T>>* next = current->getNext();
				delete current;
				current = next;
			}
			head = tail = nullptr;
			leight = 0;

			leight = other.leight;
			head = other.head;
			tail = other.tail;
			other.leight = 0;
			other.head = nullptr;
			other.tail = nullptr;
		}
		return *this;
	}

	~ListModel() {
		Node<List<T>>* current = head;
		while (current != nullptr) {
			Node<List<T>>* next = current->getNext();
			delete current;
			current = next;
		}
		head = tail = nullptr;
		leight = 0;
	}

	// push_back/push_front: перегрузки для копирования и перемещения
	void push_back(const List<T>& data) {
		Node<List<T>>* node = new Node<List<T>>(data);
		if (tail == nullptr) {
			head = tail = node;
		} else {
			tail->setNext(node);
			node->setPrev(tail);
			tail = node;
		}
		++leight;
	}

	void push_back(List<T>&& data) {
		Node<List<T>>* node = new Node<List<T>>(std::move(data));
		if (tail == nullptr) {
			head = tail = node;
		} else {
			tail->setNext(node);
			node->setPrev(tail);
			tail = node;
		}
		++leight;
	}

	void push_front(const List<T>& data) {
		Node<List<T>>* node = new Node<List<T>>(data);
		if (head == nullptr) {
			head = tail = node;
		} else {
			head->setPrev(node);
			node->setNext(head);
			head = node;
		}
		++leight;
	}

	void push_front(List<T>&& data) {
		Node<List<T>>* node = new Node<List<T>>(std::move(data));
		if (head == nullptr) {
			head = tail = node;
		} else {
			head->setPrev(node);
			node->setNext(head);
			head = node;
		}
		++leight;
	}

};
