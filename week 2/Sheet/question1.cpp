// Sheet 2
// #1
#include <iostream>
using namespace std;
bool isPrime(int num)
{
  if (num < 2)
    return 0;
  for (int i = 2; i * i <= num; i++)
    if (num % i == 0)
      return 0;
  return 1;
}
int main()
{
  int num;
  cout << "Enter a positive integer : ";
  cin >> num;
  bool prime = isPrime(num);
  cout << num << (prime ? " is" : " isn't") << " a prime number." << endl;
}