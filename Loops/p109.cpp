// Problem: PUM
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V
/*
V. PUM
time limit per test1 second
memory limit per test256 megabytes
Given a number N. Print N lines that describes PUM game.

For more clarification see the examples.

Input
Only one line containing a number N (1 ≤ N ≤ 20).

Output
Print the answer according to the required above.

Examples
InputCopy
7
OutputCopy
1 2 3 PUM
5 6 7 PUM
9 10 11 PUM
13 14 15 PUM
17 18 19 PUM
21 22 23 PUM
25 26 27 PUM
InputCopy
3
OutputCopy
1 2 3 PUM
5 6 7 PUM
9 10 11 PUM
Note
Don't print any extra spaces.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    int k = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 4; j++) {
            if(j == 3) {
                cout << "PUM" << endl;
                k++;
            }
            else cout << ++k << " ";
        }
    }

    return 0;
}