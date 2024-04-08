#include "employee.h"

employee::employee()
{
    cout<<"welcome"<<endl;
}
employee::employee(string n,int a,string ad,string na,int i,double sa,string jo,string Ra):person(n,a,ad,na,i)
{
    salary=sa;
    job=jo;
    Rank =Ra;
}
  //set
    void employee::setSalary(double sa)
    {
        salary=sa;
    }
    void employee::setJob(string jo)
    {
        job=jo;
    }
    void employee::setRank(string Ra)
    {
         Rank =Ra;
    }
    //get
    double employee::getSalary()
    {
        return salary;
    }
    string employee::getJob()
    {
        return job;
    }
    string employee::getRank()
    {
        return Rank;
    }
    void employee::display()
   {
      person::display();
      cout<<" salary is : "<<salary<<endl;
      cout<<" job is : "<<job<<endl;
      cout<<" Rank is : "<<Rank<<endl;
   }


employee::~employee()
{
    //dtor
}

