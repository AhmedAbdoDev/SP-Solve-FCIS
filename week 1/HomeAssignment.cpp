// HA #1
#include <iostream>
using namespace std;
int main()
{
  const int n = 3;
  double base[n], taxes[n], maxPrice[n], netPrice[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Data of Product #" << (i + 1) << endl;
    cout << "Enter base price of product: ";
    cin >> base[i];
    cout << "Enter taxes of product: ";
    cin >> taxes[i];
    cout << "Enter maximum price of the belonging production line: ";
    cin >> maxPrice[i];

    netPrice[i] = base[i] + (base[i] * taxes[i] / 100);

    cout << "Product net price: " << netPrice[i] << endl;
    if (netPrice[i] <= maxPrice[i])
      cout << "Product net price is accepted" << endl;
    else
      cout << "Product net price exceeds production line maximum price" << endl;

    cout << endl;
  }
  return 0;
}