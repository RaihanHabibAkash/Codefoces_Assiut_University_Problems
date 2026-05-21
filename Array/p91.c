// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/N
#include <stdio.h>
 
void shiftZeros(int *a, int i, int j) {
    if(i >= j) return;
 
    if(*(a + i) == 0) {
        int temp = a[i];
 
        for(int k = i; k < j - 1; k++) {
            a[k] = a[k + 1];
        }
        a[j - 1] = temp;
        
        shiftZeros(a, i, j - 1);
    } else {
        shiftZeros(a, i + 1, j);
    }
}
 
int main() {
    int len;
    scanf("%d", &len);
 
    int arr[len + 1];
 
    for(int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }
 
    shiftZeros(arr, 0, len);
 
    for(int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
 
    return 0;
}