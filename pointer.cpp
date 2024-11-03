#include<iostream>
using namespace std;
int main() {
    int numbers[5]={1,2,3,4,5};
    for (int i=0, i<5; i++) {
        cout<<*(numbers+1)<<endl;
    }
    return 0;
}