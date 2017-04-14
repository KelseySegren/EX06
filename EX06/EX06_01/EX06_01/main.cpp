///////////////
//Kelsey Segren
//13.1 Create a text file
//EX06_01
///////////////

/*
Write a program to create a file named Exercise.txt if it does not exist. If it does exist, append new data to it.
Write 100 integers created randomly into the file using text I/O. Integers are separated by a space.
*/

#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main() {
	ofstream fout; //Declare ofstream object
	fout.open("Exercise.txt", ios::app);	//Open file. File will be created if it does not exist. Erased if it does.

	if (fout.fail()) { //check if open successful 
		cout << "can't open file " << endl;
		return 0;
	}
	
	srand(time(NULL));
	for (int i = 0; i < 100; i++) {
	    int x = rand() % 100 + 1;
		fout << x << " " << endl;
	}

	fout.close(); //close the file
}

