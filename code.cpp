#include<iostream>
using namespace std;

int pow (int n) {
    if (n==1) {
        return 1;
    }
    return n*pow(n-1);
}
int main(){
    int number;
    cout<<"Enter a number"<<endl;
    cin>>number;
    cout<<"The power is "<<pow(number)<<endl;
    return 0;
}