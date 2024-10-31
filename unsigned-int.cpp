#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

const int MAX = 1 << 20;

char buf[MAX];
char *p = buf;

char readChar() {
  if(p == buf + MAX) read(0, p = buf, MAX);
  return *p++;
}

int readInt() {
  int tmp = 0;
  for(char c = readChar();c & 16;tmp = 10 * tmp + (c & 15), c = readChar());
  return tmp; 
}

int main() {
    read(0, buf, MAX);
    
    int n = readInt();
    long long ans = 0;
    for(int i = 0;i < n;i++) ans += readInt();
    printf("%d\n%lld\n", n, ans);
}
