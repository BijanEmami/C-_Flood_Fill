/**
* Bijan Emami
*Project 5 FloodFill.cpp
**/

#ifndef ORDEREDPAIR_H
#define	ORDEREDPAIR_H
using namespace std;

class OrderedPair
{
	private:
		int row;
		int column;
	public:
		OrderedPair();
		OrderedPair(int aRow, int aColumn);
		void setRow(int aRow);
		void setColumn(int aColumn);
		int getRow();
		int getColumn();
};


#endif // !ORDEREDPAIR_H


#pragma once
