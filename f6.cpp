//Largest Number in Array


#include<iostream>
using namespace std;




int LargestNum(int arr[], int n )

{
         int i;

         int max = arr[0];

         for ( i = 1; i < n; i++)
         {
                  if (arr[i] > max)
                  {
                           max = arr[i];
                  }
                  
             
         }

                    return max;
         
}
int main()
{
         int n;

         cout<<"Enter Total Number of elemnts ";

         cin>>n;

         int arr[n];

         for (int i = 0; i < n; i++)
         {
                 cin>>arr[i];
         }


         cout<<"Largest Number is "<<LargestNum(arr,n);

         return 0;
         
}