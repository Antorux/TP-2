#include "aeroflot.h"




 

aeroflot::aeroflot()
{
	cout << "aeroflot constructor called" << endl;
	nextPtr = nullptr;
}

string aeroflot::getName()
{
	return prop[NAME];
}
string aeroflot::getNumber()
{
	return prop[NUMBER];
}
string aeroflot::getType()
{
	return prop[TYPE];
}
aeroflot* aeroflot::getNextPtr()
{
	return nextPtr;
}

void aeroflot::setName(string str)
{
	prop[NAME] = str;
}
void aeroflot::setNumber(string str)
{
	prop[NUMBER] = str;
}
void aeroflot::setType(string str)
{
	prop[TYPE] = str;
}
void aeroflot::setNextPtr(aeroflot* p)
{
	nextPtr = p;
}
