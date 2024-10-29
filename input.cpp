#include<iostream>
#include<string>
using namespace std;
int main() {
    string name;
    int y1,y2,y3,y4;
    cout<<"Enter your name: "<<endl;
    getline(cin,name);
    cout<<"The name entered is  "<<name<<endl;
    cout<<"Enter four memorable years: "<<endl;
    // cin>>y1;
    // cin>>y2;
    // cin>>y3;
    // cin>>y4;
    cin>>y1>>y2>>y3>>y4;
    cout<<"You had good success in "<<y1<<", "<<y2<<", "<<y3<<" and "<<y4<<endl;
    return 0;
}