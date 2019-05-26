#include <iostream>


using namespace std;

float area(int a)
{
    return 3.14*a*a;
}
int area(int a,int b)
{
    return a*b;
}


int main()
{
    int x=20;
    cout<<"Area of circle is (r=3)" << area(3)<<endl;
    int&a=x;
    cout<<"Area of rectangle(a=2  ,b=3)"<<area(3,2)<<endl;

    return 0;
}
