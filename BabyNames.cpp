#include "BabyNames.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdbool>

using namespace std;

void findRank(int year, char gender, string name)
{
	//open file corresponding to year
	if (year == 2016)
	{
		ifstream file("BabyNamesRanking2016.txt");

		//read the file as: rank, boyname, numberofboys, girlname, numberofgirls
		int rank;
		string boyname, numberofboys,
			girlname, numberofgirls;

		const int SIZE = 1000;
		int ranklist[SIZE];
		string boynamelist[SIZE], numberofboyslist[SIZE],
			girlnamelist[SIZE], numberofgirlslist[SIZE];

		//store each data variable in an array 
		for (int i = 0; i < SIZE; i++)
		{
			file >> rank >> boyname >> numberofboys >> girlname >> numberofgirls;
			ranklist[i] = rank;
			boynamelist[i] = boyname;
			girlnamelist[i] = girlname;
		}

		bool isFound = true;
		//search the right array of names based on the gender given
		if (tolower(gender) == 'm')
		{
			//search boyname array for matching name and store the index
			for (int i = 0; i < SIZE; i++)
			{
				if (boynamelist[i] == name)
				{
					cout << name << " is ranked #" << ranklist[i] << " in year " << year << endl;
					isFound = true;
					break;
				}
				else
				{
					isFound = false;
				}
			}
			
		}
		else if (tolower(gender) == 'f')
		{
			//search girlname array for matching name and store the index
			for (int i = 0; i < SIZE; i++)
			{
				if (girlnamelist[i] == name)
				{
					cout << name << " is ranked #" << ranklist[i] << " in year " << year << endl;
					isFound = true;
					break;
				}
				else
				{
					isFound = false;
				}
			}

		}
		if (isFound == false)
		{
			cout << "The name " << name << " is not ranked in year " << year << endl;
		}


	}
	else if (year == 2015)
	{
		ifstream file("BabyNamesRanking2015.txt");

		//read the file as: rank, boyname, numberofboys, girlname, numberofgirls
		int rank;
		string boyname, numberofboys,
			girlname, numberofgirls;

		const int SIZE = 1000;
		int ranklist[SIZE];
		string boynamelist[SIZE], numberofboyslist[SIZE],
			girlnamelist[SIZE], numberofgirlslist[SIZE];

		//store each data variable in an array 
		for (int i = 0; i < SIZE; i++)
		{
			file >> rank >> boyname >> numberofboys >> girlname >> numberofgirls;
			ranklist[i] = rank;
			boynamelist[i] = boyname;
			girlnamelist[i] = girlname;
		}

		bool isFound = true;
		//search the right array of names based on the gender given
		if (tolower(gender) == 'm')
		{
			//search boyname array for matching name and store the index
			for (int i = 0; i < SIZE; i++)
			{
				if (boynamelist[i] == name)
				{
					cout << name << " is ranked #" << ranklist[i] << " in year " << year << endl;
					isFound = true;
					break;
				}
				else
				{
					isFound = false;
				}
			}

		}
		else if (tolower(gender) == 'f')
		{
			//search girlname array for matching name and store the index
			for (int i = 0; i < SIZE; i++)
			{
				if (girlnamelist[i] == name)
				{
					cout << name << " is ranked #" << ranklist[i] << " in year " << year << endl;
					isFound = true;
					break;
				}
				else
				{
					isFound = false;
				}
			}

		}
		if (isFound == false)
		{
			cout << "The name " << name << " is not ranked in year " << year << endl;
		}


	}
	else if (year == 2014)
	{
		ifstream file("BabyNamesRanking2014.txt");

		//read the file as: rank, boyname, numberofboys, girlname, numberofgirls
		int rank;
		string boyname, numberofboys,
			girlname, numberofgirls;

		const int SIZE = 1000;
		int ranklist[SIZE];
		string boynamelist[SIZE], numberofboyslist[SIZE],
			girlnamelist[SIZE], numberofgirlslist[SIZE];

		//store each data variable in an array 
		for (int i = 0; i < SIZE; i++)
		{
			file >> rank >> boyname >> numberofboys >> girlname >> numberofgirls;
			ranklist[i] = rank;
			boynamelist[i] = boyname;
			girlnamelist[i] = girlname;
		}

		bool isFound = true;
		//search the right array of names based on the gender given
		if (tolower(gender) == 'm')
		{
			//search boyname array for matching name and store the index
			for (int i = 0; i < SIZE; i++)
			{
				if (boynamelist[i] == name)
				{
					cout << name << " is ranked #" << ranklist[i] << " in year " << year << endl;
					isFound = true;
					break;
				}
				else
				{
					isFound = false;
				}
			}

		}
		else if (tolower(gender) == 'f')
		{
			//search girlname array for matching name and store the index
			for (int i = 0; i < SIZE; i++)
			{
				if (girlnamelist[i] == name)
				{
					cout << name << " is ranked #" << ranklist[i] << " in year " << year << endl;
					isFound = true;
					break;
				}
				else
				{
					isFound = false;
				}
			}

		}
		if (isFound == false)
		{
			cout << "The name " << name << " is not ranked in year " << year << endl;
		}

	}
	else if (year == 2013)
	{
		ifstream file("BabyNamesRanking2013.txt");

		//read the file as: rank, boyname, numberofboys, girlname, numberofgirls
		int rank;
		string boyname, numberofboys,
			girlname, numberofgirls;

		const int SIZE = 1000;
		int ranklist[SIZE];
		string boynamelist[SIZE], numberofboyslist[SIZE],
			girlnamelist[SIZE], numberofgirlslist[SIZE];

		//store each data variable in an array 
		for (int i = 0; i < SIZE; i++)
		{
			file >> rank >> boyname >> numberofboys >> girlname >> numberofgirls;
			ranklist[i] = rank;
			boynamelist[i] = boyname;
			girlnamelist[i] = girlname;
		}

		bool isFound = true;
		//search the right array of names based on the gender given
		if (tolower(gender) == 'm')
		{
			//search boyname array for matching name and store the index
			for (int i = 0; i < SIZE; i++)
			{
				if (boynamelist[i] == name)
				{
					cout << name << " is ranked #" << ranklist[i] << " in year " << year << endl;
					isFound = true;
					break;
				}
				else
				{
					isFound = false;
				}
			}

		}
		else if (tolower(gender) == 'f')
		{
			//search girlname array for matching name and store the index
			for (int i = 0; i < SIZE; i++)
			{
				if (girlnamelist[i] == name)
				{
					cout << name << " is ranked #" << ranklist[i] << " in year " << year << endl;
					isFound = true;
					break;
				}
				else
				{
					isFound = false;
				}
			}

		}
		if (isFound == false)
		{
			cout << "The name " << name << " is not ranked in year " << year << endl;
		}


	}
	else if (year == 2012)
	{
		ifstream file("BabyNamesRanking2012.txt");

		//read the file as: rank, boyname, numberofboys, girlname, numberofgirls
		int rank;
		string boyname, numberofboys,
			girlname, numberofgirls;

		const int SIZE = 1000;
		int ranklist[SIZE];
		string boynamelist[SIZE], numberofboyslist[SIZE],
			girlnamelist[SIZE], numberofgirlslist[SIZE];

		//store each data variable in an array 
		for (int i = 0; i < SIZE; i++)
		{
			file >> rank >> boyname >> numberofboys >> girlname >> numberofgirls;
			ranklist[i] = rank;
			boynamelist[i] = boyname;
			girlnamelist[i] = girlname;
		}

		bool isFound = true;
		//search the right array of names based on the gender given
		if (tolower(gender) == 'm')
		{
			//search boyname array for matching name and store the index
			for (int i = 0; i < SIZE; i++)
			{
				if (boynamelist[i] == name)
				{
					cout << name << " is ranked #" << ranklist[i] << " in year " << year << endl;
					isFound = true;
					break;
				}
				else
				{
					isFound = false;
				}
			}

		}
		else if (tolower(gender) == 'f')
		{
			//search girlname array for matching name and store the index
			for (int i = 0; i < SIZE; i++)
			{
				if (girlnamelist[i] == name)
				{
					cout << name << " is ranked #" << ranklist[i] << " in year " << year << endl;
					isFound = true;
					break;
				}
				else
				{
					isFound = false;
				}
			}

		}
		if (isFound == false)
		{
			cout << "The name " << name << " is not ranked in year " << year << endl;
		}


	}
	else if (year == 2011)
	{
		ifstream file("BabyNamesRanking2011.txt");

		//read the file as: rank, boyname, numberofboys, girlname, numberofgirls
		int rank;
		string boyname, numberofboys,
			girlname, numberofgirls;

		const int SIZE = 1000;
		int ranklist[SIZE];
		string boynamelist[SIZE], numberofboyslist[SIZE],
			girlnamelist[SIZE], numberofgirlslist[SIZE];

		//store each data variable in an array 
		for (int i = 0; i < SIZE; i++)
		{
			file >> rank >> boyname >> numberofboys >> girlname >> numberofgirls;
			ranklist[i] = rank;
			boynamelist[i] = boyname;
			girlnamelist[i] = girlname;
		}

		bool isFound = true;
		//search the right array of names based on the gender given
		if (tolower(gender) == 'm')
		{
			//search boyname array for matching name and store the index
			for (int i = 0; i < SIZE; i++)
			{
				if (boynamelist[i] == name)
				{
					cout << name << " is ranked #" << ranklist[i] << " in year " << year << endl;
					isFound = true;
					break;
				}
				else
				{
					isFound = false;
				}
			}

		}
		else if (tolower(gender) == 'f')
		{
			//search girlname array for matching name and store the index
			for (int i = 0; i < SIZE; i++)
			{
				if (girlnamelist[i] == name)
				{
					cout << name << " is ranked #" << ranklist[i] << " in year " << year << endl;
					isFound = true;
					break;
				}
				else
				{
					isFound = false;
				}
			}

		}
		if (isFound == false)
		{
			cout << "The name " << name << " is not ranked in year " << year << endl;
		}
	}
	else
	{
		ifstream file("BabyNamesRanking2010.txt");

		//read the file as: rank, boyname, numberofboys, girlname, numberofgirls
		int rank;
		string boyname, numberofboys,
			girlname, numberofgirls;

		const int SIZE = 1000;
		int ranklist[SIZE];
		string boynamelist[SIZE], numberofboyslist[SIZE],
			girlnamelist[SIZE], numberofgirlslist[SIZE];

		//store each data variable in an array 
		for (int i = 0; i < SIZE; i++)
		{
			file >> rank >> boyname >> numberofboys >> girlname >> numberofgirls;
			ranklist[i] = rank;
			boynamelist[i] = boyname;
			girlnamelist[i] = girlname;
		}

		bool isFound = true;
		//search the right array of names based on the gender given
		if (tolower(gender) == 'm')
		{
			//search boyname array for matching name and store the index
			for (int i = 0; i < SIZE; i++)
			{
				if (boynamelist[i] == name)
				{
					cout << name << " is ranked #" << ranklist[i] << " in year " << year << endl;
					isFound = true;
					break;
				}
				else
				{
					isFound = false;
				}
			}

		}
		else if (tolower(gender) == 'f')
		{
			//search girlname array for matching name and store the index
			for (int i = 0; i < SIZE; i++)
			{
				if (girlnamelist[i] == name)
				{
					cout << name << " is ranked #" << ranklist[i] << " in year " << year << endl;
					isFound = true;
					break;
				}
				else
				{
					isFound = false;
				}
			}

		}
		if (isFound == false)
		{
			cout << "The name " << name << " is not ranked in year " << year << endl;
		}

	}
}