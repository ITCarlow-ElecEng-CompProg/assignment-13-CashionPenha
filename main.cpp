/**
 * Cashion Penha
 * Lab 13
 * Prime Number Calculations
 * 27/01/2018
 */

/**< Preprocessor directives */
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /**< variable declarations */
    ofstream of;
    int n,i,userEntered;

    /**< getting user input to calculate prime numbers up to value entered by user */
    cout << "Please enter a number to check all prime numbers prior to it: ";
    cin >>userEntered;

    /**< Ofstream object created called primeNumbers */
    of.open("primeNumbers.txt");

    /**< display list of prime numbers */
    cout << "\nList of primes between 2 and entered number inclusive are: \n{";

    /**< For loop incremented each time from 2 up to value entered by user */
    for (n=2; n<=userEntered; n++)
    {
        for (i=2; i<n; i++)/// for loop to divide the number by 0 to check if prime
            if (n%i == 0) /// if n modulus i is zero then break the loop
                break;

        if (i==n)/// if n is equal to i
        {
            cout <<" "<< n;/// print space and the prime number
            of << " " << n;/// print the same into file
        }
    }
    cout << "}\n";
    of.close();/// close file
    return 0;/// end of program
}
