#include <iostream>

using namespace std;

int i=0;

 int arr_max(int arr[], int len) {

static int maxx=arr[0];

i++;

if(i==len)
    return maxx;

if(arr[i]>=maxx)
    maxx=arr[i];

arr_max(arr, len);

}

int main() {

    int len;
    cin>>len;

    int arr[len]{};

    for(int i =0; i < len; i++)
    {
        cin>>arr[i];
    }

	cout<<arr_max(arr, len);

	return 0;
}

