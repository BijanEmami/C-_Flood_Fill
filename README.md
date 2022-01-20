# C-_Flood_Fill
Class assignment to create a program the fills in a char object with another object, similar to how "fill" works in MS paint for example.

Main.cpp provided as a tester.

OrderedPair.cpp and OrderedPair.h is an object capabale of holding cooridinates for FloodFill.cpp

FloodFill.cpp and FloodFill.h used to create a "board" filled randomly with predetermined chars.  Then, a char is selected to be changed, where OrderedPair will be called
to create a new object to hold the new char.  The old char will be replaced by the new char if it is directly touching vertically, horizontally, or diagonally.
