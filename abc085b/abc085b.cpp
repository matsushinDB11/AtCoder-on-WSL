#include <iostream>
#include <algorithm>
using namespace std;

int main (){
    // 入力数
    int n;
    cin >> n;
    int mochi_list[n];
    for (int i = 0; i < n; i++)
    {
        cin >> mochi_list[i];
    }
    // for_each(mochi_list, mochi_list+n, [](int x){cout << x << endl;});

    sort(mochi_list, mochi_list + n);
    
    int counter = 0;
    int previous_mochi = 0;
    for(int x:mochi_list){
        if (x > previous_mochi)
        {
            counter++;
        }
        previous_mochi = x;
    }

    cout << counter << endl;
    return 0;
}