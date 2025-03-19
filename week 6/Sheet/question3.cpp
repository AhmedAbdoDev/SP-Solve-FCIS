// Sheet 6
// #3
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
    int A[SIZE][SIZE], B[SIZE][SIZE];
    cout << "Enter the first matrix:" << endl;
    for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
        cin >> A[i][j];
    cout << "Enter the second matrix:" << endl;
    for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
        cin >> B[i][j];
    bool mirror = 1;
    // 3 X 4
    for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
      {
        cout << i << " " << j << " " << A[i][j] << " " << B[i][n - j] << endl;
        if (A[i][j] != B[i][n - j - 1])
          mirror = 0;
      }

    cout << (mirror ? "Yes, they are" : "No, they are not") << " mirrors to each other." << endl;
    cout << "Do you want to try another time? y/n" << endl;
    cin >> op;
  } while (op == 'y');

  return 0;
}
