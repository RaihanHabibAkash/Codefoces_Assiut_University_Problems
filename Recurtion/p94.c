// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C
#include <stdio.h>
 
void rec(int i, int x) {
 
    // base case
    if(i == x) {
        printf("%d", i);
        return;
    }
 
    rec(i + 1, x);
 
    printf(" %d", i);
}
 
int main() {
    // Taking input n
    int n;
    scanf("%d", &n);
 
    rec(1, n);
 
    return 0;
}