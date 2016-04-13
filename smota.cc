#include <iostream>
using namespace std;

int main(void) {
  int p;
  cin >> p;

  while(p--) {
    unsigned long long n, k, m;
    cin >> n >> k >> m;

    unsigned long long i = 0;
    for(;n<=m/k;i++) {
      n*=k;
    }
    cout << i << endl;
  }
  return 0;
}
