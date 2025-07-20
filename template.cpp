#include<iostream>
using namespace std;
template<typename T>
class Adder{
    private:
    T num1,num2;
    public:
    void setValues(T a,T b);
    T getSum();
};

template<typename T>
void Adder<T>::setValues( T a,T b){
    num1=a;
    num2=b;
}
template<typename T>
T Adder<T>::getSum(){
    return num1+num2;
}

int main(){
    Adder<int>intAdder;
    intAdder.setValues(5,15);
    cout<<"Sum(int):"<<intAdder.getSum()<<endl;

    Adder<float>floatAdder;
    floatAdder.setValues(3.2f,1.8f);
    cout<<"Sum(float):"<<floatAdder.getSum()<<endl;

    return 0;
}