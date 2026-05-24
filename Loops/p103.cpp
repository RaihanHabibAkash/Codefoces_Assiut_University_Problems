// Problem: Numbers Histogram
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N
/*
N. Numbers Histogram
time limit per test1 second
memory limit per test256 megabytes
Given 3 lines of input described as follow:

First line contains a symbol S
.
Second line contains a number N
.
Third line contains N
 numbers.
For each number Xi
 in the N
 numbers print a new line that contains the symbol S
 repeated Xi
 time.

Input
The first line contains a symbol S
 can be (+,−,∗,/)
.

The second line an number N
 (1≤N≤50)
.

The third line contains N
 numbers (1≤Xi≤100)
.

Output
Print the answer required above.

Example
InputCopy
+
5
5 2 4 3 7
OutputCopy
+++++
++
++++
+++
+++++++
Note
Don't print any extra spaces after symbol S
.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    char c; cin >> c;
    int cs; cin >> cs;
    while(cs--) {
        // Taking how many times for each case
        int times; cin >> times;

        // Printing
        for(int i = 0; i < times; i++) cout << c;
        cout << endl;
    }

    return 0;
}