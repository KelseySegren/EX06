//////////////////
//Kelsey Segren
//13.2 Count Characters
//EX06_02
//////////////////

/*
Write a program that prompts the user to enter a file name and displays the number of characters
in the file. 
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream fin;
	string file;
	cout << "Enter a file name: " << endl;
	cin >> file;
	fin.open(file);

	if (!fin) {
		cout << "can't open file " << endl;
		return 0;
	}

	int count = 0;
	while (!fin.eof()) {
		fin.get();
		count++;
	}
	count--;
	fin.close();
	cout << "Characters in file: " << count << endl;
	return 0;
	   
	
}