#include <iostream>
using namespace std;
struct Rectangle {
    private:
        int length;
        int width;
    public:
        Rectangle(){}
        Rectangle (int w, int l) {
            width=w;
            length=l;
        };
        int area() {
            return width*length;
        }
        void SetWidth(int w) {
            width=w;
        };
        int getWidth() {
            return width;
        }
        void setBoth(int w, int l){
            width=w;
            length=l;
    };
   
};

 int main() {
        Rectangle rect(10,20);
        cout<<"Reactangle area is"<<rect.area()<<endl;
        Rectangle rectb;
        rect2.setBoth(10,20);
        cout<<"Reactangle area is"<<rectb.area()<<endl;
        return 0;
    }