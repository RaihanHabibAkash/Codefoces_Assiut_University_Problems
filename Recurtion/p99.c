// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N
#include <stdio.h>
 
int main() {
    // Taking input of lenght
    int n, m;
    scanf("%d %d", &n, &m);
 
    // Declaring 2D arrays
    int a[n][m];
    int b[n][m];
 
    // Taking input for 1st 2D Array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
 
    // For 2nd 2D array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &b[i][j]);
        }
    }
 
    // Getting sum into 1st array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            a[i][j] += b[i][j];
        }
    }
 
    // Printing 1st array after sum
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
 
    return 0;
}