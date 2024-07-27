#include <iostream>
using namespace std;
int main() {
    int num1,num2;
    cout <<"num1: "; cin >>num1;
    cout <<"num2: "; cin >>num2;

    cout <<"add : " << num1 +num2<<endl; //add
    cout <<"sub : " << num1-num2<<endl; //subtract
    cout <<"mul : " <<num1*num2<<endl; //multiply
    cout <<"div : " <<num1/num2<<endl; //divide
    cout <<"remainder : " <<num1%num2<<endl; // modulus oprtr gives remainder
    cout <<"increment num1 : " <<++num1<<endl; // increases the value by 1
    cout <<"decrement num2 : " <<--num2<<endl; //decreases the value by 1

    cout <<(num1==num2)<<endl; //if num 1 and num2 are equal then true else false
    cout <<(num1!=num2)<<endl; //if num 1 and num2 are not equal then true else false
    cout <<(num1>num2)<<endl; //if num 1 is greater than num2  then true else false
    cout <<(num1<num2)<<endl; //if num 1 is less than num2  then true else false
    cout <<(num1>=num2)<<endl; //if num 1 is greater than or equal to num2  then true else false
    cout <<(num1<=num2)<<endl;//if num 1 is less than or equal to num2  then true else false

return 0;
}