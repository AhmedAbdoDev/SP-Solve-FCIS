
// Sheet 1
// #2
#include <iostream>
using namespace std;
int main()
{
  const int n = 5;
  char complete = 'y';
  do
  {
    int arr[n], arr2[n];
    cout << "Enter elements for array 1: ";
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    cout << "Enter elements for array 2: ";
    bool match = true;
    for (int i = 0; i < n; i++)
    {
      cin >> arr2[i];
      if (arr2[i] != arr[i])
        match = false;
    }
    cout << (match ? "Equal" : "No match") << endl;
    cout << "Do you want to continue?" << endl;
    cin >> complete;
  } while (complete != 'n');

  return 0;
}