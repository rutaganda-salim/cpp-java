#include<iostream>
using namespace std;
namespace userDefined{
    int x=10;
    int cout() {
        return x;
    }
}

int myGlobal = 21;
int cout() {
    return myGlobal*myGlobal;
}
int main() {
 int cout = 10;

 std::cout<<"The local variable cout in main is "<<cout<<std::endl;
 std::cout<<"The variable in userDefined namespace is "<<userDefined::x<<std::endl;
 std::cout<<"The output of cout() in userDefined is "<<userDefined::cout()<<std::endl;
 std::cout<<"the value of myGlobal is "<<myGlobal<<std::endl;
 std::cout<<"The output of global cout is "<<::cout()<<std::endl;
}