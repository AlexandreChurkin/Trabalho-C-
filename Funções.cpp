#include "Header.h"

char 	menu (){
	char escolha = ' ';
	std::cout << "Selecione:\n";
	std::cout << "\n 1 - Cadastro";
    std::cout << "\n 2 - Leitura";
    std::cout << "\n 3 - Finalizar processo \n";
	std::cin >> escolha;
	system("cls");
	return escolha;
}
bool CadAlu(alunos aluno){ 
	std:: ofstream arquivo;
		arquivo.open("Trab.txt", std::fstream::app);
		arquivo << aluno.N << ";" ;
		arquivo << aluno.M << ";" ;
		arquivo << aluno.NAep1 << ";" ;
		arquivo << aluno.NAep2 << ";" ;
		arquivo << aluno.NP1 << ";" ;
		arquivo << aluno.NP2 << ";" ;
		arquivo << aluno.Sb << ";" ;
		arquivo << aluno.SP << ";" ;
		
		arquivo.close ();
		return true;
	}
		
bool LeiArq(){
		std::ifstream arquivo;
		arquivo.open("trab.txt");

		std:: string linha;
		
		int indexalunos = 0;
		
		while (std::getline(arquivo, linha)){
			int coluna = 0;
			int controleColuna = 0;
			std:: string conteudoLinha = "";
			
			
			for(int i = 0; i <= linha.size(); i++){
				
				if(coluna == 1 && controleColuna == 0) {
					
					aluno[indexalunos].N = conteudoLinha;
					conteudoLinha = "";
					controleColuna = 1;
					
				}
				
				else if(coluna == 2 && controleColuna == 1){
					
					aluno[indexalunos].M = conteudoLinha;
					controleColuna = 2;
				}

				if(linha[i] == ';'){
					coluna++;
					continue;
				}
				
			}
			indexalunos++;
		}
		arquivo.close();
	
	for (int i = 0; i < 100; i++) {
		std::cout << "Aluno n " << i+1 << "\n";
		std::cout << "Nome: " << aluno[i].N << "\n";
		std::cout << "Matricula: " << aluno[i].M << "\n";
	}
}


void TesAlu (){
	alunos Ateste;
	Ateste.N = "Alexandre";
	Ateste.M = "0305";
	Ateste.NAep1 = 1.4;
	Ateste.NAep2 = 5.0;
	Ateste.NP1 = 1.3;
	Ateste.NP2 = 6.5;
	Ateste.MT = 0;
	Ateste.Sb = 0;
	Ateste.SP = "??";
	
	
	if (CadAlu (Ateste)) {
		std::cout << "aluno cadastrado\n";
	} else {
		std::cout << "erro de cadastro do aluno \n";
	}
	
	
}



