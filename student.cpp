#include "student.h"

student::student(string st,string sp,float g)
{
     cout<<"welcome"<<endl;
      study_level=st;
      specialty=sp;
      GPA=g;
}
student::student(string n,int a,string ad,string na,int i, string st,string sp,float g):person(n,a,ad,na,i)
{
     cout<<"welcome"<<endl;
    study_level=st;
    specialty=sp;
    GPA=g;
}
//SET
void student::setStudy_level(string st)
{
    study_level=st;
}
void student::setSpecialty(string sp)
{
    specialty=sp;
}
void student::setGPA(float g)
{
    GPA=g;
}
//get
 string student::getStudy_level()
 {
     return study_level;
 }
string student::getSpecialty()
{
    return specialty;
}
float student::getGPA()
{
    return GPA;
}
//methods
void student::display()
{
    person::display();
    cout<<" study_level is : "<<study_level<<endl;
    cout<<" specialty is : "<<specialty<<endl;
    cout<<" GPA is : "<<GPA<<endl;
}


student::~student()
{
   // cout<<"thank you"<<endl;
}
