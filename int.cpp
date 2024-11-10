#include <bits/stdc++.h>
using namespace std;

const int MAX = 1 << 20;

char buf[MAX];
char *p = buf+MAX;

char readChar() {
  if(p == buf + MAX) fread(p = buf, 1, MAX, stdin);
  return *p++;
}

int readInt() {
  int tmp = 0;
  char c = readChar();
  bool flag = 0;
  if(c == '-') flag = 1, c = readChar();
  for(;c & 16;c = readChar()) tmp = 10 * tmp + (c & 15);
  return flag ? -tmp : tmp;
}

int main() {
    
    int n = readInt();
    long long ans = 0;
    for(int i = 0;i < n;i++) ans += readInt();
    printf("%d\n%lld\n", n, ans);
}
