// Reeverse number 


#include<iostream>
using namespace std;

int main()
{
         int n ,revNum =0, remainder;

         cout<<"Enter a number : ";

         cin>>n;

         while (n!=0)
         {
                 remainder = n%10;
                 revNum = revNum *10 + remainder;

                 n /= 10;
         }

         cout<<"Reversed Number = "<<revNum;

         return 0;
         
}