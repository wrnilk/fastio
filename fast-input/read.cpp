#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

const int MAX = 1 << 20;

char rbuf[MAX];
char *rp = rbuf+MAX;

char _readChar() {
  if(rp == rbuf + MAX) read(0, rp = rbuf, MAX);
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