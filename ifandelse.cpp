/*

* My Second C++ Program
* By: Nicholas L.
* Date: 7/9/13
* Description: If and else

*/

#include <iostream>

using namespace std;

int main ()
{
    int x;    
    cout << "Give a number: ";
    cin >> x;
    
    if (x > 0) {
        cout << "x is positive.\n";
        cout << x << endl;
    }
    else if (x < 0) {
        cout << "x is negative.\n";
        cout << x << endl;
    }
    else if (x == 0){
        cout << "x is zero.\n";
        cout << x << endl;
    }
    else {
        cout << "Invalid statement. Try again.";
    }
    
}

