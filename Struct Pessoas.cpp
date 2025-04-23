#include <iomanip>
#include <iostream>
using namespace std;

struct Pessoa{
	string nome;
	int idade;
};

void AlterarPessoa(Pessoa* ptr){
	ptr -> nome = "Novo Nome";
	ptr -> idade = 30;
}

int main(){
	Pessoa pessoa;
	pessoa.idade = 20;
	pessoa.nome = "LTP";
	cout << "Pessoa Base: " << pessoa.nome << endl;
	cout << "Pessoa.idade Base: " << pessoa.idade << endl;
	AlterarPessoa(&pessoa);
	cout << "Pessoa ADicionada: " << pessoa.nome << endl;
	cout << "Pessoa.idade ADicionada: " << pessoa.idade << endl;
	return 0;
}