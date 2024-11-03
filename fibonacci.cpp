#include<bits/stdc++.h>
using namespace std;

int findMultiplesOf20(int n) {
    int count = 0;
    for(int i = 20; i <= n; i += 20) {
        count++;
    }
    return count;
}

int fib(int n) {
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int smallOutput1= fib(n-1);
    int smallOutput2= fib(n-2);
    return smallOutput1+smallOutput2;
}

int main() {
    cout<<fib(10)<<endl;
    return 0;
}