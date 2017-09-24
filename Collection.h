// Collection.h

// Jared Spaulding 20 sep 2017
// Declaration of the Collection Class

#ifndef COLLECTION_H
#define COLLECTION_H

#include <iostream>


template <class T> 
class Collection
{
public:
	//*** Standard functions ***

	// Default constructor
	// post: this collection is size x
	Collection(int x);

	//*** Accessors ***

	// post: true returned if collection is empty
	bool isEmpty();

	// post: returns true if x is contained in 
	// collection 
	bool notContained(T x);

	//*** Mutators ***

	// post: collection is made empty
	void makeEmpty();

	// post: x has been added to the end of the 
	// collection
	void insert(T x);

	// post: x was removed from the collection
	void remove(T x);

	// post: random index removed from the collection
	void removeRandom();
	
private:
	//*** Inaccessible standard functions ***

	//*** Helper Functions ***

	// post: moves all T in collection from x
	// left
	void sendLeft(int x);

private:
	int size;
	int currentSize;
	T array[];
};

#endif
