#include <iostream>
using namespace std;

int main(){
    // 札の枚数, 合計金額
    int x, y;
    cin >> x >> y;
    int a=-1, b=-1, c=-1;
    for (int i = 0; i <= x; i++)
    {
        for (int j = 0; j <= x-i; j++)
        {
            int k = x - i - j;
            if (y == (i*10000) + (j*5000) + (k*1000))
            {
                a = i;
                b = j;
                c = k;
                break;
            }
        }
    }
    cout << a << ' ' << b << ' ' << c << endl;
    

    return 0;
}
