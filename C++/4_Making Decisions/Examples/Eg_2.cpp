// Using an if statement
#include <iostream>
using namespace std;
int main()
{
 cout << "Enter an integer between 50 and 100: ";

  int value {};
  cin >> value;

  if (value)
    cout << "You have entered a value that is different from zero." << endl;

  if (value < 50)
    cout << "The value is invalid - it is less than 50." << endl;

  if (value > 100)
    cout << "The value is invalid - it is greater than 100." << endl;

  cout << "You entered " << value << endl;
}