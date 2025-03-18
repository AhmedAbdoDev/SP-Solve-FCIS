// Sheet 4
// #2
#include <iostream>
using namespace std;

int sumByLoop(int, int);

int main()
{
  cout << "Enter two numbers : ";
  int num, times;
  cin >> num >> times;
  int sum = sumByLoop(num, times);
  cout << "Product : " << sum << endl;
  return 0;
}
int sumByLoop(int num, int times)
{
  int sum = 0;
  for (int i = 0; i < times; i++)
    sum += num;
  return sum;
}