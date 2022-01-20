/**
* Bijan Emami
*Project 5 FloodFill.cpp
**/

#ifndef FLOODFILL_H
#define FLOODFILL_H
using namespace std;

class FloodFill
{
	private:
		char** imagePtr;
		int imageSize;
		void setSize(int arraySize);
		int getSize();

		/**
		*canMove() checks to see if you are able to place a new color.
		* @param row is the desired row to be checked
		* @param col is the desired column to be checked
		* @param matchColor is to see if the char has not been changed yet
		* @return returns true if all the parameters are true
		**/

		bool canMove(int row, int col, char matchColor);

	public:
		~FloodFill();
		FloodFill(int arraySize);

		/**
		* Creates a new array pointed to by imagePtr of int arraySize. Populates it with
		* the chars ‘c’, ‘m’, ‘y’, and ‘k’ with each char being equally likely.
		* @param arraySize is the desired size of the array.  For example if arraySize
		* is 10, the array will be 10 x 10.
		**/

		void generateImage(int arraySize);

		/**
		* Displays the image created from generateImage, to the screen.  Displays row numbers and
		* column numbers and all the chars, separated by a space.
		**/

		void displayImage();

		/**
		*Makes use of STL queue to change a char with another desired char, then
		*any chars of the same initial char that are connected, will be changed to the 
		* new char as well.
		* @param row desired row to select to change the char
		* @param col desired colum to select to change the char
		* @newColor disired new char to replace original char
		**/

		void fill(int row, int col, char newColor);
		

};

#endif // !FLOODFILL_H

#pragma once
