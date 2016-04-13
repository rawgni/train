#include <cstdio>
using namespace std;

int main(void) {
  int n;

  while(scanf("%d", &n) != EOF) {
    if (n == 0) break;

    int x[n+1], y[n+1],tmp;
    for(int i = 1;i <= n;i++) {
      scanf("%d", &x[i]);
      y[x[i]] = i;
    }

    bool amb = true;

    for(int i = 1;i <= n && amb;i++) {
      if (x[i] != y[i]) amb = false;
    }

    if (amb) printf("ambiguous\n");
    else printf("not ambiguous\n");
  }

  return 0;
}
