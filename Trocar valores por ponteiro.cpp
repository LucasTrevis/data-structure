#include <iostream>
using namespace std;

void Trocar(int* ptr1,int* ptr2){
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main() {
	int a = 5;
	int b = 10;
	Trocar(&a, &b);
	cout << a << endl << b << endl;
    return 0;
}
