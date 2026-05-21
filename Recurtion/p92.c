// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A
#include <stdio.h>
 
void rec(int i, int x) {
 
    // Base case
    if(x == i) return;
 
    printf("I love Recursion\n");
 
    rec(i + 1, x);
}
 
int main() {
    // Taking input n times
    int n;
    scanf("%d", &n);
 
    rec(0, n);
 
    return 0;
}