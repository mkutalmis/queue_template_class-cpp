#pragma once
#include <iostream>
#ifndef QUEUE_H
#define QUEUE_H
template<class S>
struct Node
{
	S val;
	struct Node* next;
	struct Node* prev;
	Node(S nVal)
	{
		this->val = nVal;
		this->next = nullptr;
		this->prev = nullptr;
	}
};

template<class T>
class Queue
{
public:
	/* Constructor */
	Queue()
	{
		this->head = nullptr;
		this->tail = nullptr;
		this->Q_size = 0;
	}

	/* Add new item to queue */
	void enqueue(T new_item)
	{
		struct Node<T>* nNode = new struct Node<T>(new_item);
		this->Q_size++;
		if (this->head == nullptr)
		{
			this->head = nNode;
			this->tail = nNode;
		}
		else
		{
			nNode->next = this->head;
			nNode->prev = nullptr;
			this->head->prev = nNode;
			this->head = nNode;
		}
	}

	/* Get the item at the tail of queue and remove it from queue */
	T dequeue()
	{
		if (tail == nullptr)
		{
			std::cout << "Queue is empty" << std::endl;
			return (T)nullptr;
		}
		this->Q_size--;
		T ret_value = this->tail->val;
		this->tail = this->tail->prev;
		return ret_value;
	}

	/* Return the head of the queue but don't delete from queue */
	T peek() const
	{
		return this->head->val;
	}

	/* Return the number of elements in the queue */
	int size() const
	{
		return this->Q_size;
	}

	/* Check if queue is empty */
	bool isEmpty() const
	{
		return (head == tail);
	}

	/* Delete all the elements from the queue */
	void clear()
	{
		while (head != tail)
		{
			struct Node<T>* temp = this->head;
			this->head = this->head->next;
			delete temp;
		}
		delete this->head;
		this->head = nullptr;
		this->tail = nullptr;
		this->Q_size = 0;
	}

	/* Destructor */
	~Queue()
	{
		while (head != tail)
		{
			struct Node<T>* temp = this->head;
			this->head = this->head->next;
			delete temp;
		}
		delete this->head;
	}
private:
	struct Node<T>* head;
	struct Node<T>* tail;
	int Q_size;
};
#endif // !QUEUE_H


