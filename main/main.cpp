#include <iomanip>
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
    // a = початкове значення x, b = кінцеве значення x, h = крок x
    double a = 0.5, b = 3.5, x, y, h = 0.5;
    cout << "Our range is [" << a << "; " << b << "] with step of " << h << endl;
   
    /*x = a;

    // Код до зміни
    do {
        y = sin(x) + fabs(x) + pow(2, x);
        cout << "If x = " << x << ", then y = " << y << endl;
        x += h;
    } while (x <= b);
    */
    
    // Код після зміни для перевірки на Github
    for (x = a; x <= b; x += h) {
        y = sin(x) + fabs(x) + pow(2, x);
        cout << "If x = " << x << ", then y = " << y << endl;
    }
}
