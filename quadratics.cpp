/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Kelli Howard
 */


#include <iostream>
#include <math.h>

  
using namespace std;

void roots(int result, int a, int b, int c)
{
    cout << "positive root: " << (-b + result) / (-4 * (a*c)) << "\n";
    cout << "negative root: " << (-b - result) / (-4 * (a*c)) << "\n";
}

int main() {
    int a = 0, b = 0, c = 0;
    cout << "enter a:";
    cin >> a;
    cout << "enter b:";
    cin >> b;
    cout << "enter c:";
    cin >> c;

    int result = (pow(b, 2) - (4*a*c));

    if( result < 0 )
    {
        cout << "There is no valid root to this quadradic \n";
    }

    else
    {
        roots(result, a, b, c);
    }
    return 0;
}