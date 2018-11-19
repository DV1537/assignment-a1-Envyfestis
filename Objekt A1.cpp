#include<iostream>
#include <fstream>

int main()
{
	int a = 0;
	int sum = 0;
	int average = 0;
	int counter = 0;
	std::ifstream ObjektTest;

	ObjektTest.open("ObjektTest.txt");

	while (ObjektTest >> a)
	{
		sum += a;
		counter++;
	}
	ObjektTest.close();
	
	int*numbers;
	numbers = new int[counter];

	ObjektTest.open("ObjektTest.txt");
	for (int i = 0; i < counter; i++)
	{
		ObjektTest >> numbers[i];
	}
	average = sum / counter;
	ObjektTest.close();


	for (int i = 0; i < counter; i++)
	{
		if (numbers[i] > average)
		{
			std::cout << numbers[i] << " ";
		}
	}
	std::cout << "\n";

	delete[]numbers;


	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	system("pause");
	return 0;
}