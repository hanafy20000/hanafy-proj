#include "person.h"

person::person()
{
   cout<<"welcome"<<endl;
}
person::person( string n,int a,string ad,string na,int i):name(n),age(a),address(ad),nationality(na),id(i)
{

}
//setter
    void person::setName(string n)
    {
      name=n;
    }
    void person::setAge(int a)
    {
     age=a;
    }
    void person::setAddress(string ad)
    {
        address=ad;
    }
    void person::setNationality(string na)
    {
        nationality=na;
    }
    void person::setId(int i)
    {
       id=i;
    }
   //getter

   string person::getName()
   {
       return name;
   }
    int person::getAge()
   {
       return age;
   }

    string person::getAddress()
   {
       return address;
   }
    string person::getNationality()
   {
       return nationality;
   }
    int person:: getId()
   {
       return id;
   }

   //methods
    void person::display()
    {
        cout<<" name is : "<<name<<endl;
        cout<<" age is : "<<age<<endl;
        cout<<" address is : "<<address<<endl;
        cout<<" nationality is : "<<nationality<<endl;
        cout<<" id is : "<<id<<endl;
    }







person::~person()
{
   cout<<"thank you"<<endl;
}
