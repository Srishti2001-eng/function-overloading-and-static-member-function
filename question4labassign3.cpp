#include<iostream>
using namespace std;

inline int square(int x)
{
    return (x*x); 
}

inline int cube(int y)
{
    return(y*y*y);
}

int main()
{
   cout<<"square of x: "<<square(4)<<endl;
   cout<<"cube of y: s"<<cube(5);
   return 0;
}


