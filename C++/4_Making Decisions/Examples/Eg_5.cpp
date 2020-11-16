// Using return to exit a stitch statement (and the program)
// (This is just to show it is possible: don't code like this!)
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
  char letter {};
  cout << "Enter a letter: ";
  cin >> letter;

  if (isalpha(letter))
  {
    switch (tolower(letter))
    {
    case 'a': case 'e': case 'i': case 'o': case 'u':
      cout << "You entered a vowel." << endl;
      return 0;
    }
	
	cout << "You entered a consonant." << endl;
  }
  else
  {
    cout << "You did not enter a letter." << endl;
  }
}
