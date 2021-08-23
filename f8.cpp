#include<iostream>

using namespace std;

int main()
{
         int n , i , j, temp;

         int arr[n];

         cout<<"Eneter the size of Element is :";
         cin>>n;

         for ( i = 0; i < n; i++)
         {
                  cin>>arr[i];
         }

         for ( i = 0; i < n; i++)
         {
                  for (j= i+1; j <n; j++)
                  {
                           if(arr[j] < arr[i])
                           {
                                    temp = arr[i];
                                    arr[i]=arr[j];

                                    arr[j]= temp;
                           }
                  }
                  
         }


         cout<<"Element of sorted aArray ";

         for ( i = 0; i < n; i++)
         {
                 cout<<arr[i]<<endl;
         }
         
         

return 0;
         



}
