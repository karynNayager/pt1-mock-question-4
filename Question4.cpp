///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:
// Student No:
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////

// ***** QUESTION 4 ****
// Question 4 has 3 parts (you do NOT need to include each class in a separate file!)
// 4.1 Create a virtual base class "Animal" which has two methods, name() and does(). 
// 4.2 From class "Animal", derive a concrete class "Bird" and "Dog".  Print appropriate message for
//     each method.
// 4.3 Write a driver program which creates an object of each type and demonstrates POLYMORPHISM. 
#include <iostream>
#include "string.h"

using namespace std;

class Animal
{
public:
	virtual void name()

	{
		cout << "Nameless" << endl;
	}
	virtual void does()
	{

	}
	virtual void age()
	{
		cout << "I iz very old" << endl;
	}
};

class bird : public Animal
{
	void name()
	{
		cout << "My name jeff" << endl;
	}
	void does()
	{
		cout << "I does cocaine" << endl;
	}
};
class dog : public Animal
{
	void name()
	{
		cout << "My name spot" << endl;
	}
	void does()
	{
		cout << "I does hunt" << endl;
	}
};

int main()
{
	Animal *obj;
	dog mydog;
	bird mybird;
	obj = &mybird;

	obj->name();
	obj->does();
	obj->age();

	obj = &mydog;

	obj->name();
	obj->does();
	obj->age();
}