#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int i = 0, sum = 0;

double Array_average(int arr[], int n)
{
    if(i==n)
        return (double)sum/n;

    sum += arr[i++] ;

    Array_average(arr, n);

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

    cout<<Array_average(arr,n);

}
