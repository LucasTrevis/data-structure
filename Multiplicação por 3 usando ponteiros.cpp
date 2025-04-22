#include <iostream>
using namespace std;

void Multiplicar(int* ptr){
	*ptr = *ptr * 3;
}


int main(){
	int num = 5;
	cout << "Valor original: " << num << endl;
	Multiplicar(&num);
	cout << "Valor depois da alteração: " << num << endl;
	return 0;
}