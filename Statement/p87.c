// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/E
#include <stdio.h>
 
int main() {
    // Taking inputs
    int a, b;
    scanf("%d %d", &a, &b);
 
    // Pointers
    int *x = &a,
        *y = &b;
 
    // Swaping 
    int temp = *x;
    *x = *y;
    *y = temp;
 
    printf("%d %d", a, b);
    
    return 0;
}