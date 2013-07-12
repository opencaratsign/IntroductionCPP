/*

* By: Nicholas L.
* Date: 7/9/13
* Description: functions!

*/

#include <iostream>

using namespace std;

int addition(int a, int b) 
{
    int sum;
    sum = a + b;
    return (sum);
}

int subtraction(int a, int b)
{
    int r;
    r = a - b;
    return (r);
}

void message()
{
    cout << "I am a function!";
}

int main()
{
    int x = 5, y = 3, z;
    z = subtraction(x,y);
    cout << "The first result is " << z << endl;
    cout << "The second result is " << subtraction(x,y) << endl;
    z = 4 + subtraction(x,y);
    cout << "The third result is " << z << endl;
}

