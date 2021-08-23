// Calculator 


#include<iostream>
using namespace std;

int main()
{
         int n1,n2;
         char op;

         cout<<"Enter first number"<<endl;

         cin>>n1;
         cout<<"Enter Second Number"<<endl;
         cin>>n2;

         cout<<"Enter Operation:";

         cin>>op;

         switch(op)
         {
                  case '+': 
                  cout<<n1+n2<<endl;
                  break;

                   case '-': 
                  cout<<n1-n2<<endl;
                   break;

                   case '*': 
                  cout<<n1*n2<<endl;
                   break;

                   case '/': 
                  cout<<n1/n2<<endl;
                   break;

                   default:
                   cout<<"Operator not found !"<<endl;
         }

         return 0;
}