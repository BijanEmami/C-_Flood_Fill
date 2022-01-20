/**
* Bijan Emami
*Project 5 FloodFill.cpp
**/

#include "FloodFill.h"
#include "OrderedPair.h"
#include <iostream>
#include <queue>

using namespace std;

// constructor
FloodFill::FloodFill(int arraySize)
{
	setSize(arraySize);

	imagePtr = new char*[arraySize];

	for (int i = 0; i < arraySize; ++i)
	{
		imagePtr[i] = new char[arraySize];
	}
}

// destructor
FloodFill::~FloodFill()
{
	for (int i = 0; i < imageSize; i++)
	{
		delete[] imagePtr[i];
	}

	delete[] imagePtr;
}

void FloodFill::setSize(int arraySize)
{
	imageSize = arraySize;
}

int FloodFill::getSize()
{
	return imageSize;
}


void FloodFill::generateImage(int arraySize)
{
	// used to with rand() to create random result each time it's called.
	srand((unsigned)time(0));

	// array to hold chars that populate the board
	char chars[] = { 'c','m','y','k' };

	setSize(arraySize);

	imagePtr = new char* [arraySize];

	// create 2d array
	for (int i = 0; i < arraySize; ++i)
	{
		imagePtr[i] = new char[arraySize];
	}

	// populates 2d array with chars using the array chars
	for (int i = 0; i < arraySize; ++i)
	{
		for (int j = 0; j < arraySize; ++j)
		{
			// each char as equal probability to
			// populate the board
			imagePtr[i][j] = chars[rand() % 4];  
		}
	}

	
}

void FloodFill::displayImage()
{
	int rowNum = 0;
	int colNum = 0;

	
	cout << " ";


	// prints row numbers above 2d array
	for (int h = 0; h < getSize(); h++)
	{
		if (rowNum > 9)
		{
			rowNum = 0;
		}

		cout << " " << rowNum++;
	}

	cout << endl;

	    // loops to print 2d array
		for (int i = 0; i < getSize(); ++i)
		{
			//column numbers
			if (colNum > 9)
			{
				colNum = 0;
			}

			cout << colNum++ << " ";
			

			for (int j = 0; j < getSize(); ++j)
			{
				
				cout << imagePtr[i][j] << ' ';
			}

			cout << endl;
			
		}

}

bool FloodFill::canMove(int row, int col, char matchColor)
{
	//checking for legal movement and char 
	return ((row >= 0 && row < getSize()) && (col >= 0 && col < getSize()) && (imagePtr[row][col] == matchColor));
}

void FloodFill::fill(int row, int col, char newColor)
{
	// creates empty queue with OrderedPair
	queue<OrderedPair> aPair; 

	// char you want to change
	char matchColor;

	for (int i = 0; i < getSize(); ++i)
	{

		for (int j = 0; j < getSize(); ++j)
		{
			//finds row and column of char you want to start the fill
			matchColor = imagePtr[row][col];
			
		}
				
	}

	cout << endl;

	cout << "Beginning at [" << row << "][" << col << "]" << " I will flood fill and replace "
		<< matchColor << " with " << newColor << endl;
	
	//push start row/column to the queue
	aPair.push(OrderedPair(row, col));
	
	while (!aPair.empty())
	{
		//new OrderedPair object = the front of the queue
		OrderedPair currentPixel = aPair.front();
		
		// remove from the queue
		aPair.pop();

		// saving coordinates 
		int currRow = currentPixel.getRow();
		int currCol = currentPixel.getColumn();

		// currentPixel coordinates set to the new char
		imagePtr[currRow][currCol] = newColor;

		//Use of canMove function - if true - push current coordinates
		//into the queue

		// check first row and if can move, push
		if (canMove(currRow - 1, currCol - 1, matchColor))
		{
			aPair.push(OrderedPair(currRow - 1, currCol - 1));
		}
		if (canMove(currRow - 1, currCol, matchColor))
		{
			aPair.push(OrderedPair(currRow - 1, currCol));
		}
		if (canMove(currRow - 1, currCol + 1, matchColor))
		{
			aPair.push(OrderedPair(currRow - 1, currCol + 1));
		}

		//check second row and if can move, push
		if (canMove(currRow, currCol - 1, matchColor))
		{
			aPair.push(OrderedPair(currRow, currCol - 1));
		}
		if (canMove(currRow, currCol + 1, matchColor))
		{
			aPair.push(OrderedPair(currRow, currCol + 1));
		}
		
		//check third row and if can move, push
		if (canMove(currRow + 1, currCol - 1, matchColor))
		{
			aPair.push(OrderedPair(currRow + 1, currCol - 1));
		}
		if (canMove(currRow + 1, currCol, matchColor))
		{
			aPair.push(OrderedPair(currRow + 1, currCol));
		}
		if (canMove(currRow + 1, currCol + 1, matchColor))
		{
			aPair.push(OrderedPair(currRow + 1, currCol + 1));
		}
	}

}

