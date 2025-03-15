// Sheet 2
// #4
#include <iostream>
#include <cmath>
using namespace std;
int armstrong(int num)
{
  int sum = 0;
  while (num != 0)
  {
    int digit = num % 10;
    num /= 10;
    sum += pow(digit, 3);
  }
  return sum;
}
int main()
{
  int num;
  cout << "Enter a positive integer : ";
  cin >> num;
  cout << num << (armstrong(num) == num ? " is" : " isn't") << " an Armstrong number." << endl;
}
