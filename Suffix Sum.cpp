#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;



int  Suffix_Sum(int arr[], int n, int x)
{
    x--;

   if(x<0)
   return 0;

   return arr[n-1]+Suffix_Sum(arr,n-1,x);

}


int main()
{

int n,x;
cin>>n>>x;

int arr[n];

for(int i = 0; i < n; i ++)
    {
    cin>>arr[i];
    }

    cout<<Suffix_Sum(arr,n,x);

}
