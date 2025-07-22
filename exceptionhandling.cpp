#include<iostream>
using namespace std;
int main(){
    double num,deno,divide;
    cout<<"Enter num: ";
    cin>>num;
    cout<<"Enter deno: ";
    cin>>deno;
    try{
        if(deno==0)
        throw 0;
        divide=num/deno;
        cout<<num<<"/"<<deno<<"="<<divide<<endl;
    }
    catch(int num_exception){
        cout<<"Error: Cannot divide by "<<num_exception<<endl;
    }
    return 0;
}