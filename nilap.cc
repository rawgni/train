#include <iostream>
#include <cstring>
using namespace std;

char k[1000001];

int main(void) {
  int t;
  scanf("%d", &t);

  while(t--) {
    scanf("%s",k);
    int len = strlen(k);

    k[len] = '\0';

    int mid = len >> 1;
    int left = mid-1, right;
    bool carry = true;

    if (len % 2 == 0) {
      right = mid;
      mid--;
    } else {
      right = mid+1;
    }

    for(int i = 0;i <= mid;i++) {
      if (k[left-i] < k[right+i]) {
        break;
      } else if (k[left-i] > k[right+i]) {
        carry = false;
        break;
      }
    }

    for (;mid >= 0 && carry;mid--) {
      char v = k[mid];

      if (v == '9') {
        k[mid] = '0';
      } else {
        k[mid]++;
        carry = false;
        break;
      }
    }

    for(int i=0;i<len/2;i++) {
      k[len-1-i] = k[i];
    }

    if (carry) {
      k[len-1] = '1';
      cout << "1";
    }

    cout << k << endl;
  }
  return 0;
}
