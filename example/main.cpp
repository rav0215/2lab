
#include <iostream>
#include <cstdlib>
using namespace std;
int main ()
{
double x, y; 
int r;
cin >> x;
cin >> y;
cin >> r;
setlocale(LC_ALL, "Russian");
double sum(double x, double y);
double subtraction(double x, double y);
double mult(double x, double y);
double division(double x, double y);
double power(double x, int y);
double sqrt(double x);
if (y==0)
    cout << " Banned act "<< endl;
    else 
        cout << "double division(double x, double y)"<< endl;
    if (x<=0)
       cout << " No roots ";
    else 
        cout << "double sqrt(double x)" << endl;
    return EXIT_SUCCESS;
}



