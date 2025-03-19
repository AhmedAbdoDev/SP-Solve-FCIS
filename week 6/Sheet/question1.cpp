// Sheet 6
// #1
#include <iostream>
using namespace std;
const int SIZE = 20;
int main()
{
  char op = 'y';
  do
  {

    int rows, columns;
    cout << "Enter the dimensions of the matrix:" << endl;
    cin >> rows >> columns;
    if (rows != columns)
    {
      cout << "Wrong dimensions" << endl;
      continue;
    }
    int arr[SIZE][SIZE];
    for (int row = 0; row < rows; row++)
      for (int column = 0; column < columns; column++)
        cin >> arr[row][column];
    bool isIdentity = 1;
    for (int row = 0; row < rows; row++)
    {
      for (int column = 0; column < columns; column++)
        if ((row == column && arr[row][column] != 1) ||
            (row != column && arr[row][column] != 0))
        {
          isIdentity = false;
          break;
        }
      if (!isIdentity)
        break;
    }
    cout << (isIdentity ? "It's" : "It's not") << " an identity matrix" << endl;
    cout << "Do you want to enter another matrix? y/n" << endl;
    cin >> op;
  } while (op == 'y');

  return 0;
}
