#include <iostream>
#include "funcs.h"
#include "TrianglePrinter.h"

using namespace std;

int main()
{
    TrianglePrinter t;

    for(unsigned int i = 0; i < 10; i++)
    {
        cout << factorial(i) << endl;
    }
    unsigned long n;
    unsigned long m;
    cout << "N must be >= M\nEnter value for N."<< endl;
    cin >> n;
    cout << "Enter value for M."<< endl;
    cin >> m;
    cout << combination(n,m)<< endl;
    /*
    for (long n = 0; n<= 5; n++){
        for(long m = 0; m<=n; m++){
            cout << "("<<n <<", " << m << ") = " << combination(n, m) << endl;
        }
    }
    */
    return 0;
}
