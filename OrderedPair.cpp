/**
* Bijan Emami
*Project 5 FloodFill.cpp
**/

#include "OrderedPair.h"
using namespace std; 

OrderedPair::OrderedPair()
{
	row = 0;
	column = 0;
}

OrderedPair::OrderedPair(int aRow, int aColumn)
{
	setRow(aRow);
	setColumn(aColumn);
}

void OrderedPair::setRow(int aRow)
{
	row = aRow;
}

void OrderedPair::setColumn(int aColumn)
{
	column = aColumn;
}

int OrderedPair::getRow()
{
	return row;
}

int OrderedPair::getColumn()
{
	return column;
}