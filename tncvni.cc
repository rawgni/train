#include <iostream>
using namespace std;

void merge(int *arr, int lsize, int rsize, long long int *count) {

  int lptr = 0, rptr = 0;
  int size = lsize + rsize;
  int tmp[size];

  while(lptr+rptr < size) {
    // if left array <= right array
    if (lptr < lsize && (arr[lptr] <= arr[rptr+lsize] || rptr >= rsize)) {
      tmp[lptr+rptr] = arr[lptr];
      lptr++;
    }
    // if right array < left array
    if (rptr < rsize && (arr[rptr+lsize] < arr[lptr] || lptr >= lsize)) {
      tmp[lptr+rptr] = arr[rptr+lsize];
      *count += lsize-lptr;
      rptr++;
    }
  }

  for(int i = 0;i < size;i++) {
    arr[i] = tmp[i];
  }
}

void msort(int *arr, int size, long long int *count) {
  if (size == 1) return;

  int mid = size/2;
  msort(arr, mid, count);
  msort(arr+mid, (size-mid), count);
  merge(arr, mid, (size-mid), count);
}

int main(void) {
  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0;i < n;i++) {
      cin >> arr[i];
    }

    long long int count = 0;
    msort(arr, n, &count);
    cout << count << endl;
  }
  return 0;
}
