#include <iostream>
using namespace std;
int main()
{
    int s;
    float sum=0,avg;
    cout<<("Enter no of elements: ");
    cin>>s;
    int a[s];
    cout<<("Enter the elements: \n");
    for(int i=0;i<s;i++){
        cin>>a[i];
    }
    for(int i=0;i<s;i++){
        sum+=a[i];
    }
    avg=(sum/s);
   cout<<("The average of elements: ")<<avg;
return 0;
}