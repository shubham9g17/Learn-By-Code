#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 unsigned int red {0xFF0000u}; // Color red
 unsigned int white {0xFFFFFFu}; // Color white - RGB all maximum
 cout <<hex // Hexadecimal output
 <<setfill('0'); // Fill character 0
 cout << "Try out bitwise complement, AND and OR operators:";
 cout << "\nInitial value: red = " <<setw(8) << red;
 cout << "\nComplement: ~red = " <<setw(8) << ~red;
 cout << "\nInitial value: white = " <<setw(8) << white;
 cout << "\nComplement: ~white = " <<setw(8) << ~white;
 cout << "\nBitwise AND: red & white = " <<setw(8) << (red & white);
 cout << "\nBitwise OR: red | white = " <<setw(8) << (red | white);
 cout << "\n\nNow try successive exclusive OR operations:";
 unsigned int mask {red ^ white};
 cout << "\nmask = red ^ white = " <<setw(8) << mask;
 cout << "\n mask ^ red = " <<setw(8) << (mask ^ red);
 cout << "\n mask ^ white = " <<setw(8) << (mask ^ white);
 unsigned int flags {0xFF}; // Flags variable
 unsigned int bit1mask {0x1}; // Selects bit 1
 unsigned int bit6mask {0b100000}; // Selects bit 6
 unsigned int bit20mask {1u << 19}; // Selects bit 20
 cout << "\n\nUse masks to select or set a particular flag bit:";
 cout << "\nSelect bit 1 from flags : " << setw(8) << (flags & bit1mask);
 cout << "\nSelect bit 6 from flags : " << setw(8) << (flags & bit6mask);
 cout << "\nSwitch off bit 6 in flags: " << setw(8) << (flags &= ~bit6mask);
 cout << "\nSwitch on bit 20 in flags: " << setw(8) << (flags |= bit20mask)<< endl;
}