/////////////////
//Kelsey Segren
//13.5 Baby Name Popularity Ranking
/////////////////

/*
Write a program that prompts the user to enter the year, gender, followed by a name, and displays the ranking
of the name for the year.
*/

#include<iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int rank, year;
	string bname, gname;
	int bpop, gpop;

	ifstream filename;
	cout << "Enter the year: " << endl;
	cin >> year;
	

	switch (year)
	{
	case 2010: filename.open("Babynameranking2010.txt");
		break;
	case 2011: filename.open("Babynameranking2011.txt");
		break;
	case 2012: filename.open("Babynameranking2012.txt");
		break;
	case 2013: filename.open("Babynameranking2013.txt");
		break;
	case 2014: filename.open("Babynameranking2014");
		break;
	default:
		cout << "Not a valid year. " << endl;
	}

	char gender;
	string name;

	cout << "Enter the gender: ";
	cin >> gender;
	cout << "Enter the name: ";
	cin >> name;


	if (filename.fail())
	{
		cout << "file not exist. ";
		return 0;
	}
	if (!filename.eof())
	{
		while (!filename.eof())
		{
			filename >> rank >> bname >> bpop >> gname >> gpop;
			if (gender == 'M' || gender == 'm')
			{
				if (name == bname)
				{
					cout << name << "is ranked #" << rank << endl;
					return 0;
				}
			}
			else if (gender == 'F' || gender == 'f')
			{
				if (name == gname)
				{
					cout << name << "is ranked #" << rank << endl;
					return 0;
				}
			}
		}

		filename.close();

	}
}


