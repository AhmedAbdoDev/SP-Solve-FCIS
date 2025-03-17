// Sheet 3
// #3
#include <iostream>
using namespace std;
const int n = 4;
struct Student
{
  int ID;
  string firstName;
  int grade;
  string status;
};

int main()
{
  Student students[n];
  for (int i = 0; i < n; i++)
  {
    cout << "enter Student " << (i + 1) << " ID: ";
    cin >> students[i].ID;
    cout << "enter Student " << (i + 1) << " FirstName: ";
    cin >> students[i].firstName;
    cout << "enter Student " << (i + 1) << " Grade: ";
    cin >> students[i].grade;
    if (students[i].grade > 60)
      students[i].status = "P";
    else
      students[i].status = "F";
    cout << endl;
  }
  for (int i = 0; i < n; i++)
    cout << "Student " << students[i].firstName
         << " status : " << students[i].status << endl;

  return 0;
}
