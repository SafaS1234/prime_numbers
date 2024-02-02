#include <iostream>
#include <cmath>
using namespace std;


void primeFactors(int n) 
{  
	while (n % 2 == 0) 
	{ 
		cout << 2 << " "; 
		n = n/2; 
	} 

	for (int i = 3; i <= sqrt(n); i = i + 2) 
	{ 
		while (n % i == 0) 
		{ 
			cout << i << " "; 
			n = n/i; 
		} 
	}  
 
	if (n > 2) 
		cout << n << " "; 
} 

int main() 
{ 
	int num; 

    cout << "Enter a number greater than 1: \n";
    cin >> num;
    
    if (num <= 1)
    {
        cout << "I cannot calculate the prime factors of that number.\n";
        cout << "Enter a number greater than 1: \n";
        cin >> num;
    }
    cout << "Prime factors of " << num << " = ";
	primeFactors(num); 

	return 0; 
} 

