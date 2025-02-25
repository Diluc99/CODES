#include <iostream>
using namespace std;
int main()
{
    int num1,num2,mul,count=0;
    cin>>num1;
    cin>>num2;
    mul=num1*num2;
    cout<<"Product - "<<mul<<endl;
    while (mul!=0)
    {
        mul/=10;
        count++;
    }
    cout<<"Count of digits - "<<count;
           
return 0;
}