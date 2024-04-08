#include "teaching_Assistant.h"

teaching_Assistant::teaching_Assistant(string n,int a,string ad,string na,int i,double sa,string jo,string Ra,string nm,string sz):employee(n,a,ad,na,i,sa,jo,Ra)
{
    cout<<"welcome"<<endl;
     NameOfThePreparatoryMessage=nm;
        specialization=sz;
}


  //setter
       void teaching_Assistant::setNameOfThePreparatoryMessage(string nm)
       {
            NameOfThePreparatoryMessage=nm;

       }
       void teaching_Assistant::setspecialization(string sz)
       {
               specialization=sz;
       }

       //getter
       string teaching_Assistant::getNameOfThePreparatoryMessage()
       {
           return NameOfThePreparatoryMessage;
       }
        string teaching_Assistant::getspecialization()
        {
            return specialization;
        }

        //methods
        void teaching_Assistant::display()
        {
             employee::display();
    cout<<"NameOfThePreparatoryMessage is : "<<NameOfThePreparatoryMessage<<endl;
    cout<<"specialization is : "<<specialization<<endl;
        }
        double teaching_Assistant::getTotalSalary()
        {
            return salary;
        }

teaching_Assistant::~teaching_Assistant()
{
    //cout<<"thank you "<<endl;
}
