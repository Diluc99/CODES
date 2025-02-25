#include <iostream>
using namespace std;
int main()
{ float temp;
cin<<temp;
if( temp>=80){ 
    cout<<"Swimming";}
else if( 60<=temp<80){ 
    cout<<"tenis";}
else if( 40<=temp<60){
    cout<<"golf";}
else{ 
    cout<<"Skiing";
}
       
return 0;
}