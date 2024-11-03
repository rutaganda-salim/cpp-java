
#include <iostream>
using namespace std;
#define PI 3.14
const double PI2=3.14;

double area(int radius) {
    return PI*radius*radius;
}

int main() {
    int radius;
    cout<<"Enter radius"<<endl;
    cin>>radius;
    cout<<"Area of circle is "<<area(radius)<<endl;
    return 0;
}