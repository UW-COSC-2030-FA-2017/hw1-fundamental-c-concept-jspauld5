// CollectionProssessor.cpp

// Jared Spaulding 20 sep 2017
// Excercise the Collection class with verbose


#include "Collection.cpp"
#include <iostream>

using namespace std;

int main() 
{
	// create an instance of Collection of size three
	// and type float
	Collection <float> c(3);

	// check to see if collection is empty
	cout << "Is Empty? " << c.isEmpty() << endl;

	// insert two floats '20'
	c.insert(20);
	c.insert(20);

	// check to see if collection is empty
	cout << "Is Empty? " << c.isEmpty() << endl;

	// remove float '20' from collection 
	c.remove(20);

	// check to see if collection is empty now
	cout << "Is Empty? " << c.isEmpty() << endl;

	// insert three different floats 
	// '10', '20', and '30'
	c.insert(10);
	c.insert(20);
	c.insert(30);

	// remove a random index of collection
	c.removeRandom();

	// check which float was removed by using 
	// notContained function
	cout << "Check for 10: " << c.notContained(10) << endl;
	cout << "Check for 20: " << c.notContained(20) << endl;
	cout << "Check for 30: " << c.notContained(30) << endl;

	// check to see if collection is empty (shouldn't be)
	cout << "Is Empty? " << c.isEmpty() << endl;

	// make the Collection empty
	c.makeEmpty();

	// check to see if collection is empty now (should bes)
	cout << "Is Empty? " << c.isEmpty() << endl << endl;

	// end of program
	cout << "End of Program" << endl;

	return 0;
}	