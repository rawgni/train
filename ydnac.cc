#include <cstdio>
using namespace std;

int main(void) {
  int n;
  while(scanf("%d", &n) != EOF) {
    if (n == -1) break;

    int total = 0;
    int arr[n];
    for(int i = 0;i < n;i++) {
      scanf("%d", &arr[i]);
      total += arr[i];
    }
    if ((total % n) != 0) printf("-1\n");
    else {
      int count = 0;
      int eq = total/n;
      for(int i = 0;i < n;i++) {
        if (arr[i] < eq) count += (eq - arr[i]);
      }
      printf("%d\n", count);
    }
  }
  return 0;
}
