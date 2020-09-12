#include<iostream>
using namespace std;
float vol(float);
float vol(float , float);
float vol(float ,float,float);

int main()
{
    int r,ht,l,b,h;
    cout<<"Enter radius of sphere:"<<endl;
    cin>>r;
    cout<<"Enter the radius and height of cylinder:"<<endl;
    cin>>r>>ht;
    cout<<"Enter the length,breadth and height of cuboid"<<endl;
    cin>>l>>b>>h;
    cout<<"volume of sphere:"<<vol(r)<<endl;
    cout<<"volume of cylinder:"<<vol(r,ht)<<endl;
    cout<<"Volume of cuboid:"<<vol(l,b,h)<<endl;
}

float vol(float r)
{
   return(4/3*3.14*r*r*r);
}

float vol(float r,float ht)
{
    return(3.14*r*r*ht);
}

float vol(float l,float b,float h)
{
    return(l*b*h);
}