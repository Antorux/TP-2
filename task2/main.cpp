#include <iostream>
#include <fstream>

using namespace std;

bool isDevider(string ch)
{
	return (ch == "." || ch == "!" || ch == "?" || ch == "\"");
}
bool isDeviderExt(string ch)
{
	return (ch == "." || ch == "!" || ch == "?" || ch == "\"" || ch == " " || ch == "\t" || ch == "\n");
}

void readFile()
{
	ifstream fin;
	string filename = "text.txt";

	fin.open(filename);
	if (!fin.is_open())
	{
		throw "EXEPTION: no file such as " + filename + " was found";
	}

	string str[3];
	string c;
	char ch;
	int count = 0;
	while (!fin.eof() && count < 3)
	{
		fin.get(ch);
		c = ch;

		if (!isDeviderExt(c))
		{
			while (!fin.eof())
			{
				str[count] += c;
				fin.get(ch);
				c = ch;
				if (isDevider(c))
				{
					count++;
					break;
				}
			}
		}
	}

	fin.close();

	cout << "'" << str[2] << "'" << endl;
	cout << "'" << str[1] << "'" << endl;
	cout << "'" << str[0] << "'" << endl;
}


int main()
{
	try {
		readFile();

	}
	catch(string m)
	{
		cout << m << endl;

	}

	return 0;
}