// Problem: Shape3
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W
/*
W. Shape3
time limit per test1 second
memory limit per test256 megabytes
Given a number N. Print a diamond that has 2N rows.

For more clarification see the example below.

Input
Only one line containing number N (1 ≤ N ≤ 99).

Output
Print the answer according to the required above.

Example
InputCopy
4
OutputCopy
   *
  ***
 *****
*******
*******
 *****
  ***
   *
Note
Don't print any extra spaces after symbol " * ".
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n; cin >> n;
 
    // t for star printing
    for(int i = 1, t = 1; i <= n; i++, t += 2) {
        for(int j = i; j < n; j++) cout << " ";
 
        for(int k = 1; k <= t; k++) cout << "*";
        cout << endl;
    }
 
    // For reverse pyramid
    for(int i = 1, t = n * 2; i <= n; i++, t -= 2) {
        for(int k = 1; k < i; k++) cout << " ";
        
        for(int j = 1; j < t; j++) cout << "*";
        cout << endl;
    }

    return 0;
}