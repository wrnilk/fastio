#include <bits/stdc++.h>
#include <sys/stat.h>
#include <sys/mman.h>
using namespace std;

const int MAX = 1 << 20;

char wbuf[MAX];
char *rp;
int wp;

void _input() {
  struct stat st; fstat(0, &st);
  rp = (char*)mmap(0, st.st_size, PROT_READ, MAP_SHARED, 0, 0);
}

char _readChar() {
  return *rp++;
}

char readChar() {
  char tmp = _readChar();
  while(tmp & 16) tmp = _readChar();
  return tmp;
}

string readLine() {
  string tmp;
  for(char c = _readChar();c != '\n';c = _readChar()) tmp.push_back(c);
  return tmp;
}

string readString() {
  string tmp;
  for(char c = _readChar();c & 16;c = _readChar()) tmp.push_back(c);
  return tmp;
}

long long readInt() {
  long long tmp = 0;
  char c = _readChar();
  bool flag = 0;
  if(c == '-') flag = 1, c = _readChar();
  for(;c & 16;c = _readChar()) tmp = tmp * 10 + (c & 15);
  return flag ? -tmp : tmp;
}

unsigned long long readUInt() {
  long long tmp = 0;
  for(char c = _readChar();c & 16;c = _readChar()) tmp = tmp * 10 + (c & 15);
  return tmp; 
}

double readDouble() {
  string tmp = readString();
  return stod(tmp);
}

void _flush() {
  write(1, wbuf, wp);
  wp = 0;
}

void writeChar(char c) {
  if(wp == MAX) _flush();
  wbuf[wp++] = c;
}

int _getSize(long long n) {
  int tmp = 1;
  for(n = n >= 0 ? n : -n;n >= 10;n /= 10) tmp++;
  return tmp;
}

void writeInt(long long n) {
  int sz = _getSize(n);
  if(wp + sz >= MAX) _flush();
  if(n < 0) {
    writeChar('-');
    n = -n;
  }
  for(int i = sz;i-- > 0;n /= 10) wbuf[wp + i] = n % 10 | 48;
  wp += sz;
}

void writeString(string s) {
  for (auto &c : s) writeChar(c);
}

void writeDouble(double d) {
  writeString(to_string(d));
}