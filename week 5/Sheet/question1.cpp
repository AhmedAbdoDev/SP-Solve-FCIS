// Sheet 5
// #1
#include <iostream>
using namespace std;
const int SIZE = 20;
void change(int, int[]);
int main()
{
  cout << "enter total no. of elements (1-20): ";
  int n;
  cin >> n;
  int arr[SIZE] = {};
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  change(n, arr);
  cout << "Array after change:" << endl;
  for (int i = 0; i < n; i++)
    cout << arr[i] << endl;
  return 0;
}
void change(int n, int arr[])
{
  for (int i = 0; i < n; i++)
    arr[i] = arr[i] < 0 ? -arr[i] : arr[i];
}