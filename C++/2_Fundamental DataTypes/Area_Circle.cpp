#include<iostream>
using namespace std;
int main()
{
    const float pi{3.14};
    float r{},area{};
    cout<<"Enter radius of Circle"<<endl;
    cin>>r;
    area=pi*r*r;
    cout<<"Area is "<<area;
    return 1;
}