#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    ofstream of;
    int n,i,userEntered;

    cout << "Please enter a number to check all prime numbers prior to it: ";
    cin >>userEntered;

    of.open("primeNumbers.txt");

    cout << "\nList of primes between 2 and entered number inclusive are: \n{";
    for (n=2; n<=userEntered; n++)
    {
        for (i=2; i<n; i++)
            if (n%i == 0)
                break;

        if (i==n)
        {
            cout <<" "<< n;
            of << " " << n;
        }
    }
    cout << "}\n";
    of.close();
    return 0;
}
