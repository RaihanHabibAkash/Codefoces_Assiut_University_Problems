// Problem: Print
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B
/*
B. Print
time limit per test1 second
memory limit per test64 megabytes
Given a number N. Print all numbers from 1 to N.

Note: Solve this problem using function.

Input
Only one line contains a number N (1 ≤ N ≤ 103).

Output
print numbers form 1 to N separated by a single space.

Example
InputCopy
5
OutputCopy
1 2 3 4 5
Note
Don't use any leading or trilling spaces.



*/
#include <bits/stdc++.h>
using namespace std;
 
void func(int num) {
    cout << 1;
    if(num > 1) for(int i = 2; i <= num; i++) cout << " " << i;
    cout << endl;
}
 
int main() {
    int num; cin >> num;
    func(num);

    return 0;
}