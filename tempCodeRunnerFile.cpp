#include <iostream>
using namespace std;
int main()
{
    //Write a program to print the first multiple of 5 which is also a multiple of 7
    
 /*   int a=5,mul,n=1;

    while (a=5){
        mul = a*n;
        n++;
        if(mul%7==0) {
        break;
    }
    }
cout <<mul;    */

//ANOTHER WAY
int i=5;
while(true){
    if (i%7==0){
        break;}
        i+=5;
    }
    cout<<i;



return 0;
}