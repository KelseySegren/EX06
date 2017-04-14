#include "Complex.h"
#include <cmath>
#include <string>
#include <iostream>
#include <cstdlib>
#include <sstream>

Complex::Complex(double A, double B)
{
	a = A;
	b = B;
}

Complex::Complex(double A)
{
	a = A;
	b = 0;
}

Complex::Complex()
{
	a = 0;
	b = 0;
}

Complex Complex::add(const Complex &c)
{
	double r = getReal() + c.getReal();
	double im = getImaginary() + c.getImaginary();

	Complex newC(r, im);
	return newC;

}


Complex Complex::subtract(const Complex &c)
{
	double r = getReal() - c.getReal();
	double im = getImaginary() - c.getImaginary();

	Complex newC(r, im);
	return newC;

}


Complex Complex::multiply(const Complex &c)
{
	double r = getReal() * c.getReal();
	double im = getImaginary() * c.getImaginary();

	Complex newC(r, im);
	return newC;

}


Complex Complex::divide(const Complex &c)
{
	double r = getReal() / c.getReal();
	double im = getImaginary() / c.getImaginary();

	Complex newC(r, im);
	return newC;

}


Complex Complex::abs(Complex &A)
{
	return sqrt((pow(A.getReal(), 2) + pow(A.getImaginary(), 2)));
}

/*string Complex::toString() {
	string s;
	s << "(" << a << " + " << b << "i)";

	return s.str();
}
*/


double Complex::getReal() const
{
	return real;
}

double Complex::getImaginary() const
{
	return imaginary;
}

Complex Complex::operator+(const Complex & myNum)
{
	return add(myNum);
}

Complex Complex::operator-(const Complex & myNum)
{
	return subtract(myNum);
}

Complex Complex::operator*(const Complex & myNum)
{
	return multiply(myNum);
}

Complex Complex::operator/(const Complex & myNum)
{
	return divide(myNum);
}

Complex& Complex::operator+=(const Complex& c) {
	*this = add(c); 
	return *this;   
}


Complex& Complex::operator-=(const Complex & c)
{
	*this = subtract(c);
	return *this;
}

Complex& Complex::operator*=(const Complex & c)
{
	*this = multiply(c);
	return *this;
}

Complex& Complex::operator/=(const Complex & c)
{
	*this = divide(c);
	return *this;
}

double Complex::operator[](int index) const
{
	if (index == 1)
		return b;
	else if (index == 0)
		return a;
	else
		return 0;
}

Complex Complex::operator+() const
{
	return Complex(a, b);
}

Complex Complex::operator-() const
{
	return Complex(-a, -b);
}

Complex Complex::operator++()
{
	return Complex(++a, b);
}

Complex Complex::operator--()
{
	return Complex(--a, b);
}


//nonmember functions 
Complex operator+(const Complex &myNum, const Complex &myNum2) {
	Complex c = myNum.add(myNum2);
	return c;

}

Complex operator-(const Complex &myNum, const Complex &myNum2) {
	Complex c = myNum.subtract(myNum2);
	return c;
}

Complex operator*(const Complex &myNum, const Complex &myNum2) {
	Complex c = myNum.multiply(myNum2);
	return c;
}

Complex operator/(const Complex &myNum, const Complex &myNum2) {
	Complex c = myNum.divide(myNum2);
	return c;
}