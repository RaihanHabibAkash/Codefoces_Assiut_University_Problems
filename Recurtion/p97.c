// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J
#include <stdio.h>
 
long long factorial(int i) {
    // base case
    if(i == 0) return 1;
 
    return i * factorial(i - 1);
}
 
int main() {
    int n;
    scanf("%d", &n);
 
    long long result = factorial(n);
    printf("%lld", result);
 
    return 0;
}