// Problem: Char
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N

/*
N. Char
time limit per test0.25 seconds
memory limit per test64 megabytes
Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

Note : difference between 'a' and 'A' in ASCII is 32 .

Input
Only one line containing a character X which will be a capital or small letter.

Output
Print the answer to this problem.

Examples
InputCopy
a
OutputCopy
A
InputCopy
A
OutputCopy
a
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input
    char c;
    cin >> c;

    // Checking and printing
    if('a' <= c && c <= 'z') cout << (char)((c - 'a') + 'A') << endl;
    else cout << (char)((c - 'A') + 'a') << endl;

    return 0;
}
