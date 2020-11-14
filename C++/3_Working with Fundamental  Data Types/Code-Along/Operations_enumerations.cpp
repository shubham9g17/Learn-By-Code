#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 enum class Day { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
 Day yesterday{ Day::Monday }, today{ Day::Tuesday }, tomorrow{ Day::Wednesday };
 const Day poets_day{ Day::Friday };
 enum class Punctuation : char { Comma = ',', Exclamation = '!', Question = '?' };
 Punctuation ch{ Punctuation::Comma };
 cout << "yesterday's value is " << static_cast<int>(yesterday)<< static_cast<char>(ch) << " but poets_day's is " << static_cast<int>(poets_day)<< static_cast<char>(Punctuation::Exclamation) << endl;
 today = Day::Thursday; // Assign new ...
 ch = Punctuation::Question; // ... enumerator values
 tomorrow = poets_day; // Copy enumerator value
 cout << "Is today's value(" << static_cast<int>(today)<< ") the same as poets_day(" << static_cast<int>(poets_day)<< ')' << static_cast<char>(ch) << endl;
// ch = tomorrow; // Uncomment ...
// tomorrow = Friday; // ... any of these ...
// today = 6; // ... for an error.
}