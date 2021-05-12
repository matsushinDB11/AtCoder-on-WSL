#include <iostream>
using namespace std;

int main(){
  int input_num;
  cin >> input_num;

  int n[input_num];
  for (int i = 0; i < input_num; i++)
  {
    cin >> n[i];
  }
  int counter = 0;
  bool while_break = false;
  while (true)
  {
    for (int i = 0; i < input_num; i++)
    {
      if (n[i] % 2 != 0) {
        while_break = true;
      };
    }
    if (while_break) break;
    
    for (int i = 0; i < input_num; i++)
    {
      n[i] /= 2;
    }
    counter++;
  }
  cout << counter<< endl ;
  
  
  return 0;
}