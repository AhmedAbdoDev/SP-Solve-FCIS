// Sheet 5
// #3
#include <iostream>
using namespace std;
void Deposit(int &);
void Withdraw(int &);
int main()
{
  int balance = 1000;
  char op = 'y';
  do
  {
    cout << "Choose your operation:\n";
    cout << "1.  Deposit\t\t2.  Withdraw\t\t3.  Display balance\n";
    int choise;
    cin >> choise;

    switch (choise)
    {
    case 1:
      Deposit(balance);
      break;
    case 2:
      Withdraw(balance);
      break;
    case 3:
      cout << "Current Balance: " << balance << endl;
      break;
    default:
      break;
    }
    cout << "Another Operation? (Y/N)" << endl;
    cin >> op;
  } while (op != 'n');
  return 0;
}

void Deposit(int &balance)
{
  cout << "How much are you going to deposite?" << endl;
  int num;
  cin >> num;
  balance += num;
}

void Withdraw(int &balance)
{
  cout << "How much are you going to deposite?" << endl;
  int num;
  cin >> num;
  balance -= num;
}