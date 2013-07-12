/*

* By: Nicholas L.
* Date: 7/12/13
* Description: Companion to C++ tutorial (http://www.cplusplus.com/)

*/

#include <iostream>
#include <math.h>
using namespace std;

void memes (int num)
{
    switch (num) {
        case 300:
            cout << "This...is...SPARTAAA!";
            break;
            
        case 9000:
            cout << "It's over 9000!";
            break;
            
        case 1337:
            cout << "H4XX0RZ";
            break;
            
        case 0:
            cout << "Your mind has just been blown.";
            break;
            
        default:
            cout << "Sadly, you do not know any memes.";
            break;
    }
}

int square (int& a) //need & to change variable, not just make a copy
{
    a = pow(a, 2);
    return a;
}

int main ()
{
    int number;
    cout << "Enter a memelike number.";
    cin >> number;
    memes(number);
    
    return 0;
}


