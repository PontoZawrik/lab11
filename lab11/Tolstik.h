#pragma once
#include <iostream>
#include <ctime>
#include <math.h>

using namespace std;

int getRandomInt(int, int);
double getRandomFloat(double, double);

bool task01(int*, int);
int* task02(int*, int);

double mathFunc1(double);
double mathFunc2(double);

double** createDouble(int, int);
void userInit(double**, int, int);
double evenSum(double**, int, int);
double mulArray(double**, int, int);
double minValue(double**, int, int);
int avgCount(double**, int, int);
void printArray(double**, int, int);
