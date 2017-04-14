#include "Circle.h"

int Circle::numberOfObjects = 0;

Circle::Circle() {
	_radius = 1;
	numberOfObjects++;
}

Circle::Circle(double radius) {
	_radius = radius;
	numberOfObjects++;
}

double Circle::getArea() const {
	return _radius * _radius * PI;
}

double Circle::getRadius() const {
	return _radius;
}

void Circle::setRadius(double radius) {
	_radius = radius;
}

int Circle::getNumberOfObjects() {
	return numberOfObjects;
}

Circle Circle::subtract(const Circle& c2) const {
	double r = _radius - c2.getRadius();
	return r;
}

int Circle::compareTo(const Circle& c2) const {
	Circle temp = subtract(c2);
	if (temp.getRadius() < 0)
		return -1;
	else if (temp.getRadius() == 0)
		return 0;
	else
		return 1;
}

bool operator==(const Circle& c1, const Circle& c2) {
	return c1.compareTo(c2) == 0;
} 

bool operator<(const Circle& c1, const Circle& c2) {
	return c1.compareTo(c2) < 0;
}

bool operator<=(const Circle& c1, const Circle& c2) {
	return c1.compareTo(c2) <= 0;
}

bool operator!=(const Circle& c1, const Circle& c2) {
	return c1.compareTo(c2) != 0;
}

bool operator>(const Circle& c1, const Circle& c2) {
	return c1.compareTo(c2) > 0;
}

bool operator>=(const Circle& c1, const Circle& c2) {
	return c1.compareTo(c2) >= 0;
}
