// Sheet 4
// #3
#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter n : ";
  cin >> n;

  int old1 = 0, old2 = 1;
  cout << old1;
  if (n == 1)
  {
    cout << endl;
    return 0;
  }
  cout << ", " << old2;
  for (int i = 2; i < n; i++)
  {
    long long next = old1 + old2;
    cout << ", " << next;
    old1 = old2;
    old2 = next;
  }
  return 0;
}