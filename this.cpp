#include<iostream>
#include<string>
using namespace std;
class Person{
    char name[20];
    float age;
    public:
    person(char *s,float a){
        strcpy(name,s);
        age=a;
    }
    person &person::greater(person &x){
        if(x.age>=age)
        return x;
        else
        return *this;
    }
    void display(void){
        cout<<"Name: "<<name<<"\n"<<"Age: "<<age<<"\n";
    }
};
int main(){
    Person P1("John",37.50),
    P2("Ahmed",29.0),
    P3("Hebber",40.25);
    Person P=P1.greater(P3);
    cout<<"Elder persin is: \n";
    P.display();
    P=P1.greater(P2);
    cout<<"Elder person is: \n";
    P.display();
    return 0;
}