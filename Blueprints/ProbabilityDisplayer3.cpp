#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int numItems;
int numSides;
float probability = 0.0;
float probabilities[100] = {}; // Array for probability of an individual side
int numSidesPerItem[100]; // Array for number of sides within each item

int TEST_VALUE;

void calcProbabilities(int item, int side, int objectSide);
int sideRecurrence(int itemNum);
int productOfSides();
int product;

int main()
{
	cout << "Please enter the number of items: ";
	cin >> numItems;
	cout << endl;
	
	for (int i = 0; i < numItems; i++)
	{
		cout << "Please enter the number of sides in item " << i + 1 << ": ";
		cin >> numSidesPerItem[i];
		cout << endl;
	}
	
	for (int i = 0; i < numItems; i++)
	{
		numSides = numSides + numSidesPerItem[i];
	}
	cout << "numSides: " << numSides << endl;
	
	product = productOfSides();
	calcProbabilities(numItems, numSides, numSidesPerItem[numItems - 1]);
	
	int count = 0;
	int itemPointer = 1;
	int sidePointer = 0;
	for (int i = 0; i < numSides; i++)
	{
		count++;
		sidePointer++;
		if (sidePointer > numSidesPerItem[itemPointer - 1])
		{
			sidePointer = 1;
			itemPointer++;
		}
		
		cout << "Item " << itemPointer << "   ";
		cout << "Side " << sidePointer << ": ";
		cout << probabilities[i] << "%" << endl << endl;
	}
	cout << endl;
	
	
	int continueLoop;
	char input[1];
	int selectedItem;
	do{
		cout << "Enter \"y\" to find probability: ";
		cin >> input;
		cout << endl;
		continueLoop = strcmp(input, "y");
		
		if (continueLoop == 0)
		{
			cout << "Enter item number to find probability of a side on that item: ";
			cin >> selectedItem;
			cout << endl;
			
			int tempVal = 0;
			for (int i = 0; i < selectedItem - 1; i++)
			{
				tempVal = tempVal + numSidesPerItem[i];
			}
			
			cout << "probability for a side in item "<< selectedItem << " : " << probabilities[tempVal] << endl << endl;
		}
	}while (continueLoop == 0);
}

void calcProbabilities(int item, int side, int objectSide)
{
	if (side > 1)
	{
		if (objectSide == 1)
		{
			calcProbabilities(item - 1, side - 1, numSidesPerItem[item - 2]);
		}
		else
		{
			calcProbabilities(item, side - 1, objectSide - 1);
		}
	}
	
	probability = ((sideRecurrence(item)* 1.0) / product) * 100;
	
	probabilities[side - 1] = probability;
}

int sideRecurrence(int itemNum)
{	
	int result = 1;
	for (int i = 0; i < numItems; i++)
	{
		if (i != (itemNum - 1))
		{
			result = result * numSidesPerItem[i];
		}
	}
	
	return result;
}

int productOfSides()
{
	int result = 1;
	for (int i = 0; i < numItems; i++)
	{
		result = result * numSidesPerItem[i];
	}
	
	return result;
}