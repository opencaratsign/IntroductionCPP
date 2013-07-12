/*

* My Second C++ Program
* By: Nicholas L.
* Date: 7/9/13
* Description: Stuff

*/

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string myStr;
    cout << "What's your name?";
    getline(cin, myStr);
    cout << "Hello " << myStr << ".\n";
    cout << "How old are you?";
    getline (cin, myStr);
    cout << "Well, I'm not " << myStr << " years old.\n";
}