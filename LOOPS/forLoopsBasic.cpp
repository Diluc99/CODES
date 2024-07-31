#include <iostream>
using namespace std;
int main()
{
    // write a program to print the sum of first n natural no.s  using for loop 

    int a,n, sum =0;
    cout<<"Enter the value of n to get the sum of first n natural no.s : ";
    cin>>n;

    for(a=1;a<=n;a++)
    {sum+=a;}
    cout<<"The sum of first " <<n << " natural no. is : " <<sum;


    return 0;
}