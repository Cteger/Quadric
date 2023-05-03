#include "Header.h"

#include <iostream>
#include <string>

int main()
{
	float* abc;
	abc = new float[3];
	float *x;

	float D;

	abc = Read_abc(abc);
	
	D = Find_discriminant(abc);

	if (D >= 0)
	{
		x = new float[2];

		x = Find_solution(abc, x, D);

		std::cout << "The first root is: " << x[0] << std::endl;
		std::cout << "The second root is: " << x[1] << std::endl;

		Print_answer(x, D);

		delete[] x;
	}
	else
	{
		std::cout << "No roots" << std::endl;
	}

	delete[] abc;
}