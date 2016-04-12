#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

// sqrt 1b
#define N 31624

vector<int> primes;

void genprime() {
  bool prime[N];
  memset(prime,true,sizeof(prime));

  for(int i=2;i*i<N;i++) {
    if (prime[i]) {
      for(int j=i*2;j<N;j+=i)
        prime[j]=false;
    }
  }
  for(int i=2;i<N;i++) {
    if (prime[i])
      primes.push_back(i);
  }
}

void solve(int m, int n) {
  bool prime[n-m+1];
  int start;

  memset(prime,true,sizeof(prime));

  for(int i = 0;i < primes.size();i++) {
    int x = primes[i];

    if (x > n) break;

    // closest num divisible by x
    if (x >= m) {
      start = x << 1;
    } else {
      start = m + ((x - (m % x)) % x);
    }

    for(;start <= n;start+=x) {
      prime[start-m] = false;
    }
  }

  for(int i = 0;i < n-m+1;i++) {
    if (prime[i]) {
      cout << i+m << endl;
    }
  }
}

int main(void) {
  int t;
  cin >> t;

  genprime();

  while(t--) {
    int m,n;
    cin >> m >> n;

    if (m < 2) m = 2;
    solve(m,n);
    if (t!=0) cout << endl;
  }

  return 0;
}
