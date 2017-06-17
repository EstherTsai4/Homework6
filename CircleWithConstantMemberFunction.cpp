#include "CircleWithConstantMemberFunctions.h"
#include <vector>
#include <iostream>
using namespace std;

int Circle::numberOfObjects = 0;

Circle::Circle()
{
	radius = 1;
	numberOfObjects++;
}

Circle::Circle(double newRadius)
{
	radius = newRadius;
	numberOfObjects++;
}

double Circle::getArea() const
{
	return radius * radius * 3.14159;
}

double Circle::getRadius() const
{
	return radius;
}

void Circle::setRadius(double newRadius)
{
	numberOfObjects++;
	radius = (newRadius >= 0) ? newRadius : 0;
}

int Circle::getNumberOfObjects()
{
	return numberOfObjects;
}

void Circle::orderCircles(vector<Circle> &list)
{
	const int number = numberOfObjects - 1;

	//declare and initialize a vector for radius
	vector<double> radius;

	double minRadius;
	for (int i = 0; i < number; i++)
	{
		//declare temp min
		minRadius = list[i].getRadius();
		int currentMinIndex = i;

		//compare the radius and order list according to radius
		for (int j = i; j < number; j++)
		{
			if (minRadius > list[j].getRadius())
			{
				minRadius = list[j].getRadius();
				currentMinIndex = j;
			}
		}

		//create another temp list for the sorted circle objects
		if (currentMinIndex != i)
		{
			list[currentMinIndex] = list[i];
			list[i] = minRadius;
		}
	}

	for (int i = 0; i < number; i++)
	{
		cout << "Circle " << i << "with radius: " << list[i].getRadius() << endl;
	}
}

