// Sheet 6
// #2
#include <iostream>
using namespace std;
const int SIZE = 20;
int main()
{
  char op = 'y';
  do
  {
    int m, n, p, q;
    cout << "Enter the dimensions of the first matrix:" << endl;
    cin >> m >> n;
    cout << "Enter the dimensions of the second matrix:" << endl;
    cin >> p >> q;
    if (n != p)
      cout << "Wrong dimensions" << endl;
    else
    {
      int A[SIZE][SIZE], B[SIZE][SIZE], result[SIZE][SIZE] = {0};
      cout << "Enter the numbers of the first matrix:" << endl;
      for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
          cin >> A[i][j];
      cout << "Enter the numbers of the second matrix:" << endl;
      for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
          cin >> B[i][j];
      for (int i = 0; i < m; i++)
        for (int j = 0; j < q; j++)
          for (int k = 0; k < n; k++)
            result[i][j] += A[i][k] * B[k][j];
      cout << "The result is:" << endl;
      for (int i = 0; i < m; i++)
      {
        for (int j = 0; j < q; j++)
          cout << result[i][j] << " ";
        cout << endl;
      }
    }
    cout << "Do you want to try another time? y/n" << endl;
    cin >> op;
  } while (op == 'y');

  return 0;
}
