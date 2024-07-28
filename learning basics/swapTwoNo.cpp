#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"The swapped No.s are"<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b;
    return 0;
}