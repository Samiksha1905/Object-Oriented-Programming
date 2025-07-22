#include<iostream>
using namespace std;
class Number{
    private:
    int value;
    public:
    Number(int v){
        value=v;
    }
    friend int addValues(Number n1,Number n2);
};
int addValues(Number n1,Number n2){
    return n1.value+n2.value;
}
int main(){
    Number num1(10);
    Number num2(20);
    int result =addValues(num1,num2);
    cout<<"Sum of values: "<<result<<endl;
    return 0;
}