#include <iostream>
using namespace std;

#define MAX 14
int n[7] = {137,1315,73,136,255,1384,16385};
int px[MAX+1];

void gen(){
  px[0] = 1;
  for(int i = 1;i <= MAX;i++) {
    px[i] = px[i-1]*2;
  }
}

void solve(int x) {
  if (x == 1) cout << "2(0)";
  else if (x == 2) cout << "2";

  for(int i=MAX;i >= 0 && x > 2;i--) {
    if (px[i] < x) {
      solve(px[i]);
      cout << "+";
      solve(x-px[i]);
      break;
    } else if (px[i] == x) {
      cout << "2(";
      solve(i);
      cout << ")";
      break;
    }
  }
}

int main(void) {
  gen();
  for(int i = 0;i < 7;i++) {
    int x = n[i];
    cout << x << "=";
    solve(x);
    cout << endl;
  }
}
