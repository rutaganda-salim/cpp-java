#include<iostream>
using namespace std;
namespace customNameSpace{
    int amount=2000;
    int duplicateAmount() {
        return amount * 2;
    }
}
int amount=5000;
int main() {   
    int amount=3000;
    cout<<"The local amount is"<<amount<<endl;
    cout<<"The global amount is"<<::amount<<endl; 
    cout<<"The amount from customNameSpace is"<<customNameSpace::amount<<endl;
    cout<<"The duplicate amount from customNameSpace is"<<customNameSpace::duplicateAmount()<<endl;
    cout<<hex<<amount<<endl;
    return 0;
}