#pragma once

float* Read_abc(float *abc);
float Find_discriminant(float* abc);
float* Find_solution(float *abc, float *x, float D);
void Print_answer(float *x, float D);
