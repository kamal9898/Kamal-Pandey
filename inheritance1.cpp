#include<iostream>

using namespace std;

//base class

class Employee
{
    public:
    int id;
    float salary;

    Employee(int inpId)
    {
        id=inpId;
        salary =34;
    }
    Employee() {}

};

//Derived Class syntax
//Syntax
/*
class {(derived -class -name )} :{(visibility-mode)} {(base-class-name)
{
    class members/method/etc......
}}

Notes 
1. Default visibility mode is private.
2. Public  visibility mode: Public Members of the base class becomes Public members of the derived class
3. Privete  visibility mode: Public Members of the base class becomes Private members of the derived class
4. Private members are never inheritend.
*/

//Creating a programmer class derived from Employee Base clas

class Programmer :public Employee

{
public :
 int languagecode;

 Programmer(int inpId)
 {
     id = inpId;
     languagecode = 9;
 }

 void getData()
 {
     cout<<id<<endl;
 }
};
int main()
{
    Employee harry(1), rohan(2);
    cout<<harry.salary<<endl;;
    cout<<rohan.salary<<endl;

    Programmer skillF(10);

    cout<<skillF.languagecode<<endl;
    cout<<skillF.id<<endl;
    skillF.getData();

    return 0;
}