#include <iostream>
using namespace std;
int main()
{       
    int a,b,c;
    char op;
    cout<<("Enter two numbers: ");
    cin>>a>>b;
    cout<<("Enter the operation to perform:\n a for addition \n s for subtraction\n m for multiplication \n d for division: \n");
    cin>>op;
    switch (op)
    {
    case 'a':
    case 'A':
    c=a+b;
        break;
    case 's':
    case 'S':
    c=b-a;
        break;
    case 'm':
    case 'M':
    c=b*a;
        break;
    case 'd':
    case 'D':
    c=a/b;
        break;
    default:
        cout<<("Invalid operation code\n");
        break;
    }
    cout<<("The result is: ")<<c;

return 0;
}