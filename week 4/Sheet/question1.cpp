// Sheet 4
// #1
#include <iostream>
using namespace std;

int numberToDozens(int);

int main()
{
  cout << "Enter number of pens: ";
  int pens;
  cin >> pens;
  int dozens = numberToDozens(pens);
  cout << (dozens >= 6 ? "Okay" : "Not enough") << endl;
  return 0;
}
int numberToDozens(int pens)
{
  return pens / 12;
}