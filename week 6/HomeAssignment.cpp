// HA #5
#include <iostream>
using namespace std;
const int n = 10;
struct Product
{
  int serialNum, quantity, sales[4][7] = {}, price;
};
void InputProducts(Product products[], int);
void ProductsLessThan(int quant, Product products[], int size);
void PriceLessThan(Product products[], int numOfProducts, int amount, int &coun);
int GetIndexOfHighestSales(Product products[], int size);
void maxSales(Product products[], int numOfProducts, int productNum, int weekNum);
void Discount(Product products[], int size);
float avgSales(Product products[], int numOfProducts, int productNum);
void Display(Product products[], int size);
void Menu(Product products[], int);

int main()
{
  cout << "Enter the number of products: ";
  int size;
  cin >> size;
  if (size > 10)
    cout << "Can't enter products more than 10" << endl;
  else
  {
    Product products[n];
    InputProducts(products, size);
    Menu(products, size);
  }
  return 0;
}

void InputProducts(Product products[n], int size)
{
  cout << "Please enter the " << size << " products:" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << "Enter values of product #" << (i + 1) << endl;
    cout << "Serial num : ";
    cin >> products[i].serialNum;
    cout << "quantity : ";
    cin >> products[i].quantity;
    for (int week = 0; week < 4; week++)
    {
      cout << "enter the 7 sales for the week " << week + 1 << endl;
      for (int day = 0; day < 7; day++)
      {
        cin >> products[i].sales[week][day];
      }
    }
    cout << "price : ";
    cin >> products[i].price;
    cout << endl;
  }
}
void ProductsLessThan(int quant, Product products[n], int size)
{
  for (int i = 0; i < size; i++)
    if (quant > products[i].quantity)
      cout << "Product " << products[i].serialNum << endl;
}
int GetIndexOfHighestSales(Product products[n], int size)
{
  int max = products[0].sales[0][0], index = -1;
  for (int i = 0; i < size; i++)
    if (max < products[i].sales[i][i])
    {
      max = products[i].sales[i][i];
      index = i;
    }
  return index + 1;
}
void maxSales(Product products[n], int size, int productNum, int weekNum)
{
  weekNum--;
  Product product = products[productNum - 1];

  int maxSale = product.sales[weekNum][0], day = 1;
  for (int i = 0; i < 7; i++)
  {
    if (product.sales[weekNum][i] > maxSale)
    {
      maxSale = product.sales[weekNum][i];
      day = i + 1;
    }
  }

  cout << "The max sales was " << maxSale << " on day " << day << endl;
}

void Discount(Product products[n], int size)
{
  for (int i = 0; i < size; i++)
    if (products[i].quantity < 6)
      products[i].price -= (products[i].price * 0.5);
  cout << "Discount Applied." << endl;
}
float avgSales(Product products[], int size, int productNum)
{
  Product product = products[productNum - 1];
  float total = 0;
  for (int week = 0; week < 4; week++)
    for (int day = 0; day < 7; day++)
      total += product.sales[week][day];
  return total / 28.0;
}
void Display(Product products[n], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << "Serial num : " << products[i].serialNum << endl;
    cout << "Quantity : " << products[i].quantity << endl;
    cout << "Price : " << products[i].price << endl;
    cout << "Average Sales : " << avgSales(products, size, i + 1) << endl;
  }
}
void PriceLessThan(Product products[n], int size, int amount, int &coun)
{
  for (int i = 0; i < size; i++)
    if (amount > products[i].price)
      coun++;
}

void Menu(Product products[n], int size)
{
  char ch = 'y';
  do
  {
    cout << "Please enter a number:" << endl
         << "Press 1 to get products that have less quantity than a certain value" << endl
         << "Press 2 to get the maximum sales of a certain product in a certain week" << endl
         << "Press 3 to Apply 50% discount for products that have quantity less than 6" << endl
         << "Press 4 to count the number of products with prices less than a certain amount" << endl
         << "Press 5 to Display all the products" << endl;
    int op;
    cin >> op;
    if (op == 1)
    {
      int quant;
      cout << "Please enter the quantity: ";
      cin >> quant;
      ProductsLessThan(quant, products, size);
    }
    else if (op == 2)
    {
      int productNum, weekNum;
      cout << "Enter the product number ";
      cin >> productNum;
      cout << "Enter the week ";
      cin >> weekNum;
      maxSales(products, size, productNum, weekNum);
    }
    else if (op == 3)
      Discount(products, size);
    else if (op == 4)
    {
      int amount, count = 0;
      cout << "Enter the amount : ";
      cin >> amount;
      PriceLessThan(products, size, amount, count);
      cout << "The number of products with price less than " << amount << " is " << count << endl;
    }
    else if (op == 5)
      Display(products, size);
    cout << "Do you want to Apply Another function, Press 'Y' or 'y' for yes, any other key to stop : ";
    cin >> ch;
    if (ch != 'n')
      cout << "------------------------------------" << endl;
  } while (ch != 'n');
}