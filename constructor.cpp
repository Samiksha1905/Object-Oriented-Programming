#include<iostream>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;
    Hero(){
        cout<<"Constructor called"<<endl;
    }
    Hero(int health){
        cout<<"this->"<<this<<endl;
        this->health = health;
    }
    Hero(int health,char level){
        this->level=level;
        this->health=health;
    }
    void print(){
        cout<<level<<endl;
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
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
    cout<<"hi"<<endl;
    //object created statically
    Hero h1;
   // cout<<"Address of h1"<<&h1<<endl;
    //dynamically
    Hero *h=new Hero();
    cout<<"Hello"<<endl;
    Hero temp(22,'B');
    temp.print();
    
   // cout<<"h1 health is: "<<h1.getHealth()<<endl;
 //   h1.setHealth(70);
  //  h1.level='A';
   // cout<<"level is: "<<h1.level<<endl;
    return 0;
}