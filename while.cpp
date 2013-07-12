/*

* My Second C++ Program
* By: Nicholas L.
* Date: 7/9/13
* Description: while loops!

*/

#include <iostream>

using namespace std;



int main ()
{
    int n;
    /*cout << "Enter a starting number: ";
    cin >> n;
    
    while (n > 0) {
        cout << n << ", " << endl;
        n--;
        sleep(1);
    }
    cout << "Fire 1!\n";*/
        
    for (int n = 10; n > 0; n--) {
        if (n == 5) continue;
        cout << n << ", \n";
        if (n == 3){
            cout << "countdown aborted!\n";
            break;
        }
    }
    cout << "Fire 2!\n";
    
    
    do {
        cout << "Enter a number.";
        cin >> n;
        cout << "Nope!" << "\n";
    }   while (n != 0) ;
}

