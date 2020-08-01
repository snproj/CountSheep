#pragma once

#include <iostream>
#include <string>
using namespace std;

int  weird_points_calculator(int x)
{
    int a = x;
    do
    {
        x = x * 1.9;
    } while (x < a * 100);
    cout << x << endl;

    return x;
}

int* weird_points_calculator_array(int x[], int range)
{
    int* arr = new int;
    for (int i = 0; i < range; i++)
    {
        int elem = weird_points_calculator(x[i]);
        arr[i] = elem;
    }
    cout << endl;
    return arr;

}

unsigned int hash3(unsigned int h1, unsigned int h2, unsigned int h3)
{
    return (((h1 * 2654435789U) + h2) * 2654435789U) + h3;
}