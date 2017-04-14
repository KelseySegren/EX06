#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <sstream>
class Complex {
private:
	double a, b, i;

public:
	int real, imaginary;
	Complex add(const Complex &c);
	Complex subtract(const Complex &c);
	Complex multiply(const Complex &c);
	Complex divide(const Complex &c);
	Complex abs(Complex &A);
	//string toString();
	Complex(double A, double B);
	Complex(double A);
	Complex();
	double getReal() const;
	double getImaginary() const;

	//Overload the operators +,-,*,/,+=,-=,*=,/=,[]
	Complex operator+(const Complex & myNum);
	Complex operator-(const Complex & myNum);
	Complex operator*(const Complex & myNum);
	Complex operator/(const Complex & myNum);

	Complex& operator+=(const Complex& c);
	Complex& operator-=(const Complex & myNum);
	Complex& operator*=(const Complex & myNum);
	Complex& operator/=(const Complex & myNum);
	double operator[](int index) const;

	//Overload unary + and -
	Complex operator+() const;
	Complex operator-() const;
	
	//Overload prefix ++ and --
	Complex operator++();
	Complex operator--();

};

//Overload the operators +,-,*,/ as nonmember functions.
Complex operator+(const Complex &myNum, const Complex &myNum2);
Complex operator-(const Complex &myNum, const Complex &myNum2);
Complex operator*(const Complex &myNum, const Complex &myNum2);
Complex operator/(const Complex &myNum, const Complex &myNum2);


#endif