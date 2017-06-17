#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
#include <vector>
using namespace std;

class Circle
{
public:
	Circle();
	Circle(double);
	double getArea() const;
	double getRadius() const;
	void setRadius(double);
	static int getNumberOfObjects();
	void orderCircles(vector<Circle> &list);

private:
	double radius;
	static int numberOfObjects;
};
#endif