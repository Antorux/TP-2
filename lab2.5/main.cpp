#include <iostream>
#include "List.h"

using namespace std;

void menuPrint()
{
	cout << endl << "\tMenu" << endl;
	cout << "1 - Print objects" << endl;
	cout << "2 - Add object" << endl;
	cout << "3 - Edit object" << endl;
	cout << "4 - Delete object" << endl;
	cout << "5 - Find planes by type" << endl;
	cout << "6 - Find a plane by itinerary number" << endl;
	cout << "0 - Exit programm" << endl;
}

void menu()
{
	myList obj;

	int take = 0;

	while (1)
	{
		menuPrint();
		

		mcin(&take);
		switch (take)
		{
		case 0:
			return;

		case 1:
			system("cls");
			obj.print();
			break;

		case 2:
			obj.add();
			break;

		case 3:
			try {
				obj.edit();
			}
			catch (int e)
			{
				if (e == -1)
					cout << "EXEPTION: invalid index" << endl;
				if (e == 0)
					cout << "EXEPTION: no objects added yet" << endl;
			}
			break;

		case 4:
			try {
				obj.del();
			}
			catch (int e)
			{
				if (e == -1)
					cout << "EXEPTION: invalid index" << endl;
				if (e == 0)
					cout << "EXEPTION: no objects added yet" << endl;
			}
			break;

		case 5:
			try {
				system("cls");
				obj.findType();
			}
			catch (int e)
			{
				if (e == 0)
					cout << "EXEPTION: no objects added yet" << endl;
			}
			break;
		case 6 :
			system("cls");
			obj.findFlight();
			break;
		default:
			cout << "unknown" << endl;
		}
	}


}

int main()
{
	menu();

	return 0;
}