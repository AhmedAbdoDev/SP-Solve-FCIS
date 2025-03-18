// Sheet 5
// #2
#include <iostream>
using namespace std;

const int SIZE = 10;
void modifyArray(int[]);
void printArray(int[]);
int main()
{
  int arr[SIZE];
  cout << "Enter your array: " << endl;
  for (int i = 0; i < SIZE; i++)
    cin >> arr[i];
  modifyArray(arr);
  cout << "Array after change:" << endl;
  printArray(arr);
  return 0;
}
void modifyArray(int arr[])
{
  for (int i = 0; i < SIZE; i++)
    if (arr[i] == 0)
      continue;
    else if (arr[i] % 2 == 0)
      arr[i] = '*';
    else
      arr[i] = '%';
}

void printArray(int arr[])
{
  for (int i = 0; i < SIZE; i++)
    if (arr[i] == '*' || arr[i] == '%')
      cout << (char)arr[i] << " " << endl;
    else
      cout << arr[i] << " " << endl;
}