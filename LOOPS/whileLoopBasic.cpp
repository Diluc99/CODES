#include<iostream>
using namespace std;
int main()
{
    //write a program to print the sum of first n natural numbers
    int n,a=1,sum=0;  // a is the loop variable
    cin>>n;
    while (a<=n)  //condition
     {
       sum+=a;
        a++;  //updating loop variable
    }
    cout<<sum;
    
     return 0;
}