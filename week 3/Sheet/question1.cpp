// Sheet 3
// #1
#include <iostream>
using namespace std;
const int n = 3;
const int SeatsNumbers = 50;
struct Hall
{
  int number;
  string movieName;
  int emptySeats;
};
Hall halls[n];
void InputHalls();
Hall FindingDetails(string);
void DecreaseSeats(int, int);
void Booking();
int main()
{
  InputHalls();
  Booking();
  return 0;
}
void InputHalls()
{
  for (int i = 0; i < n; i++)
  {
    cout << "Enter Hall Number : ";
    cin >> halls[i].number;
    cout << "Enter Movie Name : ";
    cin >> halls[i].movieName;
    halls[i].emptySeats = SeatsNumbers;
  }
}
Hall FindingDetails(string name)
{
  Hall hall;
  for (int i = 0; i < n; i++)
    if (halls[i].movieName == name)
      hall = halls[i];
  return hall;
}
void DecreaseSeats(int number, int tickets)
{
  for (int i = 0; i < n; i++)
    if (halls[i].number == number)
    {
      halls[i].emptySeats -= tickets;
      cout
          << "Movie at hall number : " << halls[i].number << endl
          << "Number of empty seats : " << halls[i].emptySeats << endl;
    }
}
void Booking()
{
  string movieName;
  cout << "Enter your designated movie : ";
  cin >> movieName;
  Hall hall = FindingDetails(movieName);
  int tickets;
  cout << "How many tickets ? ";
  cin >> tickets;
  if (hall.emptySeats >= tickets)
    DecreaseSeats(hall.number, tickets);
  else
    cout << "Reservation cannot be made " << endl;
}