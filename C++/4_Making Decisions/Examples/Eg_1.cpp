// Comparing data values
#include<iostream>
using namespace std;
int main()
{
  char first{};                       // Stores the first character
  char second{};                     // Stores the second character

  cout<<"Enter a character"<<endl;
  cin>>first;

  cout<<"Enter a Second character"<<endl;
  cin>>second;


  cout<<"The value of "<<first<<"<"<<second<<" is:"<<(first < second)<<endl;
  cout<<"The value of "<<first<<"=="<<second<<" is:"<<(first == second)<<endl;

}
