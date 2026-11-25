#include <iostream>

#include "linkedStack.h"
using namespace std;
int fact(int size) {
  if (size == 0) {
    return 1;
  }
  linkedStack s = linkedStack();
  for (int i = size; i > 0; i--) {
    s.push(i);
  }
  int a = 0, b = 0, result = 0;
  for (int i = 1; i < size; i++) {
    a = s.pop();
    b = s.pop();
    // cout << " a:" << a << " b:" << b << endl;
    result = a * b;
    s.push(result);
  }
  int r = s.pop();
  return r;
}
int main() {
  cout << "=========test factorial======\n";
  cout << " factorial output:" << fact(5) << endl;
}