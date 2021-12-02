#include "Funções.cpp"

int main () {
	
	char opcao = ' ';
	do {
	   opcao = menu();	
	   switch (opcao) {
	   	
	   		case '1':
	   			TesAlu();
	   		break;
	   		
	   		case '2':
	   			LeiArq();
	   		break;
	   		
	   		case '3':
	   			std::cout << "Finalizando...\n";
	   		break;
	   		
	   		default:
	   			std::cout << " Tente Novamente!\n";
	   }
	} while(opcao != 'F');	
  }
