#include <iostream>
#include <cmath>
#include "prime_library.h"

using namespace std;

int main() 
{ 
	int num; 

    //asks user to enter a number
    cout << "Enter a number greater than 1: ";
    cin >> num;
    
    //makes sure the number is at least 2 or higher
    while (num <= 0)
    {
        cout << "\nI cannot calculate the prime factors of that number.\n";
        cout << "Enter a number greater than 1: \n";
        cin >> num;
    }

    //prints out the result
    cout << "Prime factors of " << num << " = ";
	primeFactors(num); 

	return 0; 
} 


