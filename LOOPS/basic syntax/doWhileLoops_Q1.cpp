#include <iostream>
using namespace std;
int main()
{
    /* Write a program to print the sum of stream of N integers in the input using do-while loop. */   

    int N,sum = 0,count =1,Number;
    cout<<"How many integers do you want to add: ";
    cin>>N;
    do {
        cout<<"Enter an integer: ";
        cin>>Number;
        sum+=Number;
        count++;
    } while(count<=N);
    cout<<"The sum is: "<<sum;

        return 0;
}