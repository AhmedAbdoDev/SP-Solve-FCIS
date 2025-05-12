// Sheet 8
// #2
#include <iostream>
#include <cmath>
using namespace std;
void insertValue(int *arr, int n, int index, int value);
int main()
{
  int n, value, index;
  cout << "Enter the number of elements" << endl;
  cin >> n;
  cout << "Enter " << n << " elements" << endl;
  int *arr = new int[n]{};
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cout << "Enter the value to insert: ";
  cin >> value;
  cout << "Enter index to place the value: ";
  cin >> index;
  insertValue(arr, n, index, value);
  for (int i = 0; i < n; i++)
    cout << arr[i] << endl;
  delete[] arr;
  return 0;
}
void insertValue(int *arr, int n, int index, int value)
{
  for (int i = n - 1; i > index; i--)
    arr[i] = arr[i - 1];
  arr[index] = value;
}