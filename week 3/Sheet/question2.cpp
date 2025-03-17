// Sheet 3
// #2
#include <iostream>
using namespace std;
const double pricePerSQM = 200;
struct Room
{
  double length, width;
};
struct House
{
  string address;
  int numberOfRooms;
  Room rooms[20];
  double area, price;
};
House InputHouse();
House computeHouse(House house);
void displayHouse(House house);
int main()
{
  House house = InputHouse();
  house = computeHouse(house);
  displayHouse(house);
  return 0;
}

House InputHouse()
{
  House house;
  cout << "Enter the house address: ";
  cin >> house.address;
  cout << "Enter the number of rooms: ";
  cin >> house.numberOfRooms;

  for (int i = 0; i < house.numberOfRooms; i++)
  {
    cout << "Dimensions of room " << (i + 1) << " : ";
    cin >> house.rooms[i].length >> house.rooms[i].width;
  }
  return house;
}
House computeHouse(House house)
{
  double areaSum = 0.0;
  for (int i = 0; i < house.numberOfRooms; i++)
    areaSum += (house.rooms[i].length * house.rooms[i].width);
  house.area = areaSum;
  house.price = house.area * pricePerSQM;
  return house;
}
void displayHouse(House house)
{
  cout << "The House is in " << house.address
       << "." << endl
       << "It has " << house.numberOfRooms
       << " rooms, with a total area of " << house.area << " square meters."
       << endl
       << "It Costs $" << house.price;
}
