
// HA #3
#include <iostream>
using namespace std;
const int n = 4;
struct Product
{
  int serialNum, quantity, totalSales, price;
};
Product products[n];

void InputProducts();
void ProductsLessThan(int quant);
int GetIndexOfHighestSales();
void Discount();
void Display();
void Menu();

int main()
{
  InputProducts();
  Menu();
  return 0;
}

void InputProducts()
{
  cout << "Please enter the four products:" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "Enter values of product #" << (i + 1) << endl;
    cout << "Serial num : ";
    cin >> products[i].serialNum;
    cout << "quantity : ";
    cin >> products[i].quantity;
    cout << "sales : ";
    cin >> products[i].totalSales;
    cout << "price : ";
    cin >> products[i].price;
    cout << endl;
  }
}
void ProductsLessThan(int quant)
{
  for (int i = 0; i < n; i++)
    if (quant > products[i].quantity)
      cout << "Product " << products[i].serialNum << endl;
}
int GetIndexOfHighestSales()
{
  int max = products[0].totalSales, index = -1;
  for (int i = 0; i < n; i++)
    if (max < products[i].totalSales)
    {
      max = products[i].totalSales;
      index = i;
    }
  return index + 1;
}
void Discount()
{
  for (int i = 0; i < n; i++)
    if (products[i].quantity < 6)
      products[i].price -= (products[i].price * 0.5);
  cout << "Discount Applied." << endl;
}
void Display()
{
  for (int i = 0; i < n; i++)
  {
    cout << "product #" << i + 1 << endl;
    cout << "Serial num : " << products[i].serialNum << endl;
    cout << "Quantity : " << products[i].quantity << endl;
    cout << "Sales : " << products[i].totalSales << endl;
    cout << "Price : " << products[i].price << endl;
  }
}
void Menu()
{
  char ch = 'y';
  do
  {
    cout << "Please enter a number:" << endl
         << "Press 1 to get products that have less quantity than a certain value" << endl
         << "Press 2 to Get Product with the highest sales" << endl
         << "Press 3 to Apply 50% discount for products that have quantity less than 6" << endl
         << "Press 4 to Display all the products" << endl;
    int op;
    cin >> op;
    if (op == 1)
    {
      int quant;
      cout << "Please enter the quantity: ";
      cin >> quant;
      ProductsLessThan(quant);
    }
    else if (op == 2)
      cout << "Product " << GetIndexOfHighestSales() << endl;
    else if (op == 3)
      Discount();
    else if (op == 4)
      Display();

    cout << "Do you want to Apply Another function, Press 'Y' or 'y' for yes, any other key to stop : ";
    cin >> ch;
    if (ch != 'n')
      cout << "------------------------------------" << endl;
  } while (ch != 'n');
}