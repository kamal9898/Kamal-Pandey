#include<iostream>
using namespace std;




void swap(int *a, int *b)
{
         int temp = *a;

         *a = *b;

         *b = temp;


}

void sorting(int arr[] , int n)
{
         int i , j , min_idx;


         for(i =0 ; i< n-1; i++)
         {
                  min_idx = i;

                  for ( j = i+1; j < n; j++)
                  
                          if (arr[j] < arr[min_idx])

                          min_idx = j;

                          swap(&arr[min_idx], &arr[i]);
                          
                  
                  
         }

        
}



void printArray(int arr[] , int size)
{
         int i;

         for ( i = 0; i < size; i++)
         {
                 cout<<arr[i]<<" ";
         }
         
}

int main()
{


         int n;
         cout<<" Enter the Total number  is :  ";

         cin>>n;

        int  arr[n];

         for (int  i = 0; i < n; i++)
         {
                 cin>>arr[i];
         }
         

         sorting(arr,n);
         cout<<"after Sorting in Assendin Order : ";
         printArray(arr,n);

}