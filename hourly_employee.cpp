#include "hourly_employee.h"

hourly_employee::hourly_employee(string n,int a,string ad,string na,int i,double sa,string jo,string Ra,int w,float h):employee(n,a,ad,na,i,sa,jo,Ra)
{
    cout<<" welcome "<<endl;
    working_hours =w;
     houre_rate=h;
}
//set
    void hourly_employee::setWorking_hours(int w)
    {
      working_hours =w;
    }
    void hourly_employee::setHoure_rate(float h)
    {
      houre_rate=h;
    }
    //get
    int hourly_employee::getWorking_hours()
    {
        return working_hours;
    }
    float hourly_employee::getHoure_rate()
    {
        return houre_rate;
    }
    //methods
    double hourly_employee::getTotalSalary()
    {
    return salary+(working_hours*houre_rate);
    }


    void hourly_employee::display()
    {
    employee::display();
    cout<<"working_hours is : "<<working_hours<<endl;
    cout<<"houre_rate is : "<<houre_rate<<endl;
    }








hourly_employee::~hourly_employee()
{
    //cout<<" thank you"<<endl;
}
