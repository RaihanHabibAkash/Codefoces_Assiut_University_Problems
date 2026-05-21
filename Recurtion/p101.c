// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R
#include <stdio.h>
int flag = 1;
 
void checkPal(int a[], int i, int j) {
 
    if(i > j) return;
 
    if(a[i] != a[j]) {
        flag = 0;
        return;
    }
    checkPal(a, i + 1, j - 1);
} 
 
int main() {
    int length;
    scanf("%d", &length);
 
    int arr[length];
    for(int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }
 
    checkPal(arr, 0, length - 1);
 
    if(flag == 1) printf("YES\n");
    else printf("NO\n");
 
    return 0;
}