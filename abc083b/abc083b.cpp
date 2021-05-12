#include <iostream>
using namespace std;

// 各桁の和を返す
int getdigitsum(int n) {
  if (n < 10) return n;
  return getdigitsum(n/10) + n % 10;
}

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int counter = 0;
  for (int i = 1; i <= n; i++)
  {
    int digitsum = getdigitsum(i);
    if (a <= digitsum && digitsum <= b)
    {
      counter += i;
    }
    
  }
  cout << counter << endl;
  return 0;
}