#include <iostream>
using namespace std;

int printTenth(int n) {
    if (n < 10) {
        return 0;
    }
    printTenth(n - 10);
    cout << n - (n % 10) << " "<<endl;
    return n;
};
int main() {
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    printTenth(n);
}