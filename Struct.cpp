#include <stdio.h>


int main(){

	struct Pessoa {

		char *Nome;
		char *Profissao;
		bool Formado;
		int Idade;
		float Peso;

	};


	struct Pessoa carol;

	carol.Nome = "Ana Carolina Cedro";
	carol.Profissao = "Programadora";
	carol.Idade = 27;
	carol.Peso = 75.0;


	printf("\nNome: %s",carol.Nome);
	printf("\nProfissao: %s",carol.Profissao);
	printf("\nIdade: %i",carol.Idade);
	printf("\nPeso:%.1f",carol.Peso);



	return 0;
}