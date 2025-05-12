// Sheet 8
// #1
#include <iostream>
#include <cmath>
using namespace std;

void convertToBinary(int *arr, int *binaryArray, int n);
void DisplayArray(int *arr, int *binaryArray, int n);
int main()
{

  int n;
  cout << "Enter the number of elements" << endl;
  cin >> n;
  cout << "Enter " << n << " elements" << endl;
  int *arr = new int[n]{};
  int *binaryArray = new int[n]{};
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  convertToBinary(arr, binaryArray, n);
  DisplayArray(arr, binaryArray, n);
  delete[] arr;
  delete[] binaryArray;
  return 0;
}

void convertToBinary(int *arr, int *binaryArray, int n)
{
  for (int i = 0; i < n; i++)
  {
    int num = arr[i], power = 0, remainder = 0;

    while (num >= 1)
    {
      remainder = num % 2;
      binaryArray[i] += remainder * pow(10, power);
      num /= 2;
      power++;
    }
  }
}

void DisplayArray(int *arr, int *binaryArray, int n)
{
  cout << "The binary representation of each integer:" << endl;
  for (int i = 0; i < n; i++)
    cout << arr[i] << " --> " << binaryArray[i] << endl;
}