#include <bits/stdc++.h>
#include <unistd.h>

const int MAX = 1 << 20;

char arr[MAX];
char *cur = arr;

char readChar() {
  if(cur == arr + MAX) read(0, cur = arr, MAX);
  return *cur++;
}

int readInt() {
  int tmp = 0;
  for(char c = readChar();c & 16;tmp = 10 * tmp + (c & 15), c = readChar());
  return tmp; 
}

int main() {
    read(0, arr, MAX);
    
    int n = readInt();
    long long ans = 0;
    for(int i = 0;i < n;i++) ans += readInt();
    printf("%d\n%lld\n", n, ans);
}
