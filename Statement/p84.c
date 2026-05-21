// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A
#include <stdio.h>
 
int add(int x, int y) {
    long long sum = x + y;
    return sum;
}
 
int main() {
    // Taking input
    int a, b;
    scanf("%d %d", &a, &b);
 
    // Printing the sum
    long long result = add(a, b);
    printf("%lld", result);
}