// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I
#include <stdio.h>
#include <string.h>
 
int checkVowels(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
    || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}
 
int countVowels(char l[], int i, int j) {
    if(i == j) return 0;
    
    if(checkVowels(l[i])) return 1 + countVowels(l, i + 1, j);
    else return 0 + countVowels(l, i + 1, j);
}
 
int main() {
    // Taking input of strintg
    char lekha[220];
    scanf("%[^\n]s", lekha);
 
    // length of the string
    int len = strlen(lekha);
 
    // Sending in recurtion
    int count = countVowels(lekha, 0, len);
 
    // Printing
    printf("%d\n", count);
 
    return 0;
}