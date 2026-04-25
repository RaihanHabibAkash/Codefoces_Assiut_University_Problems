// Problem: Memo and Momo
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B

/*
B. Memo and Momo
time limit per test1 second
memory limit per test256 megabytes
Memo and Momo are playing a game. Memo will choose a positive number a
, and Momo will choose a positive number b
.

Your task is to tell them who will win according to the following rules:

If both a
 and b
 are divisible by k
, both of them win and you should print "Both".
If a
 is divisible by k
 but b
 isn't, Memo wins and you should print "Memo".
If b
 is divisible by k
 but a
 isn't, Momo wins and you should print "Momo".
If both a
 and b
 are not divisible by k
, no one wins and you should print "No One".
Input
Only one line containing three positive numbers a
, b
 and k
 (1≤a,b,k≤1018
).

Output
Print the answer as described in the statement.

Examples
InputCopy
15 7 3
OutputCopy
Memo
InputCopy
22 10 2
OutputCopy
Both
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input
    long long a, b, x; cin >> a >> b >> x;

    // Checking and output
    if(a % x == 0 && b % x == 0) cout << "Both" << endl;
    else if(a % x == 0 && b % x != 0) cout << "Memo" << endl;
    else if(a % x != 0 && b % x == 0) cout << "Momo" << endl;
    else cout << "No One" << endl;

    return 0;
}