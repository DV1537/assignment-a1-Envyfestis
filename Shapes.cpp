#include <iostream>
#include <string>
#include <fstream>
#include "Shapes.h"


int main()
{
	int *nrOfCoords = new int(0);
	int x;
	
	std::ifstream ShapeTest;
	ShapeTest.open("ShapeTest.txt");
	if (ShapeTest.is_open())
	{
		while (ShapeTest >> x)
		{
			*nrOfCoords += 1;
		}
	}
	else
	{
		std::cout << "File could not be found";
	}
	ShapeTest.close();
	ShapeTest.open("ShapeTest.txt");

	for (int i = 0; i < *nrOfCoords; i++)
	{

	}



	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	system("pause");
	return 0;
}

std::string Shape::getType(std::string shape)
{
	return std::string();
}

int Shape::area(int area)
{
	return area;
}

int Shape::circumreference(int circumreference)
{
	return circumreference;
}

int Shape::position(int pos1, int pos2)
{
	int position;
	position = pos1/2 + pos2/2;
	return position;
}

int Shape::isConvex(int isConvex)
{
	return isConvex;
}