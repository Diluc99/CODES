#include <iostream>
using namespace std;
int main()
{   
     // write a program to print all the value from 1 to 50 except multiples of 3
  /*   int num=0,mulOf3;
    while(num<=50)
    {
    num++;
    if (num%3==0){
    continue;}
    cout<<num<<endl;
    }
    */
   for(int i=0;i<=50;i++)
   {
    if(i%3==0) 
    {continue;}
    cout<<i<<endl;
   }    





    return 0;
}