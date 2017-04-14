#ifndef CIRCLE_H_
#define CIRCLE_H_

static const double PI = 3.14159;

class Circle
{
private:
	double _radius;
	static int numberOfObjects;

public:
	Circle();
	Circle(double radius);
	double getArea() const;
	double getRadius() const;
	void setRadius(double radius);
	static int getNumberOfObjects();
	Circle subtract(const Circle& c2) const;
	int compareTo(const Circle& c2) const;
};

bool operator==(const Circle& c1, const Circle& c2);
bool operator<(const Circle& c1, const Circle& c2);
bool operator<=(const Circle& c1, const Circle& c2);
bool operator!=(const Circle& c1, const Circle& c2);
bool operator>(const Circle& c1, const Circle& c2);
bool operator>=(const Circle& c1, const Circle& c2);

#endif