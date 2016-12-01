#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
    setlocale(LC_ALL, "Russian");
    char ss;
    do
    {
        cout << "Enter the number" << endl;
        float x, y, r;
        char o;
        cin >> x;
        cin >> o;
        cin >> y;
        switch (o)
        {
            case '+':
                r = x + y;
                break;
            case '-':
                r = x - y;
                break;
            case '*':
                r = x * y;
                break;
            case '/':
                r = x / y;
                break;
        }
        cout << x << o << y << '=' << r << endl ;
        cout << " Continue? ( Y/N )" << endl;
        cin >> ss;
    }
    while ( ss == 'y');
    return EXIT_SUCCESS;
}
 
