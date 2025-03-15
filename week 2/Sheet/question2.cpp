// Sheet 2
// #2
#include <iostream>
using namespace std;
void factors(int num)
{
  for (int i = 1; i <= num; i++)
    if (num % i == 0)
      cout << i << " ";
  cout << endl;
}
int main()
{
  int num;
  cout << "Enter a positive integer : ";
  cin >> num;
  cout << "Factors of " << num << " are: ";
  factors(num);
}