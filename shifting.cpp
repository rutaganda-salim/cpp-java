#include<iostream>
using namespace std;
template<typename T>

T addition (T a, T b) {
    return a+b
}
template <typename T, typename W>
W addition (W a, T b) {
    return a + b;
}
int main () {
    cout<<"The sum of 10 and 20 is "<<addition<sting>("John", "Mugisha")<<endl;
}