// Problem: Interval Sweep
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E
/*
E. Interval Sweep
time limit per test1 second
memory limit per test256 megabytes
Given two numbers a
 and b
. You have to answer with "YES" if there is a non-empty interval consisting of numbers from l
 to r
 (l,l+1,l+2,...,r
) with a odd numbers and b even numbers, or "NO" otherwise.

Input
Only one line containing two numbers a
 and b
 (0≤a,b≤100
)the number of odd numbers and the number of even numbers in the interval respectively.

Output
Print "YES" or "NO" as described in the statement.

Examples
InputCopy
2 3
OutputCopy
YES
InputCopy
3 1
OutputCopy
NO
Note
Example 1 :

some valid intervales that contain 2
 odd numbers and 3
 even numbers can be

l=6,r=10
 contains numbers (6,7,8,9,10)
.

l=14,r=18
 contains numbers (14,15,16,17,18)
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input
    int odds, evens; cin >> odds >> evens;

    // Printing
    if(evens == 0 || odds == 0) cout << "NO" << endl;
    else if(odds == evens || odds == evens-1 || odds-1 == evens)
        cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}