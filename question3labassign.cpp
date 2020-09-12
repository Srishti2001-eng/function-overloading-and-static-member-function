#include<iostream>
using namespace std;

int area(int );
int  area(int , int);
float area(float,float);

int main()
{
    int s,l,b;
    float bs,ht;
    cout<<"Enter side of a square:"<<endl;
    cin>>s;
    cout<<"Enter the length and breadth of rectangle:"<<endl;
    cin>>l>>b;
    cout<<"Enter the base and heigth of triangle:"<<endl;
    cin>>bs>>ht;
    cout<<"Area of a square is:"<< area(s)<<endl;
    cout<<"Area of a rectangle is:"<< area(l,b)<<endl;
    cout<<"Area of a triangle:"<<area(bs,ht)<<endl;
}

int area(int s)
{
    return(s*s);
}

int area(int l,int b)
{
    return(l*b);
}
float area(float bs,float ht)
{
    return((bs*ht)/2);
}