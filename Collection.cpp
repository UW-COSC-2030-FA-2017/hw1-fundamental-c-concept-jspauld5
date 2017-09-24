// Collection.cpp

// Jared Spaulding 20 sep 2017
// Definition of methods for the Collection class.

#include "Collection.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

template<class T>
Collection<T>::Collection(int s)
{
	array [size];
	size = s;
	currentSize = 0;
}

template<class T>
bool Collection<T>::isEmpty()
{
	if (currentSize == 0)
		return true;
	else 
		return false;
}

template<class T>
bool Collection<T>::notContained(T val)
{
	if (!isEmpty()) {
		for (int i = 0; i < size; i++)
		{
			if (array[i] == val)
				return false;
		}
	}

	return true;
}

template<class T>
void Collection<T>::makeEmpty()
{
	currentSize = 0;
	cout << "Empty Collection" << endl;
}

template<class T>
void Collection<T>::insert(T val) 
{
	if (isEmpty()) 
	{
		array[0] = val;
		cout << "insert: " << val << endl;

	}
	else 
	{
		if (currentSize < size)
		{
			array[currentSize] = val;
			cout << "insert: " << val << endl;
		}
		else
			cout << "Error inserting: " << val << " --Collection full" << endl;
	}
	currentSize++;
}

template<class T>
void Collection<T>::remove(T val)
{
	if (!isEmpty()) 
	{
		for (int i = 0; i < size; i++) 
		{
			if (array[i] == val) 
			{
				sendLeft(i);
				i--;
				cout << "remove: " << val << endl; 
			}
		}
	}
	else 
		cout << "Error removing: " << val << " --Collection is empty" << endl;

}

template<class T>
void Collection<T>::removeRandom()
{
	if (!isEmpty())
	{
		// got this random number code from dreamincode.net
		srand(time(NULL));
		int rnum = rand() % size;
		sendLeft(rnum);
		cout << "Removed Random" << endl;
	}
	else
		cout << "Error removing random value --Collection is empty" << endl;
}

template<class T>
void Collection<T>::sendLeft(int pos)
{
	for (int i = pos; i < (size -1); i++)
	{
		array[i] = array[i + 1];
	}
	currentSize--;
}

