
// Sheet 1
// #4
#include <iostream>
using namespace std;
int main()
{
  int num;
  cout << "Enter a number: ";
  cin >> num;
  int binary[32];
  int index = 0;
  if (num == 0)
    cout << "Binary representation: 0" << endl;
  else
  {
    while (num > 0)
    {
      binary[index] = num % 2;
      num /= 2;
      index++;
    }
    cout << "Binary representation: ";
    for (int i = index - 1; i >= 0; i--)
      cout << binary[i];
    cout << endl;
  }
  return 0;
}