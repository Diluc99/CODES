#include <iostream>
using namespace std;
class BankAccMan{
    public:
    int AccNo,balance=0;
    string AccName;
    void setDeposit(int dep){
        balance+=dep;
    }
    void setWid(int wid){
        if(wid<=balance){
            balance=balance-wid;
        } else{
            cout<<"Wid amount greater than acc balance i.e Gareeb MC";
        }
    }
    void dis(string name){
        AccName=name;
        cout<<"Acc holder name: "<<AccName<<endl;
        cout<<"Balance"<<balance;
    }
};  
int main(){

}
return 0;
}