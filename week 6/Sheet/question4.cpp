// Sheet 6
// #4
#include <iostream>
using namespace std;
const int SIZE = 20;
int main()
{
  char op = 'y';
  do
  {
    int m, n;
    cout << "Enter the dimensions of the two matrices:" << endl;
    cin >> m >> n;
    int A[SIZE][SIZE], transpose[SIZE][SIZE];
    cout << "Enter the first matrix:" << endl;
    for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
        cin >> A[i][j];
    for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
        transpose[j][i] = A[i][j];
    cout << "The transpose is:" << endl;
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
        cout << transpose[i][j] << " ";
      cout << endl;
    }
    cout << "Do you want to try another time? y/n" << endl;
    cin >> op;
  } while (op == 'y');

  return 0;
}
