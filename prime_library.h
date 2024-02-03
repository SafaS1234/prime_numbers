#ifndef PRIME_LIBRARY_H_INC
#define PRIME_LIBRARY_H_INC
#include <iostream>
#include <cmath>

using namespace std;

void primeFactors(int n) 
{  
	//using bool so that I can add "and" before the last number
    bool notLast = true;
    
    while (n % 2 == 0) 
	{ 
		if (!notLast)
        {
            cout << ", ";
        }
        
        cout << 2; 
        notLast = false;
		n = n/2; 
	} 

	for (int i = 3; i <= sqrt(n); i = i + 2) 
	{ 
        while (n % i == 0) 
		{ 
			if (!notLast)
            {
                cout << ", ";
            }

            cout << i;
            notLast = false; 
			n = n/i; 
		} 
	}  
 
	if (n > 2) 
    {
        if (!notLast)
        {
            cout << ", and ";
        }

        cout << n;
    }

} 

#endif
