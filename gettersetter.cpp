#include<iostream>
using namespace std;
class Person{
    private:
    int health;
    public:
    char level;

    void print(){
        cout<<level<<endl;
    }
    int getHealth(){
        return health;
    }
    int getlevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }
    void setLevel(char ch){
        level=ch;
    }
};

int main(){
    Person p1;
    cout<<"Health is "<<p1.getHealth()<<endl;
    p1.level='A';
    p1.setHealth(70);

    cout<<"Health is: "<<p1.getHealth()<<endl;
    cout<<"Level is: "<<p1.level<<endl;

    return 0;
}