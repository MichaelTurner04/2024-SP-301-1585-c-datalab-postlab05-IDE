#include <iostream>
#include "funcs.h"
#include "TrianglePrinter.h"

using namespace std;
int main()
{
    TrianglePrinter t;
    for(int r=0; r<7; r++){
        for(int c=0; c<= r; c++){
            t.add(combination(r, c));
        }t.newrow();
    }
    t.print();
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
    return 0;
}
