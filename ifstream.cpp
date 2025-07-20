#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream inFile("example.txt");
    if(inFile.is_open()){
        string line;
        while(getline(inFile,line)){
            cout<<line<<endl;
        }
        inFile.close();
    }
    else{
        cout<<"Unable to open file for reading."<<endl;
    }
    return 0;
}