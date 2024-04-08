#include "salaried_employee.h"

salaried_employee::salaried_employee(string n,int a,string ad,string na,int i,double sa,string jo,string Ra,float b,float d):employee(n,a,ad,na,i,sa,jo,Ra)
{
   cout<<" welcome "<<endl;
   Bonus=b;
   Deduction=d;
}
//set
 void salaried_employee::setBonus(float b)
 {

   Bonus=b;
 }
void salaried_employee::setDeduction(float d)
{
    Deduction=d;
}

//get
 float salaried_employee::getBonus()
 {
     return Bonus;
 }
float salaried_employee::getDeduction()
{
    return Deduction;
}
//methods
double salaried_employee::getTotalSalary()
{
    return (salary+Bonus)-Deduction;
}
void salaried_employee::display()
{
    employee::display();
    cout<<"Bonus id : "<<Bonus<<endl;
    cout<<"Deduction id : "<<Deduction<<endl;
}



salaried_employee::~salaried_employee()
{
   //cout<<"thank you "<<endl;
}
