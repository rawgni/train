#include <cstdio>
using namespace std;

int main(void) {
  int n;
  unsigned long long x = 0;
  scanf("%d", &n);
  while(n--) {
    unsigned long long y;
    scanf("%lld", &y);
    x ^= y;
  }
  printf("%lld\n", x);
  return 0;
}
