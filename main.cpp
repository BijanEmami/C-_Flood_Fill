#include <iostream>;
#include "FloodFill.h"
using namespace std;

int main()
{
	cout << "FIRST TEST" << endl;
	FloodFill image(14);
	image.generateImage(14);
	image.displayImage();
	image.fill(2, 2, 'X');

	cout << endl << endl;

	image.displayImage();

	cout << "SECOND TEST" << endl;
	image.generateImage(24);
	image.displayImage();
	image.fill(12, 12, 'Q');

	cout << endl << endl;

	image.displayImage();

	return 0;
}