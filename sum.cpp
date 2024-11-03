#include <iostream>
using namespace std;
int addNums(int a, int b) {
    return a+b;
}
double addNums(double Num1, double Num2) {
    return Num1+Num2;
}
float addNums(float x, float y) {
    return x+y;
}
int addNums(int m, int n) {
    return m+n;
}
int addNums(int o, int p) {
    return o+p;
}
int sumOfDigits (int number) {
    int sum=0;
while(number>0) {
    sum+=number%10;
    number/=10;
}
return sum;
}

int main() {
    double sum1 = addNums(10,200);
    int sum2 =  addNums(10,20);
    float sum3 = addNums(10,200);
    int sum4 =  addNums(10,20);
    int sum5 =  addNums(10,20);
    cout<<"The sum of digits is "<<sumOfDigits(12345)<<endl;
    cout<<"The sum of double is"<<sum<<endl;
    cout<<"The sum of int is"<<sum2<<endl;
    cout<<"The sum of int is"<<sum3<<endl;
    cout<<"The sum of int is"<<sum4<<endl;
    cout<<"The sum of int is"<<sum5<<endl;

    return 0;
}