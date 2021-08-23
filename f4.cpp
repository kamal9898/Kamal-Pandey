//swap a program

#include<iostream>

using namespace std;

int main()
{
         int a, b ,temp;

      cout<<"Enter the first number:";
      cin>>a;

       cout<<"Enter the second number:";
      cin>>b;

       cout<<"Before swapping."<<endl;
         cout<<"First Number="<<a<<endl;
         cout<<"Second Number="<<b<<endl;


         temp = a;
         a=b;
         b= temp;


         cout<<"After swapping."<<endl;
         cout<<"First Number="<<a<<endl;
         cout<<"Second Number="<<b<<endl;

         cout<<"\n\n\n";

         return 0;

}