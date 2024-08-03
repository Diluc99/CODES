#include <iostream>
using namespace std;
int main()
{
    //Write a program to print a hollow rectangle
    int n,m;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    cout<<"Enter the no. of columns: ";
    cin>>m;
for(int i=1 ; i<=n ; i++ ){
    for (int j=1 ; j<=m ; j++) {
        if(i==1 || i==n || j==1 || j==m )
         {cout<<"*";}
    else {cout<<" ";}
    }
        cout<<endl;
}
 
    return 0;
}