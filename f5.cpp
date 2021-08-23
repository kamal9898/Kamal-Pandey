
// write the programm to find averagev of numbers using arraylist
#include<iostream>

using namespace std;

int main()
{
         int n, i;

         float num[100] , sum =0.0, average;

         cout<<"Enter the numbers :";
         cin>>n;

        cout<<"Enter "<< n <<" Array Elements :"<<endl;

        for ( i = 0; i < n; i++)
        {
                cin>>num[i];
        }

        for ( i = 0; i < n; i++)
        {
               sum += num[i];
        }
        
        average = sum/n;

        cout<<"Average = "<<average;


     return 0;       
         


}