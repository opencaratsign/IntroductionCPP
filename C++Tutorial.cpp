/*

* By: Nicholas L.
* Date: 7/12/13
* Description: Companion to C++ tutorial (http://www.cplusplus.com/)

*/

#include <iostream>
#include <string>
using namespace std;

#define EULERSNUM 2.718281828

int main ()
{
    int a, b, c, d;
    a = 0235;
    b = 0x2ad;
    c = (a > b) ? a : b;
    d = (a = 3, a + 13);
    char alpha = 'A';
    
    //default is signed
    //signed/unsigned for chars if using numbers
    unsigned short over9000 = 60000;
    cout << alpha << over9000 << "Trololololololololololol\
                                foobarbazqux\n\a";
    cout << a << endl << d; //f = float
    return 0;
}


