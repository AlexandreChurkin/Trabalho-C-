#include <iostream>
#include <fstream>

char menu ();
bool CadAlu ();
void TesAlu ();
bool LeiArq();

struct aluno{
	float NP1;
	float NP2;
	float NAep1;
	float NAep2;
	std::string N;
	std::string M;
	std::string SP;
	float Sb;	
	float MT;
}

typedef alunos ;

alunos aluno [100]; 
