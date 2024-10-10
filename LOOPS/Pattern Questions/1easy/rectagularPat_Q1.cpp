#include <iostream>
using namespace std;
int main()
{   
    // Write a program to print a n*m rectangle of stars. m and n are no. of rows and column respectively. take user input for n and m.
     int m,n;
     cout<<"Enter no. of rows: ";
     cin>>m;
     cout<<"Enter no. of columns: ";
     cin>>n;

     for (int i=1;i<=m;i++)
     {
        for (int j=1;j<=n;j++)
    {
    cout<<"*";

    }
    cout<<endl;
     }

        return 0;
}