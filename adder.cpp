#include <iostream>
#include "adder.h"
using namespace std;

extern "C"
{

    int add_integer(int a, int b)
    {
        int result = a + b;
        cout << "add integer, result is" << result << endl;
        return result;
    }

    float add_float(float a, float b)
    {
        float result = a + b;
        cout << "add float, result is" << result << endl;
        return result;
    }
}
