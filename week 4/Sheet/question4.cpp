// Sheet 4
// #4
#include <iostream>
using namespace std;

void printGrid(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cout << (i * n + j + 1) << "\t";
    cout << "\n";
  }
}

int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;

  printGrid(n);

  return 0;
}