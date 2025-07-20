#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream outfile("example.txt");
    if(outfile.is_open()){
        outfile<<"Hello, world!"<<endl;
        outfile<<"This is a test."<<endl;
    
    outfile.close();
    cout<<"Data written to file successfully."<<endl;
}
else{
    cout<<"Unable to open file for writing."<<endl;
}
return 0;
}