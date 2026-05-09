// Problem: Data Type Guessing
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H

/*
H. Data Type Guessing
time limit per test1 second
memory limit per test256 megabytes
Given three numbers n
, k
 and a
. Identify whether the data type of n×ka
 is int, long long or double.

Input
Only one line containing three numbers n
, k
 and a
 (1≤a,k,n≤2147483647
).

Output
Print "int", "long long" or "double" (without quotes) as described in the statement.

Examples
InputCopy
3 6 9
OutputCopy
int
InputCopy
100000 200000 4
OutputCopy
long long
Note
double is when a number has a floating-point.

int Range: [−2147483648,2147483647
].

long long can hold values of a bigger range than that of int.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input
    long long n, k, a; cin >> n >> k >> a;

    // Checking and printing
    if((n*k)%a != 0) cout << "double" << endl;
    else if(-2147483648 <= (n*k)/a && (n*k)/a <= 2147483647) cout << "int" << endl;
    else cout << "long long" << endl;


    return 0;
}