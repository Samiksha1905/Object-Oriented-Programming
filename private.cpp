#include<iostream>
using namespace std;
class Circle{
    private:
    double radius;
    public:
    void area(double r){
        radius=r;
        double area=3.14*radius*radius;
        cout<<"Area is: "<<area<<endl;

    }

};
int main(){
    Circle C1;
    C1.area(1.5);
    return 0;
}