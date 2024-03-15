#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int i = 0;

void left_max(int arr[], int n)
{
   if(i<n){

        if(i==0){
         cout<<arr[i++]<<" ";
          left_max(arr, n);

          }

      else{

        if(arr[i]>=arr[i-1]){
            cout<<arr[i++]<<" ";
            left_max(arr, n);}

        else{
            arr[i]=arr[i-1];
            cout<<arr[i++]<<" ";
            left_max(arr, n);}

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

    left_max(arr,n);

}
