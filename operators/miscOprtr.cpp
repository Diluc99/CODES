#include <iostream>
using namespace std;
int main()
{
    int a = 6,b=5,x;
    cout<<"The size of a is :"<<sizeof(a)<<"bytes"<<endl; // size of operator

    a==b?x=8:x=9; // condition?expression1:expression2 operator , if cd true then exp1 else exp 2
    cout<<"the value of x is : "<<x<<endl;  

    static_cast<double>(a);  //cast data type used to change data type
    cout<<"The new cast value(in double data type) is: "<<a<<endl;

    return 0;
}

