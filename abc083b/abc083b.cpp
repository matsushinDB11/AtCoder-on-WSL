#include <iostream>
using namespace std;

// 各桁の和を返す 再帰関数
// int getdigitsum(int n) {
//   if (n < 10) return n;
//   return getdigitsum(n/10) + n % 10;
// }

// 各桁の和を返す loop
int getdigitsum(int n) {
  int sum = 0;
  while (n > 0)
  {
    sum += n % 10;
    n /= 10;
  }
  return sum;
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