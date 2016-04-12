#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

#define MAX 500

int prime[MAX];
int res[1001];

void gen() {

  int pcount = 0;
  bool p[MAX];
  memset(p, true, sizeof(p));

  for(int i=2;i*i<MAX;i++)
    if (p[i])
      for(int j=i*2;j<MAX;j+=i) 
        p[j] = false;
  for(int i=2;i<MAX;i++)
    if (p[i]) prime[pcount++] = i;

  int count = 3;
  res[1] = 30;
  res[2] = 42;

  for(int i = 43;count <= 1000;i++) {
    int pf = 0;

    for(int j = 0;j < pcount && pf < 3;j++) {
      if (i%prime[j] == 0) pf++;
    }

    if (pf == 3) res[count++] = i;
  }
}

int main(void) {
  int t;
  cin >> t;

  gen();
  while(t--) {
    int n;
    cin >> n;
    cout << res[n] << endl;
  }
  return 0;
}
