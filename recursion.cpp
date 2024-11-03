#include <iostream>
using namespace std;
int fact (int n) {
    cout<<n<<endl;
    if(n<0) return n;
    if(n==0) return n;
    int smallerAnswer = fact(n-1);
    return n*smallerAnswer;
}

int sumOfDigits(int x) {
    if(x<10) {
        return x;
    }
    return (x%10) + sumOfDigits(x/10);
}
int main() {
    int n=1;
    int answer = fact(n);
    cout<<answer<<endl;
    cout<<sumOfDigits(12345)<<endl;
    return 0;
}