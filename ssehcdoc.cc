#include <cstdio>
using namespace std;

int main(void) {
  int t;
  scanf("%d", &t);

  while(t--) {
    int ni;
    scanf("%d", &ni);

    printf("%d\n", (ni-1)%2);
  }
  return 0;
}
