#include<iostream>
using namespace std;

class Student{
    private:
    int health;
    public:
    char level;

    Student(){
        cout<<"Simple constructor called"<<endl;
    }
    //parametrized constructor
    Student(int health){
        this->health=health;
    }
    Student(int health,char level){
        this->level=level;
        this->health=health;
    }
 //copy constructor
    Student(Student& temp){
        cout<<"Copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    void print(){
        cout<<"Health: "<<this->health<<endl;
        cout<<"level: "<<this->level<<endl;
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
    Student S1(50,'B');
    S1.print();
    
//copy constructor
    Student S2(S1);
    S2.print();
    return 0;
}
