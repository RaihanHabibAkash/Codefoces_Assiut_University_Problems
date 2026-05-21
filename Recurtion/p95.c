// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D
#include <stdio.h>
 
void func(int n) {
    if(n == 0) return;
 
    int digit = n % 10;
 
    func(n / 10);
 
    printf("%d ", digit);
}
 
int main() {
    int times;
    scanf("%d", &times);
 
    while(times--) {
        int number;
        scanf("%d", &number);
 
        if(number == 0) {
            printf("0");
        } else {
            func(number);
        }
        printf("\n");
    }
    return 0;
}