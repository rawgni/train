#include <iostream>
using namespace std;

unsigned long long res[21];
int result[200];
int size;

void gen() {
  res[0] = 1;
  res[1] = 1;
  res[2] = 2;
  for(int i = 3;i <= 20;i++) {
    res[i] = res[i-1]*i;
  }
}

void setup() {
  unsigned long long tmp = res[20];
  size = 0;
  while(tmp) {
    result[size] = tmp%10;
    tmp/=10;
    size++;
  }
}

void mult(int multiplier) {
  int carry = 0;
  for(int i = 0;i < size;i++) {
    int prod = result[i]*multiplier + carry;
    result[i] = prod%10;
    carry = prod/10;
  }
  while(carry) {
    result[size] = carry%10;
    carry = carry/10;
    size++;
  }
}

void fact(int n) {
  if (n <= 20)
    cout << res[n] << endl;
  else {
    setup();
    for(int i = 21;i <= n;i++) {
      mult(i);
    }
    for(int i = size-1;i >= 0;i--) {
      cout << result[i];
    }
    cout << endl;
  }
}

int main(void) {
  int t;
  cin >> t;

  gen();

  while(t--) {
    int n;
    cin >> n;

    fact(n);
  }
  return 0;
}
