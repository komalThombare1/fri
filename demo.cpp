#include <iostream>
using namespace std;

int main()
{    
    int divisor, dividend, quotient, remainder;
    int a=2;
     cout << "value of a is: ";
    cin >> a;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;

    return 0;
}
