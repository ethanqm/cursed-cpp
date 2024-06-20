
// array[index], under the hood is,
// *(array+ index)
// so array[index] is identical to index [array]

#include <iostream>
using namespace std;

int main() {

	int a[3] = {0,1,2};

	for (int e : a){
		cout << e << " ";
	}
	cout << endl;

	cout << "a[1] : " << a[1] << endl;
	cout << "1[a] : " << 1[a] << endl;

	return 0;
}
