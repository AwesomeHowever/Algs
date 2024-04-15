#include <iostream>
#include "algs_stack.h"

template<class T>
Algs::structs_of_data::stack<T>::stack()
{
	heap = new node<T>;
	heap->prev = nullptr;
	_empty = true;
	count = 0;
}

template<class T>
void Algs::structs_of_data::stack<T>::push(T val)
{
	_empty = false;
	current = new node<T>;
	current->data = val;
	current->prev = heap;
	heap = current;
	current = nullptr;
	count++;
}

template<class T>
T Algs::structs_of_data::stack<T>::pop()
{
	if (_empty) exit(-1);
	if (heap->prev->prev == nullptr)
	{
		_empty = true;
		count--;
		return heap->data;
	}

	T p = heap->data;
	node<T>* prev = heap->prev;

	delete heap;
	heap = prev;
	if (prev->prev == nullptr) _empty = true;

	count--;

	return p;
}

template<class T>
T Algs::structs_of_data::stack<T>::top()
{
	return heap->data;
}

template<class T>
bool Algs::structs_of_data::stack<T>::empty()
{
	return _empty;
}

template<class T>
void Algs::structs_of_data::stack<T>::clear()
{
	bool res = false;
	node<T>* c;
	while (heap->prev)
	{
		c = heap;
		heap = heap->prev;
		delete c;
	}

	_empty = true;
	count = 0;
}

template<class T>
int Algs::structs_of_data::stack<T>::size()
{
	return count;
}

template<class T>
Algs::structs_of_data::stack<T>::~stack()
{
	node<T>* c;
	while (heap->prev)
	{
		c = heap;
		heap = heap->prev;
		delete c;
	}

	if (heap) delete heap;
	if (current) delete current;
}