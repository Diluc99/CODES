#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string FirstName;
    cout<<"Enter First Name : ";
    cin>>FirstName;
    string LastName;
    cout<<"Enter Last Name : ";
    cin>>LastName;
    string FullName=FirstName+" "+ LastName;
    cout<<"Your Full Name is : "<< FullName;
    return 0;
}