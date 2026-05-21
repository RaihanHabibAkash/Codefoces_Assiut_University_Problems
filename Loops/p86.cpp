// Problem: Prime Function
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/D
/*
D. Prime Function
time limit per test2 seconds
memory limit per test256 megabytes
A prime number is a number that is greater than 1 and has only two factors which are 1 and itself. The first few prime numbers are 2, 3, 5, 7, 11, 13, 17, 19, 23 and 29.

Given a number N. Determine whether N is prime or not.

Note: Solve this problem using function.

Input
First line will contain a number T (1 ≤ T ≤ 103) number of test cases.

Next T lines will contain a number N (1 ≤ N ≤ 109).

Output
Print "YES" if the Nth number is prime otherwise, print "NO".

Example
InputCopy
3
2
4
8
OutputCopy
YES
NO
NO
Note
Don't use an array.
*/
#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; (long long)i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << (isPrime(n) ? "YES" : "NO") << "\n";
    }
    return 0;
}