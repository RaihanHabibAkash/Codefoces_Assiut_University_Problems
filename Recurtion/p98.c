// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K
#include <stdio.h>
#include <limits.h>
 
int findMax(int *a, int i, int j) {
    if(i == j) {
        return INT_MIN;
    }
 
    int result = findMax(a, i + 1, j);
 
    if(a[i] > result) return a[i];
    else return result;
} 
 
int main() {
    // Taking input for lenth of array
    int len;
    scanf(" %d", &len);
 
    // Taking input of array
    int arr[len];
    for(int i = 0; i < len; i++) {
        scanf(" %d", (arr + i));
    }
 
    int res = findMax(arr, 0, len);
 
    printf("%d\n", res);
 
    return 0;
}