#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;

    if(n2==0){
        cerr<<"Error:Division by zero!"<<endl;
        return 1;
    }
    cout<<"Result:"<<n1/n2<<endl;
    return 0;
}