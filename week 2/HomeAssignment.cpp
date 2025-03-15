
// HA #2
#include <iostream>
using namespace std;

const int n = 4;
double serial[n], quantity[n], sales[n];
void InputProducts();
void ProductsLessThan(int quant);
int GetIndexOfHighestSales();
int main()
{
  InputProducts();
  cout << "Serial Numbers of the Products that has less quantity than a value entered by the user : " << endl;
  cout << "Please enter the quantity : ";
  int quant;
  cin >> quant;
  ProductsLessThan(quant);
  int index = GetIndexOfHighestSales();
  cout << "Product with the highest sales" << endl
       << "Product " << index << endl;
  return 0;
}
void InputProducts()
{
  for (int i = 0; i < n; i++)
  {
    cout << "Enter values of product #" << (i + 1) << endl;
    cout << "Serial num : ";
    cin >> serial[i];
    cout << "quantity : ";
    cin >> quantity[i];
    cout << "sales : ";
    cin >> sales[i];
    cout << endl;
  }
}
void ProductsLessThan(int quant)
{
  for (int i = 0; i < n; i++)
    if (quant > quantity[i])
      cout << "Product " << serial[i] << endl;
}
int GetIndexOfHighestSales()
{
  int max = sales[0], index = -1;
  for (int i = 0; i < n; i++)
    if (max < sales[i])
    {
      max = sales[i];
      index = i;
    }
  return index + 1;
}
