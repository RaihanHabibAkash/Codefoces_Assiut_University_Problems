// Problem: First digit !
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P


/*
P. First digit !
time limit per test0.25 seconds
memory limit per test64 megabytes
Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.

Input
Only one line containing a number X (999 < X  ≤  9999)

Output
If the first digit is even print "EVEN" otherwise print "ODD".

Examples
InputCopy
4569
OutputCopy
EVEN
InputCopy
3569
OutputCopy
ODD
Note
Second Example :

In 3569 the first digit is 3 and its ODD.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input
    int num; cin >> num;

    // Will get the first number
    while(num >= 10) num /= 10;

    // checking for even odd
    if(num % 2 == 0) cout << "EVEN" << endl;
    else cout << "ODD" << endl;

    return 0;
}