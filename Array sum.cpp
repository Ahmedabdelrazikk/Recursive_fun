#include <iostream>

using namespace std;

int i=0;

 int arr_sum(int arr[], int len) {

i++;
if(len-i == -1)
    return 0;
else
    return arr[len-i]+ arr_sum(arr, len);

}

int main() {

    int len;
    cin>>len;

    int arr[len]{};

    for(int i =0; i < len; i++)
    {
        cin>>arr[i];
    }

	cout<<arr_sum(arr, len);

	return 0;
}

