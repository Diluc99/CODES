#include <iostream>
using namespace std;
int main()
{
    int num1,num2,temp;
cout<<"Enter first number: ";
 cin>>num1;       
 cout<<"Enter second number: ";
 cin>>num2;     
 cout<<"Num1 before swap: "<<num1<<endl;
 cout<<"Num2 before swap: "<<num2<<endl;
 temp=num1;
 num1=num2;
 num2=temp;
 cout<<"Num1 after swap: "<<num1<<endl;
 cout<<"Num2 after swap: "<<num2;
return 0;
}