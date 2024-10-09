#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<("Enter a number: ");
    cin>>a;
    for(int i=2;i<a;i++){
        b=a%i;
    
    
       if (b==0)
        {cout<<a<<(" is not prime.");
        break;
        
        }
        else{
        cout<<a<<(" is prime.");
        break;
        }
    }
    
        return 0;
}