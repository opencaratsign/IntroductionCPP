/*

* My Second C++ Program
* By: Nicholas L.
* Date: 7/9/13
* Description: String Streams

*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
    string mystr;
    float price = 0; //assignment
    int quantity = 0;
    cout << "What is the price? ";
    getline (cin, mystr);
    stringstream(mystr) >> price;
    
    cout << "How many are there? ";
    getline (cin, mystr);
    stringstream(mystr) >> quantity;
    
    cout << "Total cost: " << price * quantity << endl;
    
}

