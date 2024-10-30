
#include <iostream>
using namespace std;
int main()
{   int n;
    cout<<("Enter no of characters in diamond: ");
    cin>>n;
    for(int a=1;a<=n;a+=2){
    int ch=65;
    for(int b=1;b<=a;b++){
        for (int i=4;i>0;i--){
        for (int j=1;j<i;j++){
        cout<<(" ");
        }
        break;}
        cout<<char(ch);
        ch+=1;}
    
    cout<<("\n");
    
    }  
    
return 0;
}