// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/P
#include <stdio.h>
#include <math.h>
 
double log2N(double n) {
    // base case
    if(n < 2) return 0;
 
    // recurtion
    return 1 + log2N(n / 2);
}
 
int main() {
    // Taking input
    double number;
    scanf("%lf", &number);
 
    // Sending in recurtion
    double res = log2N(number);
    
    // Converting into floor
    int result = floor(res);
 
    // Printing
    printf("%d", result);
 
    return 0;
}