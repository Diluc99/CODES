#include <iostream>
using  namespace std;
int main()
{

    int  num1 =7 ;
 
 //ASSIGNMENT OPERATOR WORKS ON CURRENT VALUE OF NUM1
    num1 +=5;
        cout << num1<<endl;   //12
    num1 -=3;
        cout << num1<<endl ;    //12-3=9
    num1 *= 4 ;
        cout << num1<<endl  ;    //=9*4=36
    num1 /= 2  ;
        cout << num1<<endl   ;   // 36/2=13  
     
    num1 %= 4   ;
        cout << num1<<endl    ;  //  13/4 gives remainder1

    return 0;
}