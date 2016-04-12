#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {
  int t;
  cin >> t;

  while(t--) {
    string in;
    cin >> in;

    stack<string> st;

    for(int i = 0;i < in.length();i++) {
      if (in[i] == ')') {
        if (!st.empty()) {
          string right = st.top();
          st.pop();
          string op = st.top();
          st.pop();
          string left = st.top();
          st.pop();

          st.push(left + right + op);
        }
      } else if (in[i] != '(') {
        st.push(string(1,in[i]));
      }
    }
    cout << st.top() << endl;
  }

  return 0;
}
