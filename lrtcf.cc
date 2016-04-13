#include <iostream>
using namespace std;

int main(void) {
  int t;
  cin >> t;

  while(t--) {
    unsigned long long n;
    cin >> n;

    unsigned long long count = 0;
    int x = 5;
    while(true) {
      count += (n/x);
      x *= 5;
      if (n/x==0) break;
    }
    cout << count << endl;
  }

  return 0;
}
