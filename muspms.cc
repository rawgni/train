#include <cstdio>
using namespace std;

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);

  a--;
  printf("%d\n", ((b*(b+1)*(2*b+1))-(a*(a+1)*(2*a+1)))/6);
  return 0;
}
