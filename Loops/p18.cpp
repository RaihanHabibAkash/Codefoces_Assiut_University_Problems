// Problem: Age in Days
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R

/*
R. Age in Days
time limit per test1 second
memory limit per test256 megabytes
Given a Number N corresponding to a person's age (in days). Print his age in years, months and days, followed by its respective message "years", "months", "days".

Note: consider the whole year has 365 days and 30 days per month.

Input
Only one line containing a number N (0 ≤ N ≤ 106).

Output
Print the output, like the following examples.

Examples
InputCopy
400
OutputCopy
1 years
1 months
5 days
InputCopy
800
OutputCopy
2 years
2 months
10 days
InputCopy
30
OutputCopy
0 years
1 months
0 days
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input
    int number; cin >> number;

    // For counting
    int years = 0;
    int months = 0;
    int days = 0;

    // Getting years
    while(number >= 365) {
        number -= 365;
        ++years;
    }

    // Getting days
    while(number >= 30) {
        number -= 30;
        ++months;
    }

    // Getting the days
    days += number;

    // Printing
    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}