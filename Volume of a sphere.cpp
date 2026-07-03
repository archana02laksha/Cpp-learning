#include <iostream>
using namespace std;
int main()
{
    float radius ,volume;
    cout<<"Enter the radius of sphere:";
    cin>>radius;
    volume = (4.0/3.0)*3.141592*radius*radius*radius;
    cout<<"volume of sphere:";
    cout<<volume<<endl;
    
}