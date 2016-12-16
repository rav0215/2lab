
#include <iostream>
#include <cstdlib>
using namespace std;



double sum(double x, double y);
double subtraction(double x, double y);
double mult(double x, double y);
double division(double x, double y);
double power(double x, double y);
double sqrt(double x);

int main ()
{

    double x, y;
    cout << " Enter x ";
    cin >> x;
    cout << " Enter y ";
    cin >> y;
    cout << " x + y =  " << sum ( x , y ) << endl;
    cout << " x - y =  " << subtraction ( x , y ) << endl;
    cout << " x * y =  " << mult ( x , y ) << endl;
    if ( y == 0 )
        cout << " x / y = Error " << endl;
    else 
        cout << " x / y = " << division ( x , y ) << endl;
    cout << " x ^ y  = " << power ( x , y ) << endl;
    if ( x < 0 )
        cout << " sqrt (x) = no roots " << endl;
    else 
        cout << " sqrt (x) = " << sqrt (x) << endl;
    
    return EXIT_SUCCESS;
    
}

