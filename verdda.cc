#include <cstdio>
using namespace std;

unsigned long long rev(int a) {
  unsigned long long x = 0;
  while(a>0) {
    x = (x*10) + a%10;
    a /= 10;
  }
  return x;
}

int main(void) {
  int n;
  scanf("%d", &n);

  while(n--) {
    int a,b;
    scanf("%d %d", &a, &b);

    printf("%lld\n", rev(rev(a) + rev(b)));
  }

  return 0;
}
