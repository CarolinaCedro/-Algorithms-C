#include <stdio.h>


int main(){
	
	
	
	struct Pessoa {
		
		char *Nome;
		char *Profissao;
		bool Formado;
		int idade;
		float peso;
		
	};
	
	
	struct Pessoa carol;
	
	carol.idade = 27;
	carol.Nome = " Ana Carolina";
	
	
	printf("%i",carol.idade);
	printf("%s",carol.Nome);
	
	
	
	return 0;
}
