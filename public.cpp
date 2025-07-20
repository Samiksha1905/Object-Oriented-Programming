#include<iostream>
using namespace std;
class Circle{
    public:
    double radius;
    double area(){
    return 3.14*radius*radius;
    }
};
int main(){
    Circle C1;
    C1.radius=5.5;
    cout<<"Radius is: "<<C1.radius<<endl;
    cout<<"Area is: "<<C1.area()<<endl;
}