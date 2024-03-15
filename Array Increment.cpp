#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int i = 0;

void array_increment(int arr[], int n)
{
   if(i<n){
    arr[i]+=i ;
    cout<<arr[i++]<<" ";
    array_increment(arr, n);
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

    array_increment(arr,n);

}
