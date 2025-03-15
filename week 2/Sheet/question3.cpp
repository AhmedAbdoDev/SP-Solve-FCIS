// Sheet 2
// #3
#include <iostream>
#include <algorithm>
using namespace std;
int lcm(int num1, int num2)
{
  int gcd = 1;
  for (int i = 1; i <= min(num1, num2); i++)
    if (num1 % i == 0 && num2 % i == 0)
      gcd = i;
  return (num1 * num2) / gcd;
}
int main()
{
  int num1, num2;
  cout << "Enter two numbers : ";
  cin >> num1 >> num2;
  cout << "LCM = " << lcm(num1, num2) << endl;
}
