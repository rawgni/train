#include <iostream>
using namespace std;

// f1 = 1 = 1
// f2 = 3 = 4
// f3 = f2-f1 = 2 = 6
// f4 = f3-f2 = -1 = 5
// f5 = f4-f3 = -3 = 2
// f6 = f5-f4 = -2 = 0
// f7 = f6-f5 = 1 = 1
// f8 = f7-f6 = 3 = 4
// f9 = f8-f7 = 2  = 6
int res[] = {1, 4, 6, 5, 2, 0};

int main(void) {
  int t;
  cin >> t;

  while(t--) {
    unsigned long long n;
    cin >> n;

    cout << res[(n-1)%6] << endl;
  }
  return 0;
}
