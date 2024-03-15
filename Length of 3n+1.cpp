#include <iostream>

using namespace std;


int cnt=0;

int length_3n_plus_1(int n) {

    cnt++;

    if(n==1)
        return cnt;

    if(n%2==0)
      length_3n_plus_1(n/2);
    else
      length_3n_plus_1(3*n + 1);

}

int main() {
	cout<<length_3n_plus_1(7);
	return 0;
}

