#include<iostream>
using namespace std;
class Base{
    public:
    void display(){
        cout<<"\nDisplay base:";

    }
    virtual void show(){
        cout<<"\nShow base: ";

    }
};
class Derived:public Base{
    public:
    void display(){
        cout<<"\nDisplay derived: ";

    }
    void show(){
        cout<<"\nshow derived: ";
    }
};
int main(){
    Base B;
    Derived D;
    Base *bptr;
    cout<<"\nbptr points to Base\n";
    bptr=&B;
    bptr->display();
    bptr->show();
    cout<<"\n\n bptr points to Derived\n";
    bptr=&D;
    bptr->display();
    bptr->show();
    return 0;
}