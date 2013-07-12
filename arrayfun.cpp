/*

* By: Nicholas L.
* Date: 7/9/13
* Description: functions!

*/

#include <iostream>
#include <string>
#include <sstream>
#include <math.h>

using namespace std;

int secondarrayf(int a, int b, int m, int n)
{
    int secondarray[a][b];
    for (int x = 0; x < a; x++) {
        for (int y = 0; y < b; y++) {
            secondarray[x][y] = pow(x + y, 2);
        }
    }
    return secondarray[m][n];
}

int main()
{
    int billy [] = {2435, 1, 24, 33, 2};
    int i, result = 0;
    for (int n = 0; n < 5; n++) {
        result += billy[n];
    }
    cout << result << endl;
    
    cout << "Grid Creator!\n";
    int x, y, m, n;
    string input;    
    sleep(1);
    cout << "Set the x boundaries: ";
    getline(cin, input);
    stringstream(input) >> x;
    cout << "Set the y boundaries: ";
    getline(cin, input);
    stringstream(input) >> y;
    cout << "Set the x-value: ";
    getline(cin, input);
    stringstream(input) >> m;
    cout << "Set the y-value: ";
    getline(cin, input);
    stringstream(input) >> n;
    if (m >= x || n >= y) {
        cout << "Invalid coordinate.\n";
    } else {
        cout << "Coordinate " << m << "," << n << " equals " << secondarrayf(x, y, m, n) << ".\n";
    }
}


