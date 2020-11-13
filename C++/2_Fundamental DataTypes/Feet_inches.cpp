#include<iostream>
using namespace std;
int main()
{
    int height{0},feet{0},inch{0};
    cout<<"Enter Height in inches\n";
    cin>>height;
    feet=height/12;
    inch=height%12;
    cout<<feet<<"feet"<<inch<<"inch";
    return 1;
    
}