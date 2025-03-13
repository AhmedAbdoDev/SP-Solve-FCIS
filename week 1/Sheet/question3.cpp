
// Sheet 1
// #3
#include <iostream>
using namespace std;
int main()
{
  int n = 5, counter = 0;
  cout << "Enter your characters: ";
  for (int i = 0; i < n; i++)
  {
    char ch;
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      counter++;
  }
  cout << "You entered " << counter << " vowels" << endl;

  return 0;
}