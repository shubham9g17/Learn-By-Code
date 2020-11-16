// Using a nested if
#include  <iostream>
using namespace std;

int main()
{
  char letter {};                      // Store input here
  cout << "Enter a letter: ";     // Prompt for the input
  cin >> letter;

  if (letter >= 'A') 
  {                                    // letter is 'A' or larger
    if (letter <= 'Z') 
    {                                  // letter is 'Z' or smaller
      cout << "You entered an uppercase letter." << endl;
      return 0;
    }
  }

  if (letter >= 'a')                   // Test for 'a' or larger
    if (letter <= 'z') 
    {                                  // letter is >= 'a' and <= 'z'
      cout << "You entered a lowercase letter." << endl;
      return 0;
    }
  cout << "You did not enter a letter." << endl;
}
