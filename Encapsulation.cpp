#include<iostream>
using namespace std;
class Student{
    private:
    string student_Name;
    int student_Id;
    int enrollment_year;

    public:
    string getstudent_Name(){
        return student_Name;
    }
     void setstudent_Name(string student_Name){
        this->student_Name=student_Name;
     }
     int getstudent_Id(){
        return student_Id;
     }
     void setstudent_Id(int student_Id){
        this->student_Id=student_Id;
     }
     int getenrollment_year(){
      return enrollment_year;
     }
     int setenrollment_year(int enrollment_year){
      this->enrollment_year=enrollment_year;
     }
};

int main(){
Student S1;
S1.setstudent_Name("Alice");
S1.setstudent_Id(101);
S1.setenrollment_year(2023);

cout<<"Student name: "<<S1.getstudent_Name()<<endl;
cout<<"Student Id: "<<S1.getstudent_Id()<<endl;
cout<<"Student enrollment year: "<<S1.getenrollment_year()<<endl;
return 0;
}