#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;



void right_max(int arr[], int n)
{
    static int i = n-1;

   if(i<n && i>-1){

        if(i==n-1){
           i--;
          right_max(arr, n);

          }

      else{

        if(arr[i]>=arr[i+1]){
               i--;
            right_max(arr, n);}

        else{
            arr[i]=arr[i+1];
            i--;
            right_max(arr, n);}

          }

   }

}


int main()
{

int n;
cin>>n;

int arr[n];

for(int i = 0; i < n; i ++)
    {
    cin>>arr[i];
    }

    right_max(arr,n);

    for(int i = 0; i < n; i ++)
    {
    cout<<arr[i]<<" ";
    }

}
