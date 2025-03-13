
// Sheet 1
//  #1
#include <iostream>
using namespace std;
int main()
{
  const int n = 10;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  for (int i = n - 1; i >= 0; i--)
    cout << arr[i] << " ";
  return 0;
}