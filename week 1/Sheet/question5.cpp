
// Sheet 1
// #5
#include <iostream>
using namespace std;
int main()
{
  cout << "How many numbers you will enter: ";
  int n;
  cin >> n;
  if (n > 10)
  {
    cout << "You can't enter more than 10 integers.";
    return 0;
  }
  cout << "Please enter " << n << " integers :" << endl;

  int arr[10], arr1[10];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    arr1[n - i - 1] = arr[i];
  }
  for (int i = 0; i < n; i++)
    cout << arr1[i];
  return 0;
}