#include "Aeroflot.h"
#include <string>

template <typename T>
void mcin(T* _x);

class myList
{
	int size = 0;
	aeroflot* HEAD;
	aeroflot* LAST;
	bool a_to_z_flag;

	aeroflot* operator[](int idx);
	void sort();

public:
	
	myList();

	void flipFlag();
	void seeFlag();

	void add();
	void print();
	void del();
	void edit();
	void findType();
	void findFlight();
};