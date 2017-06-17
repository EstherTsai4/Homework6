#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "BabyNames.h"
#include "CircleWithConstantMemberFunctions.h"
#include <vector>
#include "Complex.h"

using namespace std;

int main()
{
	//simulate random number generator
	srand(time(NULL));

	//Exercise 13.1: creating a text file
	fstream file;
	//open the file to write stuff into the file
	file.open("Exercise13_1.txt", ios::out);

	//test if the file exists
	if (file.fail())
	{
		cout << "File can't be opened" << endl;
		return 0;
	}
	else
	{
		//open the file to append to the file
		file.open("Exercise13_1.txt", ios::out | ios::app);
		
		//loop to append 100 random numbers into the file
		for (int i = 1; i < 101; i++)
		{
			//add number to file with a space after the number
			file << rand() % 101 << " ";
		}
	}

	//Exercise 13.2 Count Characters
	//create a file with some characters in it
	fstream file1("count_char.txt", ios::out);
	file1 << 'a' <<  'b' << 2 <<  3 << 'c' << endl;

	file1.close();

	string filename;

	//ask the user to enter in a file name
	cout << "What is the filename of the file you would like to open? ";
	cin >> filename;

	//open the file name
	fstream file2(filename.c_str(), ios::in);

	//check if the file exists
	if (file2.fail())
	{
		cout << "File does not exist. " << endl;
		return 0;
	}

	//declare variables for count
	int count = 0;

	//read data for characters until the end of the line
	while (!file2.eof())
	{
		//if the read character is a character, increase the count
		if (isalpha(file2.get()))
		{
			count++;
		}
	}
	
	//display the count
	cout << "The number of characters in the file is: " << count << endl;

	//close file
	file2.close();

	//Exercise 13.5 Baby Names
	//declare variables for prompting user
	int year;
	char gender;
	string name;

	//ask user what year, gender, and name
	cout << "Enter the year: ";
	cin >> year;
	cout << "Enter the gender (M or F): ";
	cin >> gender;
	cout << "Enter the name: ";
	cin.ignore();
	getline(cin, name);

	//call function to find the rank
	findRank(year, gender, name);
	
	//Exercise 14.3 The Circle Class
	//make a whole bunch of circle objects, but store each object in a vector class
	//declare and initiliaze variables
	double radius;
	char choice;
	vector<Circle> list;
	Circle temp;

	//ask user to input radius to create circle
	cout << "Enter in a radius: ";
	cin >> radius;
	temp.setRadius(radius);
	list.push_back(temp);

	//ask if user wants to make another circle
	cout << "Would you like to make another circle? (y or n)";
	cin >> choice;

	while (tolower(choice) != 'n')
	{
		cout << "Enter in a radius: ";
		cin >> radius;
		temp.setRadius(radius);
		list.push_back(temp);

		//ask if user wants to make another circle
		cout << "Would you like to make another circle? (y or n) ";
		cin >> choice;
	}

	//call function to order the circle from least radius to greatest
	temp.orderCircles(list); 


	//Exercise 14.7: The Complex Class
	//ask user to input the components of the first complex number (uses ifstream)
	Complex num1;
	cout << "Enter the first complex number: " << endl;
	cin >> num1;

	Complex num2;
	cout << "Enter the second complex number: " << endl;
	cin >> num2;

	//test the addition and subtraction and multiplication and division
	//display using a string function of the complex number then call operators
	cout << num1.toInteger() << " + " << num2.toInteger() << " = " << num1 + num2 << endl;
	cout << num1.toInteger() << " - " << num2.toInteger() << " = " << num1 - num2 << endl;
	cout << num1.toInteger() << " * " << num2.toInteger() << " = " << num1 * num2 << endl;
	cout << num1.toInteger() << " / " << num2.toInteger() << " = " << num1 / num2 << endl;
	cout << "|" << num1.toInteger() << "|" << " = " << num1.absoluteValue() << endl;

	return 0;

}