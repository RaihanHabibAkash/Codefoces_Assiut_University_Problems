// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B
#include <stdio.h>
 
void rec(int i, int x) {
    // base case
    if(i > x) return; 
 
    printf("%d\n", i);
 
    rec(i + 1, x);
}
 
int main() {
    // Taking n as input
    int n;
    scanf("%d", &n);
 
    rec(1, n);
 
    return 0;
}