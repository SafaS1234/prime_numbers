#include <cassert>
#include <iostream>
#include <cmath>
#include "prime_library.h"

using namespace std;

int main()
{
    int n;

    //different test cases
    //Didn't test for negative numbers or 0 because 
    //I already did that in the main program.

    //user input = 10
    n = 10;
    cout << "2, and 5 = ";
    primeFactors(n);
    cout << endl;

    //user input = 70
    n = 70;
    cout << "2, 5, and 7 = ";
    primeFactors(n);
    cout << endl;

    //user input = 410
    n = 410;
    cout << "2, 5, and 41 = ";
    primeFactors(n);
    cout << endl;

    return 0;
}

