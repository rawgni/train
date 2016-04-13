#include <cstdio>
#include <cstring>
using namespace std;

int main(void) {
  int t;
  scanf("%d",&t);

  while(t--) {
    char s[201];
    scanf("%s", s);

    int len = strlen(s) >> 1;
    for(int i = 0;i < len;i+=2) {
      printf("%c", s[i]);
    }
    printf("\n");
  }

  return 0;
}
