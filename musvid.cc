#include <iostream>
using namespace std;

int main(void) {
  int t;

  cin >> t;
  while(t--) {
    int i,n;
    cin >> n;

    long long int res = 0;

    for(i=1;i*i < n;i++) {
      if (n%i == 0) {
        res += i + (n/i);
      }
    }
    if (i*i==n) res += i;
    cout << res-n << endl;
  }
  return 0;
}
