#include "Header.h"

#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

#define input_file "C:/Users/user/source/repos/Quadric/Quadric/Input.txt"
#define output_file "C:/Users/user/source/repos/Quadric/Quadric/Output.txt"


float* Read_abc(float *abc)
{
    std::string line;

	std::ifstream in(input_file);
    if (in.is_open())
    {
        for (int i = 0; i < 3; i++)
        {
            getline(in, line);
            abc[i] = std::stoi(line);
        }
    }

    in.close();

    return(abc);
}

float Find_discriminant(float* abc)
{
    float D;
    float *crutch = 0;
    D = abc[1] * abc[1] - 4 * abc[0] * abc[2];

    return D;
}

float *Find_solution(float *abc, float *x, float D)
{
    x[0] = ((-1) * abc[1] + sqrt(D)) / (2 * abc[0]);
    x[1] = ((-1) * abc[1] - sqrt(D)) / (2 * abc[0]);

    return x;
}

void Print_answer(float *x, float D)
{
    std::ofstream out;
    out.open(output_file);

    if (out.is_open())
    {
        if (D >= 0)
        {
            out << "The first root is: " << x[0] << std::endl;
            out << "The second root is: " << x[1] << std::endl;
        }
        else
        {
            out << "No roots" << std::endl;
        }
    }
}
