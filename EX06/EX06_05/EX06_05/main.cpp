////////////////
//Kelsey Segren
//14.7 Math: The Complex class
///////////////

#include <iostream>
#include <string>
#include "Complex.h"
using namespace std;

int main() {
	double  r1, i1, r2, i2;
	cout << "Enter the first complex number: ";
	cin >> r1 >> i1;

	cout << "Enter the second complex number: ";
	cin >> r1 >> i1;


	Complex n1(r1, i1);
	Complex n2(r2, i2);

	Complex n3 = n1.add(n2);

}