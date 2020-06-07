#include<stdio.h>
#include<stdlib.h>
#include <windows.h>

struct lado{
	int cores[3][3];
	int id;
};

int y,x = 0,ja = 0;
void printa(int n);
int auxPrinta = 0;
struct lado amarelo,branco,azul,verde,vermelho,laranja;
void entraCores(int cores[][3]);
void imprimeLado(struct lado lado);
void mexe(char i[]);
void imprimeCubo();
void fazCruz();
void fazF2L();
void fazCruzDeCima();
void fazOll();
void fazLaterais();
void fazPll();
void preenche();
void resolve();
void comoUsar();

main(){
	int opcao;		
	system("COLOR 80");
	x = 7;
	y =	1;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n                                                                                                                                       \n                                                                                                                                       \n                                                                                                                                       \n                                                                                                                                       \n                                                                                                                                       \n",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);
	printf("   ____________ \t\t\t\t  _____  _____  ____  _____  _______\t\t\t\t\t __ _______\t       \n");
	printf("  /___/___/___/%c\t\t\t\t %c      %c      %c     %c          %c\t\t\t\t\t/_//   ____\\           \n",179,179,179,179,179,179);
	printf(" /___/___/___/%c%c\t\t\t\t %c      %c      %c     %c          %c\t\t\t\t\t  /   / ___            \n",179,179,179,179,179,179,179);
	printf("/___/___/___/%c%c%c\t\t\t\t %c      %c___   %c___  %c___       %c\t\t\t\t\t /   //___/            \n",179,179,179,179,179,179,179,179);
	printf("%c   %c   %c   %c%c/%c\t\t\t\t %c      %c      %c     %c          %c\t\t\t\t\t/   /____              \n",179,179,179,179,179,179,179,179,179,179,179);
	printf("%c___%c___%c___%c/%c%c\t\t\t\t %c      %c      %c     %c          %c\t\t\t\t\t\\__//___/              \n",179,179,179,179,179,179,179,179,179,179,179);
	printf("%c   %c   %c   %c%c/%c\t\t\t\t %c_____ %c_____ %c     %c_____     %c\t\t                                       \n",179,179,179,179,179,179,179,179,179,179,179);
	printf("%c___%c___%c___%c/%c/ \t\t\t\t                                     (EXPOTEC 2016)                                    \n",179,179,179,179,179,179,179,179,179,179);
	printf("%c   %c   %c   %c%c/                                                                                                                        \n",179,179,179,179,179);
	printf("%c___%c___%c___%c/                                                                                                                         \n                                                                                                                                       \n                                                                                                                                       \n                                                                                                                                       \n                                                                                                                                       \n                                                                                                                                       \n                                                                                                                                       \n                                                                                                                                       \n",179,179,179,179);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);
	y = 0;
	x = 8;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	//Menu
	printf("\n\n\n\n\n\n\n\nPrecione qualquer tecla para continuar...");
	getch();
	system("cls");
	printf("-------------------------------- ");
	y = 4;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf("RESOLVENDO O CUBO MAGICO");
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf(" ----------------------------------\n\n\n");
	printf("[1] Como usar\n[2] Entrar com as cores\n[3] Resolver\n[4] Embaralhar\n[5] Sair\n");
	scanf("%d",&opcao);
	system("cls");
	while(opcao != 5){
		if(opcao == 2){
			ja =1;
			preenche();
		}
		if(opcao == 1){
			comoUsar();
		}
		if(opcao == 3){
			
			if(ja == 1){
				auxPrinta = 1;
				resolve();
			}
			else{
				x = 7;
				y = 4;
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
				printf("                                     \n     Entre com as cores primeiro     \n                                     ");
			}
			x = 8;
			y = 0;
			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
			printf("\n\n\n\n\n\n\nPrecione qualquer tecla para voltar...");
			getch();
		}
		if(opcao == 4){
			system("cls");
			if(ja == 1){
				char i[3];
				printf("-------------------------------- ");
				y = 4;
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
				printf("RESOLVENDO O CUBO MAGICO");
				y = 0;
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
				printf(" ----------------------------------\n\n\n");
				printf("Para embaralhar o cubo basta digitar os movimentos que deseja, caso entre com [n] \nsera interrompido o embaralhamento.\n\n");
				scanf("%s",&i);
				while(strcmp(i,"n")!=0){	
					mexe(i);
					imprimeCubo();
					scanf("%s",&i);
					system("cls");
					printf("-------------------------------- ");
					y = 4;
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
					printf("RESOLVENDO O CUBO MAGICO");
					y = 0;
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
					printf(" ----------------------------------\n\n\n");
					printf("Para embaralhar o cubo basta digitar os movimentos que deseja, caso entre com [n] \nsera interrompido o embaralhamento.\n\n");						
				}
				auxPrinta = 1;
			}
			else{
				x = 7;
				y = 4;
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
				printf("                                     \n     Entre com as cores primeiro     \n                                     ");
				x = 8;
				y = 0;
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
				printf("\n\n\n\n\n\n\nPrecione qualquer tecla para voltar...");
				getch();
			}
		}
		system("cls");
		printf("-------------------------------- ");
		y = 4;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
		printf("RESOLVENDO O CUBO MAGICO");
		y = 0;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
		printf(" ----------------------------------\n\n\n");
		printf("[1] Como usar\n[2] Entrar com as cores\n[3] Resolver\n[4] Embaralhar\n[5] Sair\n");
		(ja == 1)?imprimeCubo():1;
		scanf("%d",&opcao);
		system("cls");
	}	
}

void comoUsar(){
	printf("-------------------------------- ");
	y = 4;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf("RESOLVENDO O CUBO MAGICO");
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf(" ----------------------------------\n\n\n");
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf("Para resolver entre com as cores do cubo e em seguida escolha RESOLVER. Para entrar com as \ncores siga as seguintes regras:");
	printf("\n\n[1]");
	y = 7;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf(" Branco\n");
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf("[2] ");
	y = 10;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);	
	printf("Verde\n");
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);	
	printf("[3] ");
	y = 4;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);	
	printf("Vermelho\n");	
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf("[4]");
	y = 6;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf(" Laranja\n");	
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);	
	printf("[5]");
	y = 1;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf(" Azul\n");
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);	
	printf("[6]");
	y = 14;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);	
	printf(" Amarelo");
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);	
	printf("\n\nApos entrar com as cores e selecionar RESOLVER, o programa ira gerar codigos como R L1' etc.\nCada letra representa um movimento, ao seguir esses movimentos seu cubo ficara pronto. ");
	printf("\n\n\n\n\n\n\n\nPrecione qualquer tecla para voltar...");
	getch();
}
void resolve(){
	system("cls");
	y = 7;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf("__________________________ RESOLUCAO __________________________\n\n");
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	imprimeCubo();
	fazCruz();
	y = 7;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf("\n\nA partir daqui a cruz deve estar pronta, caso nao esteja voce fez algo errado.\n\n");
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	fazF2L();
	y = 7;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf("\n\nA partir daqui a primeira e segunda camadas devem estar prontas, caso nao esteja \nvoce fez algo errado.\n\n");
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	fazCruzDeCima();
	y = 7;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf("\n\nA partir daqui a primeira e a segunda camadas devem estar prontas, e deve ter uma \ncruz amarela em cima, caso nao esteja voce fez algo errado.\n\n");
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	fazOll();
	y = 7;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf("\n\nA partir daqui a primeira e a segunda camadas devem estar prontas, e todo o lado \namarelo tambem, caso nao esteja voce fez algo errado.\n\n");
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	fazLaterais();
	y = 7;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf("\n\nA partir daqui a primeira e a segunda camadas devem estar prontas, e alem disso o \nlado amarelo e todas as quinas devem estar certas, caso nao esteja voce fez algo errado.\n\n");
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	fazPll();
	y = 7;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf("\n\nPARABENS !!! Voce completou o cubo.");
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	imprimeCubo();
}

void preenche(){
	//Branco
	y = 7;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf("\nVire o centro branco para cima, o centro verde para tras e entre com\nas cores.\n\nLado de centro");
	y = 7;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf(" BRANCO.\n\n");
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	branco.id = 1;
	entraCores(branco.cores);
	printf("--------------------------------------------------------------");
	system("cls");
	//Verde
	y = 7;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf("\nVire o centro branco para frente, o centro verde para cima e entre com\nas cores. \n\nLado de centro");
	y = 10;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf(" VERDE.\n\n");
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	verde.id = 2;
	entraCores(verde.cores);
	printf("--------------------------------------------------------------");
	system("cls");
	//Amarelo
	y = 7;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf("\nVire o centro branco para baixo, o centro verde para frente e entre com\nas cores.\n\nLado de centro");
	y = 14;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf(" AMARELO.\n\n");
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	amarelo.id = 6;
	entraCores(amarelo.cores);
	printf("--------------------------------------------------------------");
	system("cls");
	//Azul
	y = 7;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf("\nVire o centro branco para frente, o centro verde para baixo e entre com\nas cores.\n\nLado de centro");
	y = 1;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf(" AZUL\n\n");
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	azul.id = 5;
	entraCores(azul.cores);
	printf("--------------------------------------------------------------");
	system("cls");
	//Vermelho
	y = 7;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf("\nVire o centro branco para frente, o centro verde para direita e entre com\nas cores.\n\nLado de centro");
	y = 4;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf(" VERMELHO\n\n");
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	vermelho.id = 3;
	entraCores(vermelho.cores);
	printf("--------------------------------------------------------------");
	system("cls");
	//Laranja
	y = 7;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf("\nVire o centro branco para frente, o centro verde para esquerda e entre com\nas cores.\n\nLado de centro ");
	y = 6;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf("LARANJA\n\n");
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	laranja.id = 4;
	entraCores(laranja.cores);
	printf("--------------------------------------------------------------\n");
	system("cls");
	
}

void fazPll(){
	if(((vermelho.cores[0][1] + laranja.cores[0][1]) == 7) && ((azul.cores[0][1] + verde.cores[0][1]) == 7) && verde.cores[0][0] == azul.cores[0][1]){
		mexe("R");		
		mexe("L");
		mexe("U2");
		mexe("R'");
		mexe("L'");
		mexe("F'");
		mexe("B'");
		mexe("U2");
		mexe("F");
		mexe("B");
	}
	if(((verde.cores[0][0] == laranja.cores[0][1])&&(azul.cores[0][0] == vermelho.cores[0][1])) || ((verde.cores[0][0] == vermelho.cores[0][1])&&(azul.cores[0][0] == laranja.cores[0][1]))){
		if(verde.cores[0][0] == laranja.cores[0][1]){
			mexe("U");
		}
		mexe("R2");		
		mexe("U");
		mexe("R2");
		mexe("U'");
		mexe("R2");
		mexe("F2");
		mexe("R2");
		mexe("U'");
		mexe("F2");
		mexe("U");
		mexe("R2");
		mexe("F2");
	}
	if(vermelho.cores[0][0] == vermelho.cores[0][1] && vermelho.cores[0][0] == vermelho.cores[0][2] && verde.cores[0][0] != verde.cores[0][1]){
		mexe("U'");
	}
	if(azul.cores[0][0] == azul.cores[0][1] && azul.cores[0][0] == azul.cores[0][2] && verde.cores[0][0] != verde.cores[0][1]){
		mexe("U2");
	}
	if(laranja.cores[0][0] == laranja.cores[0][1] && laranja.cores[0][0] == laranja.cores[0][2] && verde.cores[0][0] != verde.cores[0][1]){
		mexe("U");
	}
	if(verde.cores[0][0] == verde.cores[0][1] && verde.cores[0][0] == verde.cores[0][2] && vermelho.cores[0][0] != vermelho.cores[0][1]){
		if(laranja.cores[0][0] + laranja.cores[0][1] == 7){
			mexe("L2");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("L'");
		}
		else{
			mexe("R2");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R");
		}
	}
	while(verde.cores[0][1] != verde.cores[1][1]){
		mexe("U");
	}
}

void fazLaterais(){
	while(verde.cores[0][0] != verde.cores[0][2] || vermelho.cores[0][0] != vermelho.cores[0][2] || azul.cores[0][0] != azul.cores[0][2] || laranja.cores[0][0] != laranja.cores[0][2]){
			if(verde.cores[0][0] == verde.cores[0][2]){
				mexe("U'");
			}
			if(vermelho.cores[0][0] == vermelho.cores[0][2]){
				mexe("U2");
			}
			if(azul.cores[0][0] == azul.cores[0][2]){
				mexe("U");
			}
			mexe("R2");
			mexe("B2");
			mexe("R");
			mexe("F");
			mexe("R'");
			mexe("B2");
			mexe("R");
			mexe("F'");
			mexe("R");
	}
}

void fazOll(){
	int aux = 0;
	aux += (amarelo.cores[0][0] == 6)?amarelo.cores[0][0]:0;
	aux += (amarelo.cores[0][2] == 6)?amarelo.cores[0][2]:0;
	aux += (amarelo.cores[2][0] == 6)?amarelo.cores[2][0]:0;
	aux += (amarelo.cores[2][2] == 6)?amarelo.cores[2][2]:0;
	
	while(aux != 24){
		if(aux == 0){
			while(vermelho.cores[0][2] != 6){
				mexe("U");
			}	
		}
		if(aux == 6){
			while(amarelo.cores[2][0] != 6){
				mexe("U");
			}
		}
		if(aux == 12){
			while(verde.cores[0][0] != 6){
				mexe("U");
			}
		}
		mexe("R");
		mexe("U");
		mexe("R'");
		mexe("U");
		mexe("R");
		mexe("U2");
		mexe("R'");
		
		aux = 0;
		
		aux += (amarelo.cores[0][0] == 6)?amarelo.cores[0][0]:0;
		aux += (amarelo.cores[0][2] == 6)?amarelo.cores[0][2]:0;
		aux += (amarelo.cores[2][0] == 6)?amarelo.cores[2][0]:0;
		aux += (amarelo.cores[2][2] == 6)?amarelo.cores[2][2]:0;		
	}
}

void fazCruzDeCima(){
	if(amarelo.cores[0][1] == 6 && amarelo.cores[2][1] == 6 && amarelo.cores[1][0] != 6 && amarelo.cores[1][2] != 6){
		mexe("U");
		mexe("F");
		mexe("R");
		mexe("U");
		mexe("R'");
		mexe("U'");
		mexe("F'");
	}
	if(amarelo.cores[0][1] != 6 && amarelo.cores[2][1] != 6 && amarelo.cores[1][0] == 6 && amarelo.cores[1][2] == 6){
		mexe("F");
		mexe("R");
		mexe("U");
		mexe("R'");
		mexe("U'");
		mexe("F'");
	}
	if(amarelo.cores[0][1] != 6 && amarelo.cores[2][1] != 6 && amarelo.cores[1][0] != 6 && amarelo.cores[1][2] != 6){
		mexe("R");
		mexe("U");
		mexe("B'");
		mexe("R");
		mexe("B");
		mexe("R2");
		mexe("U'");
		mexe("R'");
		mexe("F");
		mexe("R");
		mexe("F'");
	}
	if(amarelo.cores[0][1] == 6 && amarelo.cores[2][1] != 6 && amarelo.cores[1][0] != 6 && amarelo.cores[1][2] == 6){
		mexe("U'");
		mexe("F");
		mexe("U");
		mexe("R");
		mexe("U'");
		mexe("R'");
		mexe("F'");
	}
	if(amarelo.cores[0][1] != 6 && amarelo.cores[2][1] == 6 && amarelo.cores[1][0] != 6 && amarelo.cores[1][2] == 6){
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("F'");
	}
	if(amarelo.cores[0][1] != 6 && amarelo.cores[2][1] == 6 && amarelo.cores[1][0] == 6 && amarelo.cores[1][2] != 6){
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("F'");
	}
	if(amarelo.cores[0][1] == 6 && amarelo.cores[2][1] != 6 && amarelo.cores[1][0] == 6 && amarelo.cores[1][2] != 6){
			mexe("F");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("F'");
	}
}

void fazF2L(){

//________________________________ F2L verde e laranaja ________________________________________________	

	if(branco.cores[0][2] == 1 && verde.cores[2][2] == 2 && laranja.cores[2][0] == 4){
		if(laranja.cores[1][0] == 2 && verde.cores[1][2] == 4){
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("U");
			mexe("F'");
			mexe("U'");			
			mexe("F");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 4){
			mexe("F");
			mexe("U2");
			mexe("F2");
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 4){
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 2){
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 4){
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 2){
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 4){
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 2){
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 4){
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 2){
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 2){
			mexe("R'");
			mexe("U");
			mexe("R");	
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 4){
			mexe("R'");
			mexe("U2");
			mexe("R2");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][0] == 4 && azul.cores[1][2] == 2){
			mexe("L");
			mexe("U");
			mexe("L'");	
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");

		}
		if(vermelho.cores[1][0] == 2 && azul.cores[1][2] == 4){
			mexe("L");
			mexe("U");
			mexe("L'");	
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 2){
			mexe("L'");
			mexe("U");
			mexe("L");	
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
	}
	
	if(branco.cores[0][2] == 2 && verde.cores[2][2] == 4 && laranja.cores[2][0] == 1){
		if(laranja.cores[1][0] == 4 && verde.cores[1][2] == 2){
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U");			
			mexe("R'");
		}
		if(laranja.cores[1][0] == 2 && verde.cores[1][2] == 4){
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U'");
			mexe("R");
			mexe("U");			
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 4){
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 2){
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U");
			mexe("F'");
			mexe("U2");
			mexe("F");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 4){
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 2){
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U");
			mexe("F'");
			mexe("U2");
			mexe("F");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 4){
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 2){
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U");
			mexe("F'");
			mexe("U2");
			mexe("F");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 4){
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 2){
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U");
			mexe("F'");
			mexe("U2");
			mexe("F");
		}
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 2){
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 4){
			mexe("R'");
			mexe("U");
			mexe("R2");
			mexe("U");
			mexe("R'");
			mexe("U");
			mexe("F'");
			mexe("U2");
			mexe("F");			
		}
		if(vermelho.cores[1][0] == 4 && azul.cores[1][2] == 2){
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(vermelho.cores[1][0] == 2 && azul.cores[1][2] == 4){
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U");
			mexe("F'");
			mexe("U2");
			mexe("F");	
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 2){
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 4){
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U");
			mexe("F'");
			mexe("U2");
			mexe("F");
		}
	}
	
	if(branco.cores[0][2] == 4 && verde.cores[2][2] == 1 && laranja.cores[2][0] == 2){
		if(laranja.cores[1][0] == 2 && verde.cores[1][2] == 4){
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("F'");
			mexe("U");			
			mexe("F");
		}
		if(laranja.cores[1][0] == 4 && verde.cores[1][2] == 2){
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U2");			
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 4){
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 2){
			mexe("U'");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 4){
			mexe("U");	
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 2){
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 4){
			mexe("U2");	
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 2){
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 4){
			mexe("U'");	
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 2){
			mexe("U2");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 2){
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");	
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
		}
		if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 4){
			mexe("R'");
			mexe("U'");
			mexe("R2");
			mexe("U'");
			mexe("R'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][0] == 4 && azul.cores[1][2] == 2){
			mexe("L");
			mexe("U2");
			mexe("L'");	
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");

		}
		if(vermelho.cores[1][0] == 2 && azul.cores[1][2] == 4){ 
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 2){
			mexe("L'");
			mexe("U2");
			mexe("L");	
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 4){
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
	}
	


	if(amarelo.cores[2][2] == 4 && verde.cores[0][2] == 2 && laranja.cores[0][0] == 1){
		if(laranja.cores[1][0] == 4 && verde.cores[1][2] == 2){
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(laranja.cores[1][0] == 2 && verde.cores[1][2] == 4){
			mexe("U2");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 4){
			mexe("U'");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 2){
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 4){
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 2){
			mexe("U");
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U2");
			mexe("F");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 4){
			mexe("R'");
			mexe("U");
			mexe("R2");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 2){
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U2");
			mexe("F");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 4){
			mexe("U");
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 2){
			mexe("U'");
			mexe("F'");
			mexe("U");
			mexe("F");
		}
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 2){
			mexe("R'");
			mexe("U'");
			mexe("R2");	
			mexe("U");
			mexe("R'");
		}
		if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 4){
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("F'");
			mexe("U");
			mexe("F");
		}
		if(vermelho.cores[1][0] == 4 && azul.cores[1][2] == 2){
			mexe("U'");
			mexe("L");
			mexe("U");	
			mexe("L'");
			mexe("R");
			mexe("U");
			mexe("R'");

		}
		if(vermelho.cores[1][0] == 2 && azul.cores[1][2] == 4){
			mexe("B'");
			mexe("U");
			mexe("B");	
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 2){
			mexe("U'");
			mexe("L'");
			mexe("U");	
			mexe("L");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 4){
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
	}
	
	if(amarelo.cores[2][2] == 1 && verde.cores[0][2] == 4 && laranja.cores[0][0] == 2){
		if(laranja.cores[1][0] == 2 && verde.cores[1][2] == 4){
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("F'");
			mexe("U2");
			mexe("F");
		}
		if(laranja.cores[1][0] == 4 && verde.cores[1][2] == 2){
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");			
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 4){
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 2){
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 4){
			mexe("U");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 2){
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 4){
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 2){
			mexe("U'");
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U");
			mexe("F");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 4){
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 2){
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 2){
			mexe("U'");
			mexe("R'");
			mexe("U");	
			mexe("R2");
			mexe("U'");
			mexe("R'");
		}
		if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 4){
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][0] == 4 && azul.cores[1][2] == 2){
			mexe("L");
			mexe("U");
			mexe("L'");	
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("R");
			mexe("U");
			mexe("R'");

		}
		if(vermelho.cores[1][0] == 2 && azul.cores[1][2] == 4){
			mexe("U2");
			mexe("B'");
			mexe("U2");	
			mexe("B");
			mexe("R");
			mexe("U'");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 2){
			mexe("U");
			mexe("F2");
			mexe("R'");	
			mexe("F2");
			mexe("R");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 4){
			mexe("L");
			mexe("F'");
			mexe("L'");
			mexe("F");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
	}
	
	if(amarelo.cores[2][2] == 2 && verde.cores[0][2] == 1 && laranja.cores[0][0] == 4){
		if(laranja.cores[1][0] == 2 && verde.cores[1][2] == 4){
			mexe("U2");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");	
		}
		if(laranja.cores[1][0] == 4 && verde.cores[1][2] == 2){
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 4){
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 2){
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 4){
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("R'");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 2){
			mexe("U'");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 4){
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("R'");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 2){
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 4){
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 2){
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 2){
			mexe("R");
			mexe("U'");
			mexe("R'");	
			mexe("U");
			mexe("R2");
			mexe("F");
			mexe("R2");
			mexe("F'");
		}
		if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 4){
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][0] == 4 && azul.cores[1][2] == 2){
			mexe("U");
			mexe("B'");
			mexe("U'");	
			mexe("B");
			mexe("F'");
			mexe("U'");
			mexe("F");

		}
		if(vermelho.cores[1][0] == 2 && azul.cores[1][2] == 4){
			mexe("L");
			mexe("U'");
			mexe("L'");	
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 2){
			mexe("F");
			mexe("U");
			mexe("F2");	
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 4){
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}	
	}
	

	
	if(amarelo.cores[0][2] == 1 && azul.cores[0][0] == 2 && laranja.cores[0][2] == 4){
		if(laranja.cores[1][0] == 2 && verde.cores[1][2] == 4){
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("F'");
			mexe("U2");
			mexe("F");
		}
		if(laranja.cores[1][0] == 4 && verde.cores[1][2] == 2){
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");			
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 4){
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 2){
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 4){
			mexe("U");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 2){
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 4){
			mexe("U2");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 2){
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U");
			mexe("F");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 4){
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 2){
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U");
			mexe("F");
		}
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 2){
			mexe("R2");
			mexe("F");
			mexe("R2");	
			mexe("F'");
		}
		if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 4){
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("F'");
			mexe("U2");
			mexe("F");
		}
		if(vermelho.cores[1][0] == 4 && azul.cores[1][2] == 2){
			mexe("U");
			mexe("L");
			mexe("U");	
			mexe("L'");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("R");
			mexe("U");
			mexe("R'");

		}
		if(vermelho.cores[1][0] == 2 && azul.cores[1][2] == 4){
			mexe("U'");
			mexe("B'");
			mexe("U2");	
			mexe("B");
			mexe("R");
			mexe("U'");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 2){
			mexe("U2");
			mexe("F2");
			mexe("R'");	
			mexe("F2");
			mexe("R");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 4){
			mexe("U");
			mexe("L");
			mexe("F'");
			mexe("L'");
			mexe("F");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
	}
	
	if(amarelo.cores[0][2] == 2 && azul.cores[0][0] == 4 && laranja.cores[0][2] == 1){
		if(laranja.cores[1][0] == 2 && verde.cores[1][2] == 4){
			mexe("U'");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");	
		}
		if(laranja.cores[1][0] == 4 && verde.cores[1][2] == 2){
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 4){
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 2){
			mexe("U2");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 4){
			mexe("U2");
			mexe("R");
			mexe("U'");
			mexe("R'");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 2){
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 4){
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("R'");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 2){
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 4){
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("R'");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 2){
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 2){
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");	
			mexe("U");
			mexe("R2");
			mexe("F");
			mexe("R2");
			mexe("F'");
		}
		if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 4){
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][0] == 4 && azul.cores[1][2] == 2){
			mexe("U2");
			mexe("B'");
			mexe("U'");	
			mexe("B");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][0] == 2 && azul.cores[1][2] == 4){
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("L'");	
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 2){
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F2");	
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 4){
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}	
	}
	
	if(amarelo.cores[0][2] == 4 && azul.cores[0][0] == 1 && laranja.cores[0][2] == 2){
		if(laranja.cores[1][0] == 4 && verde.cores[1][2] == 2){
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(laranja.cores[1][0] == 2 && verde.cores[1][2] == 4){
			mexe("U'");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 4){
			mexe("U2");
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 2){
			mexe("F'");
			mexe("U");
			mexe("F");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 4){
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 2){
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 4){
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 2){
			mexe("U2");
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U2");
			mexe("F");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 4){
			mexe("U");
			mexe("R'");
			mexe("U");
			mexe("R2");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 2){
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U2");
			mexe("F");
		}
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 2){
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R2");	
			mexe("U");
			mexe("R'");
		}
		if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 4){
			mexe("U");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("F'");
			mexe("U");
			mexe("F");
		}
		if(vermelho.cores[1][0] == 4 && azul.cores[1][2] == 2){
			mexe("L");
			mexe("U");	
			mexe("L'");
			mexe("R");
			mexe("U");
			mexe("R'");

		}
		if(vermelho.cores[1][0] == 2 && azul.cores[1][2] == 4){
			mexe("U");
			mexe("B'");
			mexe("U");
			mexe("B");	
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 2){
			mexe("L'");
			mexe("U");	
			mexe("L");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 4){
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
	}
	
	
	
	if(amarelo.cores[0][0] == 1 && azul.cores[0][2] == 4 && vermelho.cores[0][0] == 2){
		if(laranja.cores[1][0] == 2 && verde.cores[1][2] == 4){
			mexe("U2");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("F'");
			mexe("U2");
			mexe("F");
		}
		if(laranja.cores[1][0] == 4 && verde.cores[1][2] == 2){
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");			
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 4){
			mexe("U2");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 2){
			mexe("U");
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U");
			mexe("F");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 4){
			mexe("U2");		
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 2){
			mexe("U2");
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 4){
			mexe("U2");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 2){
			mexe("U2");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 4){
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 2){
			mexe("U2");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 2){
			mexe("U");
			mexe("R'");
			mexe("U");	
			mexe("R2");
			mexe("U'");
			mexe("R'");
		}
		if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 4){
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][0] == 4 && azul.cores[1][2] == 2){
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");	
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("R");
			mexe("U");
			mexe("R'");

		}
		if(vermelho.cores[1][0] == 2 && azul.cores[1][2] == 4){
			mexe("B'");
			mexe("U2");	
			mexe("B");
			mexe("R");
			mexe("U'");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 2){
			mexe("U'");
			mexe("F2");
			mexe("R'");	
			mexe("F2");
			mexe("R");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 4){
			mexe("U2");
			mexe("L");
			mexe("F'");
			mexe("L'");
			mexe("F");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
	}
	
	if(amarelo.cores[0][0] == 2 && azul.cores[0][2] == 1 && vermelho.cores[0][0] == 4){
		if(laranja.cores[1][0] == 2 && verde.cores[1][2] == 4){
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");	
		}
		if(laranja.cores[1][0] == 4 && verde.cores[1][2] == 2){
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 4){
			mexe("U");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 2){
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 4){
			mexe("U2");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 2){
			mexe("U'");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 4){
			mexe("R");
			mexe("U2");
			mexe("R'");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 2){
			mexe("U");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 4){
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("R'");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 2){
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 2){/////////////////////////////////
			mexe("U2");
			mexe("R");
			mexe("U'");
			mexe("R'");	
			mexe("U");
			mexe("R2");
			mexe("F");
			mexe("R2");
			mexe("F'");
		}
		if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 4){
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][0] == 4 && azul.cores[1][2] == 2){
			mexe("U'");
			mexe("B'");
			mexe("U'");	
			mexe("B");
			mexe("F'");
			mexe("U'");
			mexe("F");

		}
		if(vermelho.cores[1][0] == 2 && azul.cores[1][2] == 4){
			mexe("U2");
			mexe("L");
			mexe("U'");
			mexe("L'");	
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 2){
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F2");	
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 4){
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}	
	}
	
	if(amarelo.cores[0][0] == 4 && azul.cores[0][2] == 2 && vermelho.cores[0][0] == 1){
		if(laranja.cores[1][0] == 4 && verde.cores[1][2] == 2){
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(laranja.cores[1][0] == 2 && verde.cores[1][2] == 4){
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 4){
			mexe("U2");
			mexe("R'");
			mexe("U");
			mexe("R2");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 2){
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U2");
			mexe("F");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 4){
			mexe("U'");
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 2){
			mexe("F'");
			mexe("U2");
			mexe("F");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 4){
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 2){
			mexe("U2");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 4){
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 2){
			mexe("U'");
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U2");
			mexe("F");
		}
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 2){
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R2");	
			mexe("U");
			mexe("R'");
		}
		if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 4){
			mexe("U2");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("F'");
			mexe("U");
			mexe("F");
		}
		if(vermelho.cores[1][0] == 4 && azul.cores[1][2] == 2){
			mexe("U");
			mexe("L");
			mexe("U");	
			mexe("L'");
			mexe("R");
			mexe("U");
			mexe("R'");

		}
		if(vermelho.cores[1][0] == 2 && azul.cores[1][2] == 4){
			mexe("U2");
			mexe("B'");
			mexe("U");
			mexe("B");	
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 2){
			mexe("U");
			mexe("L'");
			mexe("U");	
			mexe("L");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 4){
			mexe("U2");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}	
	}
	
	
	
	if(amarelo.cores[2][0] == 1 && verde.cores[0][0] == 2 && vermelho.cores[0][2] == 4){
		if(laranja.cores[1][0] == 2 && verde.cores[1][2] == 4){
			mexe("U'");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("F'");
			mexe("U2");
			mexe("F");
		}
		if(laranja.cores[1][0] == 4 && verde.cores[1][2] == 2){
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");			
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 4){
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 2){
			mexe("U'");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 4){
			mexe("U'");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 2){
			mexe("U2");
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U");
			mexe("F");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 4){
			mexe("U'");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 2){
			mexe("U'");
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 4){
			mexe("U'");			
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 2){
			mexe("U'");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 2){
			mexe("U2");
			mexe("R'");
			mexe("U");	
			mexe("R2");
			mexe("U'");
			mexe("R'");
		}
		if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 4){
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][0] == 4 && azul.cores[1][2] == 2){
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");	
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("R");
			mexe("U");
			mexe("R'");

		}
		if(vermelho.cores[1][0] == 2 && azul.cores[1][2] == 4){
			mexe("U");
			mexe("B'");
			mexe("U2");	
			mexe("B");
			mexe("R");
			mexe("U'");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 2){
			mexe("F2");
			mexe("R'");	
			mexe("F2");
			mexe("R");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 4){
			mexe("U'");
			mexe("L");
			mexe("F'");
			mexe("L'");
			mexe("F");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
	}
	
	if(amarelo.cores[2][0] == 2 && verde.cores[0][0] == 4 && vermelho.cores[0][2] == 1){
		if(laranja.cores[1][0] == 2 && verde.cores[1][2] == 4){
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");	
		}
		if(laranja.cores[1][0] == 4 && verde.cores[1][2] == 2){
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 4){
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 2){
			mexe("U2");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 4){
			mexe("U2");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("R'");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 2){
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 4){
			mexe("U'");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 2){
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 4){
			mexe("R");
			mexe("U'");
			mexe("R'");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 2){
			mexe("U2");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 2){
			mexe("U'");
			mexe("R");
			mexe("U'");
			mexe("R'");	
			mexe("U");
			mexe("R2");
			mexe("F");
			mexe("R2");
			mexe("F'");
		}
		if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 4){
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][0] == 4 && azul.cores[1][2] == 2){
			mexe("B'");
			mexe("U'");	
			mexe("B");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][0] == 2 && azul.cores[1][2] == 4){
			mexe("U'");
			mexe("L");
			mexe("U'");
			mexe("L'");	
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 2){
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F2");	
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 4){
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
	}
	
	if(amarelo.cores[2][0] == 4 && verde.cores[0][0] == 1 && vermelho.cores[0][2] == 2){
		if(laranja.cores[1][0] == 4 && verde.cores[1][2] == 2){
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(laranja.cores[1][0] == 2 && verde.cores[1][2] == 4){
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 4){
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 2){
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U2");
			mexe("F");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 4){
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 2){
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U2");
			mexe("F");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 4){
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 2){
			mexe("U2");
			mexe("F'");
			mexe("U");
			mexe("F");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 4){
			mexe("U2");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 2){
			mexe("U'");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 2){
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R2");	
			mexe("U");
			mexe("R'");
		}
		if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 4){
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("F'");
			mexe("U");
			mexe("F");
		}
		if(vermelho.cores[1][0] == 4 && azul.cores[1][2] == 2){
			mexe("U2");
			mexe("L");
			mexe("U");	
			mexe("L'");
			mexe("R");
			mexe("U");
			mexe("R'");

		}
		if(vermelho.cores[1][0] == 2 && azul.cores[1][2] == 4){
			mexe("U'");
			mexe("B'");
			mexe("U");
			mexe("B");	
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 2){
			mexe("U2");
			mexe("L'");
			mexe("U");	
			mexe("L");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 4){
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
	}
	
	
	
	if(branco.cores[2][2] == 1 && azul.cores[2][0] == 4 && laranja.cores[2][2] == 2){
		if(laranja.cores[1][0] == 2 && verde.cores[1][2] == 4){
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");			
		}
		if(laranja.cores[1][0] == 4 && verde.cores[1][2] == 2){
			mexe("D'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("D");
			mexe("R");
			mexe("U'");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 4){
			mexe("D'");
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("D");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 2){
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 4){
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 2){
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 4){
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 2){
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 4){
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 2){
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 2){/////////////
			mexe("R");
			mexe("B'");
			mexe("R'");	
			mexe("B");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 4){
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("R");
			mexe("U'");
			mexe("R'");
		}
		if(vermelho.cores[1][0] == 4 && azul.cores[1][2] == 2){
			mexe("D");
			mexe("L");
			mexe("U");	
			mexe("L'");
			mexe("D'");
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("R'");

		}
		if(vermelho.cores[1][0] == 2 && azul.cores[1][2] == 4){
			mexe("L");
			mexe("U'");
			mexe("L'");	
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 2){
			mexe("L'");
			mexe("U");
			mexe("L");	
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 4){
			mexe("D2");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("D2");
			mexe("F'");
			mexe("U");
			mexe("F");
		}
	}
	
	if(branco.cores[2][2] == 2 && azul.cores[2][0] == 1 && laranja.cores[2][2] == 4){
		if(laranja.cores[1][0] == 2 && verde.cores[1][2] == 4){
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("B");	
			mexe("F'");
			mexe("U");
			mexe("B'");
			mexe("F");		
		}
		if(laranja.cores[1][0] == 4 && verde.cores[1][2] == 2){
			mexe("F'");
			mexe("U'");
			mexe("F");			
			mexe("B");	
			mexe("F'");
			mexe("U");
			mexe("B'");
			mexe("F");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 4){
			mexe("U2");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 2){
			mexe("B");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("B'");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 4){
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 2){
			mexe("U");
			mexe("B");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("B'");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 4){
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 2){
			mexe("U2");
			mexe("B");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("B'");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 4){
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 2){
			mexe("U'");
			mexe("B");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("B'");
		}
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 2){/////////////
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U");
			mexe("R2");
			mexe("U");
			mexe("R'");
		}
		if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 4){
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U'");
			mexe("F'");
			mexe("U");
			mexe("F");
		}
		if(vermelho.cores[1][0] == 4 && azul.cores[1][2] == 2){
			mexe("B'");
			mexe("U");
			mexe("B2");	
			mexe("F'");
			mexe("U");
			mexe("B'");
			mexe("F");
		}
		if(vermelho.cores[1][0] == 2 && azul.cores[1][2] == 4){
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("B");	
			mexe("F'");
			mexe("U");
			mexe("B'");
			mexe("F");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 2){
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("B");	
			mexe("F'");
			mexe("U");
			mexe("B'");
			mexe("F");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 4){
			mexe("L'");
			mexe("U2");
			mexe("L");			
			mexe("B");	
			mexe("F'");
			mexe("U");
			mexe("B'");
			mexe("F");
		}
	}
	
	if(branco.cores[2][2] == 4 && azul.cores[2][0] == 2 && laranja.cores[2][2] == 1){
		if(laranja.cores[1][0] == 4 && verde.cores[1][2] == 2){
			mexe("R");
			mexe("U'");
			mexe("R2");
			mexe("U'");
			mexe("R2");
			mexe("U2");
			mexe("R'");		
		}
		if(laranja.cores[1][0] == 2 && verde.cores[1][2] == 4){
			mexe("F'");
			mexe("U2");
			mexe("F");			
			mexe("R'");
			mexe("U'");
			mexe("R2");
			mexe("U2");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 4){
			mexe("R");
			mexe("B'");
			mexe("R'");
			mexe("B");
			mexe("R2");
			mexe("F");
			mexe("R2");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 2){
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 4){
			mexe("U");
			mexe("R");
			mexe("B'");
			mexe("R'");
			mexe("B");
			mexe("R2");
			mexe("F");
			mexe("R2");
			mexe("F'");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 2){
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R'");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 4){
			mexe("U2");
			mexe("R");
			mexe("B'");
			mexe("R'");
			mexe("B");
			mexe("R2");
			mexe("F");
			mexe("R2");
			mexe("F'");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 2){
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 4){
			mexe("U'");
			mexe("R");
			mexe("B'");
			mexe("R'");
			mexe("B");
			mexe("R2");
			mexe("F");
			mexe("R2");
			mexe("F'");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 2){
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 2){/////////////
			mexe("B'");
			mexe("R");
			mexe("B");
			mexe("R2");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 4){
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][0] == 4 && azul.cores[1][2] == 2){
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("R'");
			mexe("U'");
			mexe("R2");
			mexe("U2");
			mexe("R'");
		}
		if(vermelho.cores[1][0] == 2 && azul.cores[1][2] == 4){
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U");	
			mexe("R'");
			mexe("U'");
			mexe("R2");
			mexe("U2");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 2){
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("R'");
			mexe("U'");
			mexe("R2");
			mexe("U2");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 4){
			mexe("F");
			mexe("U2");
			mexe("F'");			
			mexe("R'");
			mexe("U'");
			mexe("R2");
			mexe("U2");
			mexe("R'");
		}
	}
	
	
	
	if(branco.cores[2][0] == 1 && azul.cores[2][2] == 2 && vermelho.cores[2][0] == 4){
		if(laranja.cores[1][0] == 4 && verde.cores[1][2] == 2){
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");	
		}
		if(laranja.cores[1][0] == 2 && verde.cores[1][2] == 4){
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U'");			
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 4){
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 2){
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 4){
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 2){
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 4){
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 2){
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 4){
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 2){
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 2){/////////////
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 4){
			mexe("B");
			mexe("U2");
			mexe("B2");
			mexe("U'");
			mexe("B");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(vermelho.cores[1][0] == 4 && azul.cores[1][2] == 2){
			mexe("L");
			mexe("R");
			mexe("U2");
			mexe("L'");
			mexe("R'");
		}
		if(vermelho.cores[1][0] == 2 && azul.cores[1][2] == 4){
			mexe("D2");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("D2");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 2){
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 4){
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U'");			
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
	}
	
	if(branco.cores[2][0] == 2 && azul.cores[2][2] == 4 && vermelho.cores[2][0] == 1){
		if(laranja.cores[1][0] == 4 && verde.cores[1][2] == 2){
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(laranja.cores[1][0] == 2 && verde.cores[1][2] == 4){
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U'");			
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 4){
			mexe("U");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 2){
			mexe("U'");
			mexe("L");
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("L'");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 4){
			mexe("U2");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 2){
			mexe("L");
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("L'");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 4){
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 2){
			mexe("U");
			mexe("L");
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("L'");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 4){
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 2){
			mexe("U2");
			mexe("L");
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("L'");
		}
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 2){////////////
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 4){
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(vermelho.cores[1][0] == 4 && azul.cores[1][2] == 2){
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(vermelho.cores[1][0] == 2 && azul.cores[1][2] == 4){
			mexe("B");
			mexe("L'");
			mexe("B'");
			mexe("L2");
			mexe("U'");
			mexe("L");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 2){
			mexe("L'");
			mexe("U'");
			mexe("L2");
			mexe("U2");
			mexe("L'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 4){
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U'");			
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
	}
	
	if(branco.cores[2][0] == 4 && azul.cores[2][2] == 1 && vermelho.cores[2][0] == 2){
		if(laranja.cores[1][0] == 4 && verde.cores[1][2] == 2){
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("B'");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("B");
		}
		if(laranja.cores[1][0] == 2 && verde.cores[1][2] == 4){
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("B'");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("B");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 4){
			mexe("U2");
			mexe("B'");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("B");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 2){
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 4){
			mexe("U'");
			mexe("B'");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("B");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 2){
			mexe("U");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 4){
			mexe("B'");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("B");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 2){
			mexe("U2");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 4){
			mexe("U");
			mexe("B'");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("B");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 2){
			mexe("U'");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 2){////////////
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("B'");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("B");
		}
		if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 4){
			mexe("B");
			mexe("U'");
			mexe("B2");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("B");
		}
		if(vermelho.cores[1][0] == 4 && azul.cores[1][2] == 2){
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(vermelho.cores[1][0] == 2 && azul.cores[1][2] == 4){
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 2){
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("B'");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("B");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 4){
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("B'");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("B");
		}
	}
	
	
	
	if(branco.cores[0][0] == 1 && verde.cores[2][0] == 4 && vermelho.cores[2][2] == 2){
		if(laranja.cores[1][0] == 4 && verde.cores[1][2] == 2){
			mexe("D");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("D'");
			mexe("R");
			mexe("U'");
			mexe("R'");
		}
		if(laranja.cores[1][0] == 2 && verde.cores[1][2] == 4){
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 4){
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 2){
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 4){
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 2){
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 4){
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 2){
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 4){
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 2){
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 2){////////////
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 4){
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(vermelho.cores[1][0] == 4 && azul.cores[1][2] == 2){
			mexe("L");
			mexe("U2");
			mexe("L2");
			mexe("U'");
			mexe("L");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(vermelho.cores[1][0] == 2 && azul.cores[1][2] == 4){
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 2){
			mexe("F'");
			mexe("L");
			mexe("F");
			mexe("L'");
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 4){
			mexe("F");
			mexe("R");
			mexe("U'");
			mexe("R2");
			mexe("F'");
			mexe("R");
		}
	}
	
	if(branco.cores[0][0] == 2 && verde.cores[2][0] == 1 && vermelho.cores[2][2] == 4){
		if(laranja.cores[1][0] == 4 && verde.cores[1][2] == 2){
			mexe("F'");
			mexe("U");
			mexe("F2");
			mexe("U");
			mexe("F2");
			mexe("U2");
			mexe("F");
		}
		if(laranja.cores[1][0] == 2 && verde.cores[1][2] == 4){
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("F");
			mexe("U");
			mexe("F2");
			mexe("U2");
			mexe("F");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 4){
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 2){
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F2");
			mexe("U2");
			mexe("F");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 4){
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 2){
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F2");
			mexe("U2");
			mexe("F");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 4){
			mexe("U2");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 2){
			mexe("F");
			mexe("U");
			mexe("F2");
			mexe("U2");
			mexe("F");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 4){
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 2){
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F2");
			mexe("U2");
			mexe("F");
		}
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 2){////////////
			mexe("B");
			mexe("U'");
			mexe("B'");
			mexe("F");
			mexe("U");
			mexe("F2");
			mexe("U2");
			mexe("F");
		}
		if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 4){
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("F");
			mexe("U");
			mexe("F2");
			mexe("U2");
			mexe("F");
		}
		if(vermelho.cores[1][0] == 4 && azul.cores[1][2] == 2){
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("F");
			mexe("U");
			mexe("F2");
			mexe("U2");
			mexe("F");
		}
		if(vermelho.cores[1][0] == 2 && azul.cores[1][2] == 4){
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F2");
			mexe("U2");
			mexe("F");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 2){
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 4){//aqqui
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		
	}
	
	if(branco.cores[0][0] == 4 && verde.cores[2][0] == 2 && vermelho.cores[2][2] == 1){
		if(laranja.cores[1][0] == 4 && verde.cores[1][2] == 2){
			mexe("R");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("R'");
			mexe("L");
		}
		if(laranja.cores[1][0] == 2 && verde.cores[1][2] == 4){
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U'");
			mexe("L'");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("L");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 4){
			mexe("U");
			mexe("L'");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("L");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 2){
			mexe("U'");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 4){
			mexe("U2");
			mexe("L'");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("L");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 2){
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 4){
			mexe("U'");
			mexe("L'");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("L");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 2){
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 4){
			mexe("L'");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("L");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 2){
			mexe("U2");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 2){////////////
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("L'");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("L");
		}
		if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 4){
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("L'");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("L");
		}
		if(vermelho.cores[1][0] == 4 && azul.cores[1][2] == 2){
			mexe("L");
			mexe("U'");
			mexe("L2");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("L");
		}
		if(vermelho.cores[1][0] == 2 && azul.cores[1][2] == 4){
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("L'");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("L");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 2){
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 4){
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("F");
		}
	}
	printf("\n\n");
	//________________________________ F2L laranaja e azul ________________________________________________		

	if(branco.cores[2][2] == 1 && azul.cores[2][0] == 5 && laranja.cores[2][2] == 4){
		if(laranja.cores[1][2] == 5 && azul.cores[1][0] == 4){
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(azul.cores[1][2] == 5 && vermelho.cores[1][0] == 4){
			mexe("B2");
			mexe("U2");
			mexe("B2");
			mexe("U2");
			mexe("B2");
		}
		if(azul.cores[1][2] == 4 && vermelho.cores[1][0] == 5){
			mexe("D");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("D'");
			mexe("R'");
			mexe("U2");
			mexe("R");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 4){
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 5){
			mexe("D2");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("D2");
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 5){//----------------------
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 4){
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 5){
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 4){
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 5){
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 4){
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 5){
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 4){
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
	}
	
	if(branco.cores[2][2] == 4 && azul.cores[2][0] == 1 && laranja.cores[2][2] == 5){
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 5){
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
		}
		if(laranja.cores[1][2] == 5 && azul.cores[1][0] == 4){
			mexe("R");
			mexe("B'");
			mexe("R'");
			mexe("B2");
			mexe("U'");
			mexe("B'");
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(azul.cores[1][2] == 5 && vermelho.cores[1][0] == 4){//-----------------------
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("R'");
			mexe("U2");
			mexe("R");
		}
		if(azul.cores[1][2] == 4 && vermelho.cores[1][0] == 5){
			mexe("B'");
			mexe("U");
			mexe("B2");
			mexe("U2");
			mexe("B'");
			mexe("R'");
			mexe("U2");
			mexe("R");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 4){
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("R'");
			mexe("U2");
			mexe("R");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 5){
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("R'");
			mexe("U2");
			mexe("R");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 5){//----------------------
			mexe("U2");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 4){
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("R'");
			mexe("U2");
			mexe("R");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 5){
			mexe("U'");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 4){
			mexe("U");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("R'");
			mexe("U2");
			mexe("R");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 5){
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 4){
			mexe("U2");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("R'");
			mexe("U2");
			mexe("R");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 5){
			mexe("U");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 4){
			mexe("U'");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("R'");
			mexe("U2");
			mexe("R");
		}
	}
	
	if(branco.cores[2][2] == 5 && azul.cores[2][0] == 4 && laranja.cores[2][2] == 1){
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 5){
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(laranja.cores[1][2] == 5 && azul.cores[1][0] == 4){
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(azul.cores[1][2] == 5 && vermelho.cores[1][0] == 4){//-----------------------
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U'");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("B");
			mexe("U2");
			mexe("B'");
		}
		if(azul.cores[1][2] == 4 && vermelho.cores[1][0] == 5){
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("B");
			mexe("U2");
			mexe("B'");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 4){
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("B");
			mexe("U2");
			mexe("B'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 5){
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("B");
			mexe("U2");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 5){//----------------------
			mexe("U'");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("B");
			mexe("U2");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 4){
			mexe("B'");
			mexe("R");
			mexe("B");
			mexe("R'");
			mexe("U");
			mexe("B");
			mexe("U'");
			mexe("B'");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 5){
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("B");
			mexe("U2");
			mexe("B'");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 4){
			mexe("U");
			mexe("B'");
			mexe("R");
			mexe("B");
			mexe("R'");
			mexe("U");
			mexe("B");
			mexe("U'");
			mexe("B'");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 5){
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("B");
			mexe("U2");
			mexe("B'");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 4){
			mexe("U2");
			mexe("B'");
			mexe("R");
			mexe("B");
			mexe("R'");
			mexe("U");
			mexe("B");
			mexe("U'");
			mexe("B'");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 5){
			mexe("U2");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("B");
			mexe("U2");
			mexe("B'");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 4){
			mexe("U'");
			mexe("B'");
			mexe("R");
			mexe("B");
			mexe("R'");
			mexe("U");
			mexe("B");
			mexe("U'");
			mexe("B'");
		}
	}
	


	if(amarelo.cores[2][2] == 1 && verde.cores[0][2] == 5 && laranja.cores[0][0] == 4){
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 5){
			mexe("B'");
			mexe("R");
			mexe("B");
			mexe("R'");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(laranja.cores[1][2] == 5 && azul.cores[1][0] == 4){
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("B");
			mexe("U2");
			mexe("B'");
		}
		if(azul.cores[1][2] == 5 && vermelho.cores[1][0] == 4){//-----------------------
			mexe("U2");
			mexe("B2");
			mexe("R");
			mexe("B2");
			mexe("R'");
		}
		if(azul.cores[1][2] == 4 && vermelho.cores[1][0] == 5){
			mexe("U'");
			mexe("L'");
			mexe("B");
			mexe("L");
			mexe("B'");
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 4){
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("B");
			mexe("U'");
			mexe("B'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 5){
			mexe("L");
			mexe("F'");
			mexe("L'");
			mexe("F");
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 5){//----------------------
			mexe("U'");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 4){
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 5){
			mexe("B");
			mexe("U2");
			mexe("B2");
			mexe("R");
			mexe("B");
			mexe("R'");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 4){
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R2");
			mexe("B'");
			mexe("R'");
			mexe("B");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 5){
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("B2");
			mexe("R");
			mexe("B");
			mexe("R'");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 4){
			mexe("U2");
			mexe("R'");
			mexe("U2");
			mexe("R2");
			mexe("B'");
			mexe("R'");
			mexe("B");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 5){
			mexe("R");
			mexe("B'");
			mexe("R'");
			mexe("B");
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 4){
			mexe("U'");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
	}

	if(amarelo.cores[2][2] == 4 && verde.cores[0][2] == 1 && laranja.cores[0][0] == 5){
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 5){
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(laranja.cores[1][2] == 5 && azul.cores[1][0] == 4){
			mexe("U");
			mexe("B");
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(azul.cores[1][2] == 5 && vermelho.cores[1][0] == 4){//-----------------------
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(azul.cores[1][2] == 4 && vermelho.cores[1][0] == 5){
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 4){
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 5){
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 5){//----------------------
			mexe("B");
			mexe("U'");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 4){
			mexe("U2");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 5){
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U2");
			mexe("B'");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 4){
			mexe("U2");
			mexe("B");
			mexe("U'");
			mexe("B'");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 5){
			mexe("U2");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U2");
			mexe("B'");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 4){
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 5){
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 4){
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
	}
	
	if(amarelo.cores[2][2] == 5 && verde.cores[0][2] == 4 && laranja.cores[0][0] == 1){
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 5){
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
		}
		if(laranja.cores[1][2] == 5 && azul.cores[1][0] == 4){
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(azul.cores[1][2] == 5 && vermelho.cores[1][0] == 4){//-----------------------
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(azul.cores[1][2] == 4 && vermelho.cores[1][0] == 5){
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 4){
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 5){
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 5){//----------------------
			mexe("U2");
			mexe("B");
			mexe("U'");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 4){
			mexe("U'");
			mexe("B");
			mexe("U'");
			mexe("B'");
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 5){
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 4){
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 5){
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 4){
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");

		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 5){
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");

		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 4){
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
		}
	}
	

	
	if(amarelo.cores[0][2] == 1 && azul.cores[0][0] == 4 && laranja.cores[0][2] == 5){
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 5){
			mexe("U");
			mexe("B'");
			mexe("R");
			mexe("B");
			mexe("R'");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(laranja.cores[1][2] == 5 && azul.cores[1][0] == 4){
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("B");
			mexe("U2");
			mexe("B'");
		}
		if(azul.cores[1][2] == 5 && vermelho.cores[1][0] == 4){//-----------------------
			mexe("U'");
			mexe("B2");
			mexe("R");
			mexe("B2");
			mexe("R'");
		}
		if(azul.cores[1][2] == 4 && vermelho.cores[1][0] == 5){
			mexe("L'");
			mexe("B");
			mexe("L");
			mexe("B'");
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 4){
			mexe("U2");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("B");
			mexe("U'");
			mexe("B'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 5){
			mexe("U");
			mexe("L");
			mexe("F'");
			mexe("L'");
			mexe("F");
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 5){//----------------------
			mexe("U");
			mexe("R");
			mexe("B'");
			mexe("R'");
			mexe("B");
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 4){
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 5){
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 4){
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 5){
			mexe("U");
			mexe("B");
			mexe("U2");
			mexe("B2");
			mexe("R");
			mexe("B");
			mexe("R'");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 4){
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R2");
			mexe("B'");
			mexe("R'");
			mexe("B");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 5){
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B2");
			mexe("R");
			mexe("B");
			mexe("R'");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 4){
			mexe("U'");
			mexe("R'");
			mexe("U2");
			mexe("R2");
			mexe("B'");
			mexe("R'");
			mexe("B");
		}
	}
	
	if(amarelo.cores[0][2] == 4 && azul.cores[0][0] == 5 && laranja.cores[0][2] == 1){
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 5){
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(laranja.cores[1][2] == 5 && azul.cores[1][0] == 4){
			mexe("U2");
			mexe("B");
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(azul.cores[1][2] == 5 && vermelho.cores[1][0] == 4){//-----------------------
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(azul.cores[1][2] == 4 && vermelho.cores[1][0] == 5){
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 4){
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 5){
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 5){//----------------------
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 4){
			mexe("U");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 5){
			mexe("U");
			mexe("B");
			mexe("U'");
			mexe("B'");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 4){
			mexe("U'");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 5){
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U2");
			mexe("B'");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 4){
			mexe("U'");
			mexe("B");
			mexe("U'");
			mexe("B'");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 5){
			mexe("U'");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U2");
			mexe("B'");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 4){
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
	}
	
	if(amarelo.cores[0][2] == 5 && azul.cores[0][0] == 1 && laranja.cores[0][2] == 4){
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 5){
			mexe("U");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
		}
		if(laranja.cores[1][2] == 5 && azul.cores[1][0] == 4){
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(azul.cores[1][2] == 5 && vermelho.cores[1][0] == 4){//-----------------------
			mexe("U");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(azul.cores[1][2] == 4 && vermelho.cores[1][0] == 5){
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 4){
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 5){
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 5){//----------------------
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 4){
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("R");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 5){
			mexe("U'");
			mexe("B");
			mexe("U'");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 4){
			mexe("B");
			mexe("U'");
			mexe("B'");
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 5){
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 4){
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 5){
			mexe("U");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 4){
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
		}
	}
	
	
	
	if(amarelo.cores[0][0] == 1 && azul.cores[0][2] == 5 && vermelho.cores[0][0] == 4){
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 5){
			mexe("U2");
			mexe("B'");
			mexe("R");
			mexe("B");
			mexe("R'");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(laranja.cores[1][2] == 5 && azul.cores[1][0] == 4){
			mexe("U");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("B");
			mexe("U2");
			mexe("B'");
		}
		if(azul.cores[1][2] == 5 && vermelho.cores[1][0] == 4){//-----------------------
			mexe("B2");
			mexe("R");
			mexe("B2");
			mexe("R'");
		}
		if(azul.cores[1][2] == 4 && vermelho.cores[1][0] == 5){
			mexe("U");
			mexe("L'");
			mexe("B");
			mexe("L");
			mexe("B'");
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 4){
			mexe("U'");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("B");
			mexe("U'");
			mexe("B'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 5){
			mexe("U2");
			mexe("L");
			mexe("F'");
			mexe("L'");
			mexe("F");
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 5){//----------------------
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B2");
			mexe("R");
			mexe("B");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 4){
			mexe("R'");
			mexe("U2");
			mexe("R2");
			mexe("B'");
			mexe("R'");
			mexe("B");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 5){
			mexe("U2");
			mexe("R");
			mexe("B'");
			mexe("R'");
			mexe("B");
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 4){
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 5){
			mexe("U");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 4){
			mexe("U");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 5){
			mexe("U2");
			mexe("B");
			mexe("U2");
			mexe("B2");
			mexe("R");
			mexe("B");
			mexe("R'");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 4){
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R2");
			mexe("B'");
			mexe("R'");
			mexe("B");
		}
	}
	
	if(amarelo.cores[0][0] == 4 && azul.cores[0][2] == 1 && vermelho.cores[0][0] == 5){
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 5){
			mexe("U2");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(laranja.cores[1][2] == 5 && azul.cores[1][0] == 4){
			mexe("U'");
			mexe("B");
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(azul.cores[1][2] == 5 && vermelho.cores[1][0] == 4){//-----------------------
			mexe("U2");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(azul.cores[1][2] == 4 && vermelho.cores[1][0] == 5){
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 4){
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 5){
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 5){//----------------------
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U2");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 4){
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 5){
			mexe("U");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 4){
			mexe("U2");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 5){
			mexe("U2");
			mexe("B");
			mexe("U'");
			mexe("B'");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 4){
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 5){
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U2");
			mexe("B'");
			
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 4){
			mexe("B");
			mexe("U'");
			mexe("B'");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");			
		}
	}
	
	if(amarelo.cores[0][0] == 5 && azul.cores[0][2] == 4 && vermelho.cores[0][0] == 1){
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 5){
			mexe("U2");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
		}
		if(laranja.cores[1][2] == 5 && azul.cores[1][0] == 4){
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(azul.cores[1][2] == 5 && vermelho.cores[1][0] == 4){//-----------------------
			mexe("U2");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(azul.cores[1][2] == 4 && vermelho.cores[1][0] == 5){
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 4){
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 5){
			mexe("U2");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 5){//----------------------
			mexe("U2");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");			
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 4){
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 5){
			mexe("U2");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 4){
			mexe("R'");
			mexe("U");
			mexe("R");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 5){
			mexe("B");
			mexe("U'");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 4){
			mexe("U");
			mexe("B");
			mexe("U'");
			mexe("B'");
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 5){
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 4){
			mexe("U2");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
		}
	}
	
	
	
	if(amarelo.cores[2][0] == 1 && verde.cores[0][0] == 4 && vermelho.cores[0][2] == 5){
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 5){
			mexe("U'");
			mexe("B'");
			mexe("R");
			mexe("B");
			mexe("R'");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(laranja.cores[1][2] == 5 && azul.cores[1][0] == 4){
			mexe("U2");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("B");
			mexe("U2");
			mexe("B'");
		}
		if(azul.cores[1][2] == 5 && vermelho.cores[1][0] == 4){//-----------------------
			mexe("U");
			mexe("B2");
			mexe("R");
			mexe("B2");
			mexe("R'");
		}
		if(azul.cores[1][2] == 4 && vermelho.cores[1][0] == 5){
			mexe("U2");
			mexe("L'");
			mexe("B");
			mexe("L");
			mexe("B'");
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 4){
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("B");
			mexe("U'");
			mexe("B'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 5){
			mexe("U'");
			mexe("L");
			mexe("F'");
			mexe("L'");
			mexe("F");
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 5){//----------------------
			mexe("U'");
			mexe("B");
			mexe("U2");
			mexe("B2");
			mexe("R");
			mexe("B");
			mexe("R'");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 4){
			mexe("R'");
			mexe("U'");
			mexe("R2");
			mexe("B'");
			mexe("R'");
			mexe("B");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 5){
			mexe("B");
			mexe("U");
			mexe("B2");
			mexe("R");
			mexe("B");
			mexe("R'");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 4){
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R2");
			mexe("B'");
			mexe("R'");
			mexe("B");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 5){
			mexe("U'");
			mexe("R");
			mexe("B'");
			mexe("R'");
			mexe("B");
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 4){
			mexe("U2");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 5){
			mexe("U2");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 4){
			mexe("U2");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
	}
	
	if(amarelo.cores[2][0] == 4 && verde.cores[0][0] == 5 && vermelho.cores[0][2] == 1){
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 5){
			mexe("U'");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(laranja.cores[1][2] == 5 && azul.cores[1][0] == 4){
			mexe("B");
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(azul.cores[1][2] == 5 && vermelho.cores[1][0] == 4){//-----------------------
			mexe("U'");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(azul.cores[1][2] == 4 && vermelho.cores[1][0] == 5){
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 4){
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 5){
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 5){//----------------------
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U2");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 4){
			mexe("U");
			mexe("B");
			mexe("U'");
			mexe("B'");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 5){
			mexe("U");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U2");
			mexe("B'");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 4){
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 5){
			mexe("U2");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 4){
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 5){
			mexe("B");
			mexe("U2");
			mexe("B'");			
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 4){
			mexe("U");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");			
		}
	}
	
	if(amarelo.cores[2][0] == 5 && verde.cores[0][0] == 1 && vermelho.cores[0][2] == 4){
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 5){
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
		}
		if(laranja.cores[1][2] == 5 && azul.cores[1][0] == 4){
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(azul.cores[1][2] == 5 && vermelho.cores[1][0] == 4){//-----------------------
			mexe("U'");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(azul.cores[1][2] == 4 && vermelho.cores[1][0] == 5){
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 4){
			mexe("U2");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 5){
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 5){//----------------------
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");		
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 4){
			mexe("U'");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 5){
			mexe("U'");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 4){
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("U");
			mexe("R'");
			mexe("U2");
			mexe("R");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 5){
			mexe("U'");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 4){
			mexe("R'");
			mexe("U2");
			mexe("R");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 5){
			mexe("U");
			mexe("B");
			mexe("U'");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 4){
			mexe("U2");
			mexe("B");
			mexe("U'");
			mexe("B'");
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
	}
	
	
	if(branco.cores[2][0] == 1 && azul.cores[2][2] == 4 && vermelho.cores[2][0] == 5){
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 5){
			mexe("D'");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("D");
			mexe("R'");
			mexe("U");
			mexe("R");
		}
		if(laranja.cores[1][2] == 5 && azul.cores[1][0] == 4){
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(azul.cores[1][2] == 5 && vermelho.cores[1][0] == 4){//-----------------------
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(azul.cores[1][2] == 4 && vermelho.cores[1][0] == 5){
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("B");
			mexe("U'");
			mexe("B'");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 4){
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 5){
			mexe("D");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("D'");
			mexe("U2");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 5){//----------------------
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 4){
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 5){
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 4){
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 5){
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 4){
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 5){
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 4){
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
	}
	
	if(branco.cores[2][0] == 4 && azul.cores[2][2] == 5 && vermelho.cores[2][0] == 1){
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 5){
			mexe("R'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("R");
			mexe("L'");
		}
		if(laranja.cores[1][2] == 5 && azul.cores[1][0] == 4){
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("R'");
			mexe("L");
			mexe("U");
			mexe("R");
			mexe("L'");
		}
		if(azul.cores[1][2] == 5 && vermelho.cores[1][0] == 4){//-----------------------
			mexe("B");
			mexe("L'");
			mexe("B'");
			mexe("L2");
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(azul.cores[1][2] == 4 && vermelho.cores[1][0] == 5){
			mexe("B");
			mexe("L'");
			mexe("B'");
			mexe("L");
			mexe("B");
			mexe("U'");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("B");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 4){
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("L");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("L'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 5){
			mexe("L'");
			mexe("U");
			mexe("L2");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("L'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 5){//----------------------
			mexe("U");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 4){
			mexe("U'");
			mexe("L");
			mexe("R'");
			mexe("U");
			mexe("L'");
			mexe("R");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 5){
			mexe("U2");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 4){
			mexe("L");
			mexe("R'");
			mexe("U");
			mexe("L'");
			mexe("R");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 5){
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 4){
			mexe("U");
			mexe("L");
			mexe("R'");
			mexe("U");
			mexe("L'");
			mexe("R");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 5){
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 4){
			mexe("U2");
			mexe("L");
			mexe("R'");
			mexe("U");
			mexe("L'");
			mexe("R");
		}
	}
	
	if(branco.cores[2][0] == 5 && azul.cores[2][2] == 1 && vermelho.cores[2][0] == 4){
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 5){
			mexe("B");
			mexe("U'");
			mexe("B2");
			mexe("U'");
			mexe("B2");
			mexe("U2");
			mexe("B'");
		}
		if(laranja.cores[1][2] == 5 && azul.cores[1][0] == 4){
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("B'");
			mexe("U'");
			mexe("B2");
			mexe("U2");
			mexe("B'");
		}
		if(azul.cores[1][2] == 5 && vermelho.cores[1][0] == 4){//-----------------------
			mexe("L'");
			mexe("B");
			mexe("L");
			mexe("B2");
			mexe("U");
			mexe("B");
			mexe("U'");
			mexe("B");
			mexe("U'");
			mexe("B'");
		}
		if(azul.cores[1][2] == 4 && vermelho.cores[1][0] == 5){
			mexe("L'");
			mexe("B");
			mexe("L");
			mexe("B'");
			mexe("U");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 4){
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B2");
			mexe("U2");
			mexe("B'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 5){
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("B'");
			mexe("U'");
			mexe("B2");
			mexe("U2");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 5){//----------------------
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B2");
			mexe("U2");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 4){
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 5){
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B2");
			mexe("U2");
			mexe("B'");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 4){
			mexe("U");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 5){
			mexe("B'");
			mexe("U'");
			mexe("B2");
			mexe("U2");
			mexe("B'");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 4){
			mexe("U2");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 5){
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("B2");
			mexe("U2");
			mexe("B'");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 4){
			mexe("U'");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
	}
	
	
	
	if(branco.cores[0][0] == 1 && verde.cores[2][0] == 5 && vermelho.cores[2][2] == 4){
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 5){
			mexe("D2");
			mexe("R'");
			mexe("U'");
			mexe("R");
			mexe("D2");
			mexe("R'");
			mexe("U");
			mexe("R");
		}
		if(laranja.cores[1][2] == 5 && azul.cores[1][0] == 4){
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("B");
			mexe("U2");
			mexe("B'");
		}
		if(azul.cores[1][2] == 5 && vermelho.cores[1][0] == 4){//-----------------------
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(azul.cores[1][2] == 4 && vermelho.cores[1][0] == 5){
			mexe("D'");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("D");
			mexe("B");
			mexe("U'");
			mexe("B'");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 4){
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 5){
			mexe("F");
			mexe("B");
			mexe("U2");
			mexe("F'");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 5){//----------------------
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 4){
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 5){
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 4){
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 5){
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 4){
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 5){
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 4){
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
	}
	
	if(branco.cores[0][0] == 4 && verde.cores[2][0] == 1 && vermelho.cores[2][2] == 5){
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 5){
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("F");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("F'");
		}
		if(laranja.cores[1][2] == 5 && azul.cores[1][0] == 4){
			mexe("B");
			mexe("U'");
			mexe("B'");
			mexe("F");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("F'");
		}
		if(azul.cores[1][2] == 5 && vermelho.cores[1][0] == 4){//-----------------------
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("F");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("F'");
		}
		if(azul.cores[1][2] == 4 && vermelho.cores[1][0] == 5){
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("F");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("F'");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 4){
			mexe("L");
			mexe("F'");
			mexe("L'");
			mexe("F2");
			mexe("U'");
			mexe("F'");
			mexe("R");
			mexe("U'");
			mexe("R'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 5){
			mexe("L");
			mexe("F'");
			mexe("L'");
			mexe("F");
			mexe("U'");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 5){//----------------------
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 4){
			mexe("U2");
			mexe("F");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("F'");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 5){
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 4){
			mexe("U'");
			mexe("F");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("F'");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 5){
			mexe("U2");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 4){
			mexe("F");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("F'");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 5){
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 4){
			mexe("U");
			mexe("F");
			mexe("R'");
			mexe("U2");
			mexe("R");
			mexe("F'");
		}
	}
	
	if(branco.cores[0][0] == 5 && verde.cores[2][0] == 4 && vermelho.cores[2][2] == 1){
		if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 5){
			mexe("B");
			mexe("U2");
			mexe("L'");
			mexe("U2");
			mexe("B'");
			mexe("L");
		}
		if(laranja.cores[1][2] == 5 && azul.cores[1][0] == 4){
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("B");
			mexe("L'");
			mexe("U2");
			mexe("B'");
			mexe("L");
		}
		if(azul.cores[1][2] == 5 && vermelho.cores[1][0] == 4){//-----------------------
			mexe("B'");
			mexe("U2");
			mexe("B2");
			mexe("L'");
			mexe("U2");
			mexe("B'");
			mexe("L");
		}
		if(azul.cores[1][2] == 4 && vermelho.cores[1][0] == 5){
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("B");
			mexe("L'");
			mexe("U2");
			mexe("B'");
			mexe("L");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 4){
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("B");
			mexe("U");
			mexe("B'");
		}
		if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 5){
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("R'");
			mexe("U");
			mexe("R");
			mexe("U'");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 5){//----------------------
			mexe("U");
			mexe("L'");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("L");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 4){
			mexe("U'");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 5){
			mexe("U2");
			mexe("L'");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("L");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 4){
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 5){
			mexe("U'");
			mexe("L'");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("L");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 4){
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
		if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 5){
			mexe("U");
			mexe("L'");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("L");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 4){
			mexe("U2");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("R'");
			mexe("U'");
			mexe("R");
		}
	}
	printf("\n\n");
	//________________________________ F2L vermelho e azul ________________________________________________		

	if(branco.cores[2][0] == 1 && azul.cores[2][2] == 5 && vermelho.cores[2][0] == 3){
		if(vermelho.cores[1][0] == 5 && azul.cores[1][2] == 3){
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 5){
			mexe("L2");
			mexe("U2");
			mexe("L2");
			mexe("U2");
			mexe("L2");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 3){
			mexe("L'");
			mexe("U2");
			mexe("L2");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 5){
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 3){
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 5){
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 3){
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 5){
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 3){
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 5){
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 3){
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
	}
	
	if(branco.cores[2][0] == 3 && azul.cores[2][2] == 1 && vermelho.cores[2][0] == 5){
		if(vermelho.cores[1][0] == 3 && azul.cores[1][2] == 5){
			mexe("L'");
			mexe("B");
			mexe("L");
			mexe("B'");
			mexe("U");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(vermelho.cores[1][0] == 5 && azul.cores[1][2] == 3){
			mexe("L'");
			mexe("B");
			mexe("L");
			mexe("B2");
			mexe("U");
			mexe("B");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 5){
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 3){
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 5){
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 3){
			mexe("U2");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("L");
			mexe("U2");
			mexe("L'");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 5){
			mexe("U");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 3){
			mexe("U'");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("L");
			mexe("U2");
			mexe("L'");
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 5){
			mexe("U2");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 3){
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("L");
			mexe("U2");
			mexe("L'");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 5){
			mexe("U'");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 3){
			mexe("U");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("L");
			mexe("U2");
			mexe("L'");
		}
	}
	
	if(branco.cores[2][0] == 5 && azul.cores[2][2] == 3 && vermelho.cores[2][0] == 1){
		if(vermelho.cores[1][0] == 3 && azul.cores[1][2] == 5){
			mexe("B");
			mexe("L'");
			mexe("B'");
			mexe("L");
			mexe("U'");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(vermelho.cores[1][0] == 5 && azul.cores[1][2] == 3){
			mexe("B");
			mexe("L'");
			mexe("B'");
			mexe("L2");
			mexe("U'");
			mexe("L'");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 5){
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("B'");
			mexe("U2");
			mexe("B");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 3){
			mexe("L'");
			mexe("U");
			mexe("L2");
			mexe("U2");
			mexe("L'");
			mexe("B'");
			mexe("U2");
			mexe("B");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 5){
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("B'");
			mexe("U2");
			mexe("B");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 3){
			mexe("U");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 5){
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("B'");
			mexe("U2");
			mexe("B");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 3){
			mexe("U2");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 5){
			mexe("U");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("B'");
			mexe("U2");
			mexe("B");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 3){
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 5){
			mexe("U2");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("B'");
			mexe("U2");
			mexe("B");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 3){
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
	}


	if(branco.cores[0][0] == 1 && verde.cores[2][0] == 3 && vermelho.cores[2][2] == 5){
		if(vermelho.cores[1][0] == 3 && azul.cores[1][2] == 5){
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("D");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("D'");
		}
		if(vermelho.cores[1][0] == 5 && azul.cores[1][2] == 3){
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 5){
			mexe("L'");
			mexe("U");
			mexe("L2");
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L'");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 3){
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("B'");
			mexe("U2");
			mexe("B");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 5){
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 3){
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 5){
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 3){
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 5){
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 3){
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 5){
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 3){
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
	}

	if(branco.cores[0][0] == 3 && verde.cores[2][0] == 5 && vermelho.cores[2][2] == 1){
		if(vermelho.cores[1][0] == 3 && azul.cores[1][2] == 5){
			mexe("L");
			mexe("U'");
			mexe("L2");
			mexe("U'");
			mexe("L2");
			mexe("U2");
			mexe("L'");
		}
		if(vermelho.cores[1][0] == 5 && azul.cores[1][2] == 3){
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("L");
			mexe("U'");
			mexe("L2");
			mexe("U2");
			mexe("L'");		
		}
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 5){
			mexe("F'");
			mexe("L");
			mexe("F");
			mexe("L2");
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 3){
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 5){
			mexe("U'");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 3){
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("L2");
			mexe("U2");
			mexe("L'");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 5){
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 3){
			mexe("U2");
			mexe("L");
			mexe("U'");
			mexe("L2");
			mexe("U2");
			mexe("L'");
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 5){
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 3){
			mexe("U'");
			mexe("L");
			mexe("U'");
			mexe("L2");
			mexe("U2");
			mexe("L'");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 5){
			mexe("U2");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 3){  //vem pra ca
			mexe("L'");
			mexe("U'");
			mexe("L2");
			mexe("U2");
			mexe("L'");
		}
	}
	
	if(branco.cores[0][0] == 5 && verde.cores[2][0] == 1 && vermelho.cores[2][2] == 3){
		if(vermelho.cores[1][0] == 3 && azul.cores[1][2] == 5){
			mexe("B'");
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("B");
			mexe("F'");
		}
		if(vermelho.cores[1][0] == 5 && azul.cores[1][2] == 3){
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("F");
			mexe("B'");
			mexe("U");
			mexe("F'");
			mexe("B");		
		}
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 5){
			mexe("L");
			mexe("F'");
			mexe("L'");
			mexe("F2");
			mexe("U'");
			mexe("F'");
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 3){
			mexe("L");
			mexe("F'");
			mexe("L'");
			mexe("F");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 5){
			mexe("U2");
			mexe("F");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 3){
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 5){
			mexe("U'");
			mexe("F");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("F'");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 3){
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 5){
			mexe("F");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("F'");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 3){
			mexe("U2");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 5){
			mexe("U");
			mexe("F");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("F'");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 3){
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
	}


	if(amarelo.cores[2][2] == 1 && verde.cores[0][2] == 3 && laranja.cores[0][0] == 5){
		if(vermelho.cores[1][0] == 3 && azul.cores[1][2] == 5){
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(vermelho.cores[1][0] == 5 && azul.cores[1][2] == 3){
			mexe("U2");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("B'");
			mexe("U2");
			mexe("B");		
		}
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 5){
			mexe("U");
			mexe("L2");
			mexe("B");
			mexe("L2");
			mexe("B'");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 3){
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("L");
			mexe("U");
			mexe("L2");
			mexe("B");
			mexe("L");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 5){
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 3){
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 5){
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("B'");
			mexe("U");
			mexe("B");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 3){
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L2");
			mexe("B");
			mexe("L");
			mexe("B'");
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 5){
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("B'");
			mexe("U");
			mexe("B");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 3){
			mexe("L");
			mexe("U");
			mexe("L2");
			mexe("B");
			mexe("L");
			mexe("B'");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 5){
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 3){
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("L2");
			mexe("U");
			mexe("L'");
		}
	}

	if(amarelo.cores[2][2] == 3 && verde.cores[0][2] == 5 && laranja.cores[0][0] == 1){
		if(vermelho.cores[1][0] == 3 && azul.cores[1][2] == 5){
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(vermelho.cores[1][0] == 5 && azul.cores[1][2] == 3){
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");		
		}
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 5){
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 3){
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 5){
			mexe("U2");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 3){
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 5){
			mexe("U'");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("U2");
			mexe("B");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 3){
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 5){
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("U2");
			mexe("B");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 3){
			mexe("U'");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 5){
			mexe("B'");
			mexe("U2");
			mexe("B");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 3){
			mexe("U'");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
	}
	
	if(amarelo.cores[2][2] == 5 && verde.cores[0][2] == 1 && laranja.cores[0][0] == 3){
		if(vermelho.cores[1][0] == 3 && azul.cores[1][2] == 5){
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(vermelho.cores[1][0] == 5 && azul.cores[1][2] == 3){
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("B'");
			mexe("U'");			
			mexe("B");
		}
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 5){
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 3){
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("L");
			mexe("U2");
			mexe("L'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 5){
			mexe("U");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 3){
			mexe("L");
			mexe("U2");
			mexe("L'");	
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 5){
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 3){
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L'");
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 5){
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 3){
			mexe("U");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L'");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 5){
			mexe("U'");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 3){
			mexe("U2");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
	}
	

	
	if(amarelo.cores[0][2] == 1 && azul.cores[0][0] == 5 && laranja.cores[0][2] == 3){
		if(vermelho.cores[1][0] == 3 && azul.cores[1][2] == 5){
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(vermelho.cores[1][0] == 5 && azul.cores[1][2] == 3){
			mexe("U'");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("B'");
			mexe("U2");
			mexe("B");		
		}
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 5){
			mexe("U2");
			mexe("L2");
			mexe("B");
			mexe("L2");
			mexe("B'");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 3){
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("L");
			mexe("U");
			mexe("L2");
			mexe("B");
			mexe("L");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 5){
			mexe("U2");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 3){
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("L2");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 5){
			mexe("U2");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 3){
			mexe("U2");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 5){
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("B'");
			mexe("U");
			mexe("B");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 3){
			mexe("L");
			mexe("U2");
			mexe("L2");
			mexe("B");
			mexe("L");
			mexe("B'");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 5){
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("B'");
			mexe("U");
			mexe("B");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 3){
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L2");
			mexe("B");
			mexe("L");
			mexe("B'");
		}
	}
	
	if(amarelo.cores[0][2] == 3 && azul.cores[0][0] == 1 && laranja.cores[0][2] == 5){
		if(vermelho.cores[1][0] == 3 && azul.cores[1][2] == 5){
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(vermelho.cores[1][0] == 5 && azul.cores[1][2] == 3){
			mexe("U");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");		
		}
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 5){
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 3){
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 5){
			mexe("U");
			mexe("B'");
			mexe("U2");
			mexe("B");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 3){
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 5){
			mexe("U'");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 3){
			mexe("U2");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 5){
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("U2");
			mexe("B");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 3){
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 5){
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("U2");
			mexe("B");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 3){
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
	}
	
	if(amarelo.cores[0][2] == 5 && azul.cores[0][0] == 3 && laranja.cores[0][2] == 1){
		if(vermelho.cores[1][0] == 3 && azul.cores[1][2] == 5){//dps pra ca
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(vermelho.cores[1][0] == 5 && azul.cores[1][2] == 3){
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("B'");
			mexe("U'");			
			mexe("B");
		}
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 5){
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 3){
			mexe("U");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("L");
			mexe("U2");
			mexe("L'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 5){
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 3){
			mexe("U'");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 5){
			mexe("U2");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 3){
			mexe("U");
			mexe("L");
			mexe("U2");
			mexe("L'");	
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 5){
			mexe("U2");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 3){
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L'");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 5){
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 3){
			mexe("U2");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L'");
		}
	}
	
	
	
	if(amarelo.cores[0][0] == 1 && azul.cores[0][2] == 3 && vermelho.cores[0][0] == 5){
		if(vermelho.cores[1][0] == 3 && azul.cores[1][2] == 5){
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(vermelho.cores[1][0] == 5 && azul.cores[1][2] == 3){
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("B'");
			mexe("U2");
			mexe("B");		
		}
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 5){
			mexe("U'");
			mexe("L2");
			mexe("B");
			mexe("L2");
			mexe("B'");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 3){
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("L");
			mexe("U");
			mexe("L2");
			mexe("B");
			mexe("L");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 5){
			mexe("U2");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("B'");
			mexe("U");
			mexe("B");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 3){
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L2");
			mexe("B");
			mexe("L");
			mexe("B'");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 5){
			mexe("U'");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 3){
			mexe("U2");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("L2");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 5){
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 3){
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 5){
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("B'");
			mexe("U");
			mexe("B");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 3){
			mexe("U");
			mexe("L");
			mexe("U2");
			mexe("L2");
			mexe("B");
			mexe("L");
			mexe("B'");
		}
	}
	
	if(amarelo.cores[0][0] == 3 && azul.cores[0][2] == 5 && vermelho.cores[0][0] == 1){
		if(vermelho.cores[1][0] == 3 && azul.cores[1][2] == 5){
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(vermelho.cores[1][0] == 5 && azul.cores[1][2] == 3){
			mexe("U2");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");		
		}
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 5){
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 3){
			mexe("U2");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 5){
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("U2");
			mexe("B");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 3){
			mexe("U");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 5){
			mexe("U2");
			mexe("B'");
			mexe("U2");
			mexe("B");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 3){
			mexe("U");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 5){
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 3){
			mexe("U'");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 5){
			mexe("U");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("U2");
			mexe("B");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 3){
			mexe("L");
			mexe("U");
			mexe("L'");
		}
	}
	
	if(amarelo.cores[0][0] == 5 && azul.cores[0][2] == 1 && vermelho.cores[0][0] == 3){
		if(vermelho.cores[1][0] == 3 && azul.cores[1][2] == 5){
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(vermelho.cores[1][0] == 5 && azul.cores[1][2] == 3){
			mexe("U2");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("B'");
			mexe("U'");			
			mexe("B");
		}
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 5){
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 3){
			mexe("U2");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("L");
			mexe("U2");
			mexe("L'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 5){
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 3){
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L'");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 5){
			mexe("U");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 3){
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 5){
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 3){
			mexe("U2");
			mexe("L");
			mexe("U2");
			mexe("L'");	
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 5){
			mexe("U'");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 3){
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L'");
		}
	}
	
	
	
	if(amarelo.cores[2][0] == 1 && verde.cores[0][0] == 5 && vermelho.cores[0][2] == 3){
		if(vermelho.cores[1][0] == 3 && azul.cores[1][2] == 5){
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(vermelho.cores[1][0] == 5 && azul.cores[1][2] == 3){
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("B'");
			mexe("U2");
			mexe("B");		
		}
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 5){
			mexe("L2");
			mexe("B");
			mexe("L2");
			mexe("B'");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 3){
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("L");
			mexe("U");
			mexe("L2");
			mexe("B");
			mexe("L");
			mexe("B'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 5){
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("B'");
			mexe("U");
			mexe("B");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 3){
			mexe("U2");
			mexe("L");
			mexe("U2");
			mexe("L2");
			mexe("B");
			mexe("L");
			mexe("B'");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 5){
			mexe("U'");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("B'");
			mexe("U");
			mexe("B");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 3){
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L2");
			mexe("B");
			mexe("L");
			mexe("B'");
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 5){
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 3){
			mexe("U'");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("L2");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 5){
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 3){
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
	}
	
	if(amarelo.cores[2][0] == 3 && verde.cores[0][0] == 1 && vermelho.cores[0][2] == 5){
		if(vermelho.cores[1][0] == 3 && azul.cores[1][2] == 5){
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(vermelho.cores[1][0] == 5 && azul.cores[1][2] == 3){
			mexe("U'");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");		
		}
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 5){
			mexe("U2");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 3){
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 5){
			mexe("U2");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("U2");
			mexe("B");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 3){
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 5){
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U");
			mexe("B'");
			mexe("U2");
			mexe("B");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 3){
			mexe("U2");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 5){
			mexe("U'");
			mexe("B'");
			mexe("U2");
			mexe("B");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 3){
			mexe("U2");
			mexe("B'");
			mexe("U2");
			mexe("B");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 5){
			mexe("U2");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 3){
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
	}
	
	if(amarelo.cores[2][0] == 5 && verde.cores[0][0] == 3 && vermelho.cores[0][2] == 1){
		if(vermelho.cores[1][0] == 3 && azul.cores[1][2] == 5){
			mexe("B'");
			mexe("U'");
			mexe("B");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(vermelho.cores[1][0] == 5 && azul.cores[1][2] == 3){
			mexe("U'");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("B'");
			mexe("U'");			
			mexe("B");
		}
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 5){
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U2");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 3){
			mexe("U'");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("L");
			mexe("U2");
			mexe("L'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 5){
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 3){
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L'");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 5){
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 3){
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L'");
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 5){
			mexe("U2");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U'");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 3){
			mexe("U");
			mexe("B'");
			mexe("U");
			mexe("B");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 5){
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U");
			mexe("B'");
			mexe("U'");
			mexe("B");
		}
		if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 3){
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L'");	
		}
	}
	printf("\n\n");
	//________________________________ F2L vermelho e verde ________________________________________________		


	if(branco.cores[0][0] == 1 && verde.cores[2][0] == 2 && vermelho.cores[2][2] == 3){
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 3){
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 2){
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 3){
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 2){
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 3){
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 2){
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 3){
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 2){
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 3){
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
	}

	if(branco.cores[0][0] == 2 && verde.cores[2][0] == 3 && vermelho.cores[2][2] == 1){
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 2){
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 3){
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 2){
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("F");
			mexe("U2");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 3){
			mexe("U'");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 2){
			mexe("U2");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("F");
			mexe("U2");
			mexe("F'");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 3){
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 2){
			mexe("U'");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("F");
			mexe("U2");
			mexe("F'");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 3){
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 2){
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("F");
			mexe("U2");
			mexe("F'");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 3){
			mexe("U2");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
	}
	
	if(branco.cores[0][0] == 3 && verde.cores[2][0] == 1 && vermelho.cores[2][2] == 2){	
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 2){
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 3){
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 2){
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 3){
			mexe("U2");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("L'");
			mexe("U2");
			mexe("L");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 2){
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 3){
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("L'");
			mexe("U2");
			mexe("L");
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 2){
			mexe("U2");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 3){
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("L'");
			mexe("U2");
			mexe("L");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 2){
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 3){
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("L'");
			mexe("U2");
			mexe("L");
		}
	}


	if(amarelo.cores[2][2] == 1 && verde.cores[0][2] == 2 && laranja.cores[0][0] == 3){	
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 2){
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("L");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 3){
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("F");
			mexe("U2");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 2){
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 3){
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("F");
			mexe("U2");
			mexe("F'");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 2){
			mexe("U2");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U'");
			mexe("F'");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 3){
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("L");		
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 2){
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U'");
			mexe("F'");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 3){
			mexe("L'");
			mexe("U2");
			mexe("L2");
			mexe("F'");
			mexe("L'");
			mexe("F");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 2){
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 3){
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
	}

	if(amarelo.cores[2][2] == 2 && verde.cores[0][2] == 3 && laranja.cores[0][0] == 1){	
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 2){
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 3){
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 2){
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 3){
			mexe("U");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 2){
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 3){
			mexe("U2");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");		
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 2){
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 3){
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 2){
			mexe("U2");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 3){
			mexe("L'");
			mexe("U");
			mexe("L");
		}
	}
	
	if(amarelo.cores[2][2] == 3 && verde.cores[0][2] == 1 && laranja.cores[0][0] == 2){	
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 2){
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 3){
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 2){
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 3){
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 2){
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 3){
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");		
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 2){
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 3){
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 2){
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 3){
			mexe("U2");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
	}
	

	
	if(amarelo.cores[0][2] == 1 && azul.cores[0][0] == 3 && laranja.cores[0][2] == 2){	
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 2){
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("L");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 3){
			mexe("U2");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("F");
			mexe("U2");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 2){
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 3){
			mexe("U2");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 2){
			mexe("U2");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 3){
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("F");
			mexe("U2");
			mexe("F'");	
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 2){
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U'");
			mexe("F'");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 3){
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("L");	
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 2){
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U'");
			mexe("F'");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 3){
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L2");
			mexe("F'");
			mexe("L'");
			mexe("F");
		}
	}
	
	if(amarelo.cores[0][2] == 2 && azul.cores[0][0] == 1 && laranja.cores[0][2] == 3){	
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 2){
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 3){
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 2){
			mexe("U'");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 3){
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("L");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 2){
			mexe("U");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 3){
			mexe("U2");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");	
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 2){
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 3){
			mexe("U'");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");	
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 2){
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 3){
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
		}
	}
	
	if(amarelo.cores[0][2] == 3 && azul.cores[0][0] == 2 && laranja.cores[0][2] == 1){	
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 2){
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 3){
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 2){
			mexe("U2");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 3){
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 2){
			mexe("F");
			mexe("U2");
			mexe("F'");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 3){
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");	
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 2){
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 3){
			mexe("U");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");	
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 2){
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 3){
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
	}
	
	
	
	if(amarelo.cores[0][0] == 1 && azul.cores[0][2] == 2 && vermelho.cores[0][0] == 3){	
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 2){
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("L");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 3){
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("F");
			mexe("U2");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 2){
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U'");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 3){
			mexe("U2");
			mexe("L'");
			mexe("U2");
			mexe("L2");
			mexe("F'");
			mexe("L'");
			mexe("F");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 2){
			mexe("U2");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 3){
			mexe("U'");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 2){
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 3){
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("F");
			mexe("U2");
			mexe("F'");	
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 2){
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U'");
			mexe("F'");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 3){
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("L");	
		}
	}
	
	if(amarelo.cores[0][0] == 2 && azul.cores[0][2] == 3 && vermelho.cores[0][0] == 1){	
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 2){
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 3){
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 2){
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 3){
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 2){
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 3){
			mexe("U2");
			mexe("L'");
			mexe("U");
			mexe("L");	
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 2){
			mexe("U2");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 3){
			mexe("U'");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");	
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 2){
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 3){
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
		}
	}

	if(amarelo.cores[0][0] == 3 && azul.cores[0][2] == 1 && vermelho.cores[0][0] == 2){ 
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 2){
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 3){
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 2){
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 3){
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 2){
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("F'");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 3){
			mexe("U2");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");	
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 2){
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 3){
			mexe("U2");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");	
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 2){
			mexe("U2");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 3){
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
	}
	
	
	
	if(amarelo.cores[2][0] == 1 && verde.cores[0][0] == 3 && vermelho.cores[0][2] == 2){ 
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 2){
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("L");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 3){
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("F");
			mexe("U2");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 2){
			mexe("U");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U'");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 3){
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("L");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 2){
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U'");
			mexe("F'");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 3){
			mexe("U'");
			mexe("L'");
			mexe("U2");
			mexe("L2");
			mexe("F'");
			mexe("L'");
			mexe("F");
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 2){
			mexe("U'");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 3){
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 2){
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 3){
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("F");
			mexe("U2");
			mexe("F'");		
		}
	}
	
	if(amarelo.cores[2][0] == 2 && verde.cores[0][0] == 1 && vermelho.cores[0][2] == 3){ 
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 2){
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 3){
			mexe("U2");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 2){
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 3){
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 2){
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 3){
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");	
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 2){
			mexe("U");
			mexe("L'");
			mexe("U2");
			mexe("L");
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 3){
			mexe("U'");
			mexe("L'");
			mexe("U");
			mexe("L");	
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 2){
			mexe("U'");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 3){
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
	}
	
	if(amarelo.cores[2][0] == 3 && verde.cores[0][0] == 2 && vermelho.cores[0][2] == 1){ 
		if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 2){
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("L");
			mexe("U2");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 3){
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 2){
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
		}
		if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 3){
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 2){
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U2");
			mexe("F");
			mexe("U");
			mexe("F'");
		}
		if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 3){
			mexe("U");
			mexe("L'");
			mexe("U");
			mexe("L");
			mexe("U'");
			mexe("L'");
			mexe("U'");
			mexe("L");	
		}
		if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 2){
			mexe("U2");
			mexe("F");
			mexe("U2");
			mexe("F'");
		}
		if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 3){
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");
		}
		if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 2){
			mexe("U'");
			mexe("F");
			mexe("U");
			mexe("F'");
			mexe("U'");
			mexe("F");
			mexe("U2");
			mexe("F'");
		}
		if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 3){
			mexe("U'");
			mexe("F");
			mexe("U'");
			mexe("F'");
			mexe("U");
			mexe("L'");
			mexe("U'");
			mexe("L");	
		}
	}
	
}

void fazCruz(){
//___________________________ VERDE E BRANCA ________________________________________________________
	if(branco.cores[1][2] == 1 && laranja.cores[2][1] == 2){
		mexe("D'");
	}
	if(branco.cores[2][1] == 1 && azul.cores[2][1] == 2){
		mexe("D2");
	}
	if(branco.cores[1][0] == 1 && vermelho.cores[2][1] == 2){
		mexe("D");
	}
	if(amarelo.cores[0][1] == 1 && azul.cores[0][1] == 2){
		mexe("U2");
		mexe("F2");
	}
	if(amarelo.cores[1][0] == 1 && vermelho.cores[0][1] == 2){
		mexe("U'");
		mexe("F2");
	}
	if(amarelo.cores[1][2] == 1 && laranja.cores[0][1] == 2){
		mexe("U");
		mexe("F2");
	}
	if(amarelo.cores[2][1] == 1 && verde.cores[0][1] == 2){
		mexe("F2");
	}
	if(branco.cores[1][2] == 2 && laranja.cores[2][1] == 1){
		mexe("R");
		mexe("F");
	}
	if(branco.cores[2][1] == 2 && azul.cores[2][1] == 1){
		mexe("D'");
		mexe("R");
		mexe("F");
	}
	if(branco.cores[1][0] == 2 && vermelho.cores[2][1] == 1){
		mexe("L'");
		mexe("F'");
	}
	if(branco.cores[0][1] == 2 && verde.cores[2][1] == 1){
		mexe("D");
		mexe("R");
		mexe("F");
	}
	if(amarelo.cores[0][1] == 2 && azul.cores[0][1] == 1){
		mexe("U");
		mexe("R'");
		mexe("F");
	}
	if(amarelo.cores[1][0] == 2 && vermelho.cores[0][1] == 1){
		mexe("L");
		mexe("F'");
	}
	if(amarelo.cores[1][2] == 2 && laranja.cores[0][1] == 1){
		mexe("R'");
		mexe("F");
	}
	if(amarelo.cores[2][1] == 2 && verde.cores[0][1] == 1){
		mexe("U");
		mexe("L");
		mexe("F'");
	}
	if(verde.cores[1][2] == 1 && laranja.cores[1][0] == 2){
		mexe("R'");
		mexe("D'");
	}
	if(laranja.cores[1][2] == 1 && azul.cores[1][0] == 2){
		mexe("B'");
		mexe("D2");
	}
	if(azul.cores[1][2] == 1 && vermelho.cores[1][0] == 2){
		mexe("L'");
		mexe("D");
	}
	if(vermelho.cores[1][2] == 1 && verde.cores[1][0] == 2){
		mexe("F'");
	}
	if(verde.cores[1][2] == 2 && laranja.cores[1][0] == 1){
		mexe("F");
	}
	if(laranja.cores[1][2] == 2 && azul.cores[1][0] == 1){
		mexe("R");
		mexe("D'");
	}
	if(azul.cores[1][2] == 2 && vermelho.cores[1][0] == 1){
		mexe("B");
		mexe("D2");
	}
	if(vermelho.cores[1][2] == 2 && verde.cores[1][0] == 1){
		mexe("L");
		mexe("D");
	}
//___________________________ LARANJA E BRANCA ______________________________________________________
	if(branco.cores[2][1] == 1 && azul.cores[2][1] == 4){
		mexe("B2");
		mexe("U");
		mexe("R2");
	}
	if(branco.cores[1][0] == 1 && vermelho.cores[2][1] == 4){
		mexe("L2");
		mexe("U2");
		mexe("R2");
	}
	if(amarelo.cores[0][1] == 1 && azul.cores[0][1] == 4){
		mexe("U");
		mexe("R2");
	}
	if(amarelo.cores[1][0] == 1 && vermelho.cores[0][1] == 4){
		mexe("U2");
		mexe("R2");
	}
	if(amarelo.cores[1][2] == 1 && laranja.cores[0][1] == 4){
		mexe("R2");
	}
	if(amarelo.cores[2][1] == 1 && verde.cores[0][1] == 4){
		mexe("U'");
		mexe("R2");
	}
	if(branco.cores[1][2] == 4 && laranja.cores[2][1] == 1){
		mexe("R");
		mexe("D'");
		mexe("F");
		mexe("D");		
	}
	if(branco.cores[2][1] == 4 && azul.cores[2][1] == 1){
		mexe("D'");
		mexe("R");
		mexe("F");
		mexe("D");
	}
	if(branco.cores[1][0] == 4 && vermelho.cores[2][1] == 1){
		mexe("L'");
		mexe("D'");
		mexe("F'");
		mexe("D");
	}
	if(amarelo.cores[0][1] == 4 && azul.cores[0][1] == 1){
		mexe("B'");
		mexe("R");
	}
	if(amarelo.cores[1][0] == 4 && vermelho.cores[0][1] == 1){
		mexe("U");
		mexe("B'");
		mexe("R");
	}
	if(amarelo.cores[1][2] == 4 && laranja.cores[0][1] == 1){
		mexe("U'");
		mexe("B'");
		mexe("R");
	}
	if(amarelo.cores[2][1] == 4 && verde.cores[0][1] == 1){
		mexe("U2");
		mexe("B'");
		mexe("R");
	}
	if(verde.cores[1][2] == 1 && laranja.cores[1][0] == 4){
		mexe("R'");
	}
	if(laranja.cores[1][2] == 1 && azul.cores[1][0] == 4){
		mexe("D");
		mexe("B'");
		mexe("D'");
	}
	if(azul.cores[1][2] == 1 && vermelho.cores[1][0] == 4){
		mexe("D2");
		mexe("L'");
		mexe("D2");
	}
	if(vermelho.cores[1][2] == 1 && verde.cores[1][0] == 4){
		mexe("D'");
		mexe("F'");
		mexe("D");
	}	
	if(verde.cores[1][2] == 4 && laranja.cores[1][0] == 1){
		mexe("D'");
		mexe("F");
		mexe("D");
	}
	if(laranja.cores[1][2] == 4 && azul.cores[1][0] == 1){
		mexe("R");
	}
	if(azul.cores[1][2] == 4 && vermelho.cores[1][0] == 1){
		mexe("D");
		mexe("B");
		mexe("D'");
	}
	if(vermelho.cores[1][2] == 4 && verde.cores[1][0] == 1){
		mexe("D2");
		mexe("L");
		mexe("D2");
	}
//___________________________ AZUL E BRANCA _________________________________________________________
	if(branco.cores[1][0] == 1 && vermelho.cores[2][1] == 5){
		mexe("L2");
		mexe("U");
		mexe("B2");
	}
	if(amarelo.cores[0][1] == 1 && azul.cores[0][1] == 5){
		mexe("B2");
	}
	if(amarelo.cores[1][0] == 1 && vermelho.cores[0][1] == 5){
		mexe("U");
		mexe("B2");
	}
	if(amarelo.cores[1][2] == 1 && laranja.cores[0][1] == 5){
		mexe("U'");
		mexe("B2");
	}
	if(amarelo.cores[2][1] == 1 && verde.cores[0][1] == 5){
		mexe("U2");
		mexe("B2");
	}
	if(branco.cores[2][1] == 5 && azul.cores[2][1] == 1){
		mexe("B'");
		mexe("D");
		mexe("L'");
		mexe("D'");
	}
	if(branco.cores[1][0] == 5 && vermelho.cores[2][1] == 1){
		mexe("L");
		mexe("B");
	}
	if(amarelo.cores[0][1] == 5 && azul.cores[0][1] == 1){
		mexe("U'");
		mexe("L'");
		mexe("B");
	}
	if(amarelo.cores[1][0] == 5 && vermelho.cores[0][1] == 1){
		mexe("L'");
		mexe("B");
	}
	if(amarelo.cores[1][2] == 5 && laranja.cores[0][1] == 1){
		mexe("U2");
		mexe("L'");
		mexe("B");
	}
	if(amarelo.cores[2][1] == 5 && verde.cores[0][1] == 1){
		mexe("U");
		mexe("L'");
		mexe("B");
	}
	if(verde.cores[1][2] == 1 && laranja.cores[1][0] == 5){
		mexe("D'");
		mexe("R'");
		mexe("D");
	}
	if(laranja.cores[1][2] == 1 && azul.cores[1][0] == 5){
		mexe("B'");
	}
	if(azul.cores[1][2] == 1 && vermelho.cores[1][0] == 5){
		mexe("D");
		mexe("L'");
		mexe("D'");
	}
	if(vermelho.cores[1][2] == 1 && verde.cores[1][0] == 5){
		mexe("D2");
		mexe("F'");
		mexe("D2");
	}
	if(verde.cores[1][2] == 5 && laranja.cores[1][0] == 1){
		mexe("D2");
		mexe("F");
		mexe("D2");
	}
	if(laranja.cores[1][2] == 5 && azul.cores[1][0] == 1){
		mexe("D'");
		mexe("R");
		mexe("D");
	}
	if(azul.cores[1][2] == 5 && vermelho.cores[1][0] == 1){
		mexe("B");
	}
	if(vermelho.cores[1][2] == 5 && verde.cores[1][0] == 1){
		mexe("D");
		mexe("L");
		mexe("D'");
	}
//___________________________ VERMELHO E BRANCA ______________________________________________________
	if(amarelo.cores[0][1] == 1 && azul.cores[0][1] == 3){
		mexe("U'");
		mexe("L2");
	}
	if(amarelo.cores[1][0] == 1 && vermelho.cores[0][1] == 3){
		mexe("L2");
	}
	if(amarelo.cores[1][2] == 1 && laranja.cores[0][1] == 3){
		mexe("U2");
		mexe("L2");
	}
	if(amarelo.cores[2][1] == 1 && verde.cores[0][1] == 3){
		mexe("U");
		mexe("L2");
	}
	if(branco.cores[1][0] == 3 && vermelho.cores[2][1] == 1){
		mexe("L");
		mexe("D'");
		mexe("B");
		mexe("D");
	}
	if(amarelo.cores[0][1] == 3 && azul.cores[0][1] == 1){
		mexe("B");
		mexe("L'");
		mexe("B'");
	}
	if(amarelo.cores[1][0] == 3 && vermelho.cores[0][1] == 1){
		mexe("U");
		mexe("B");
		mexe("L'");
		mexe("B'");
	}
	if(amarelo.cores[1][2] == 3 && laranja.cores[0][1] == 1){
		mexe("U'");
		mexe("B");
		mexe("L'");
		mexe("B'");
	}
	if(amarelo.cores[2][1] == 3 && verde.cores[0][1] == 1){
		mexe("F'");
		mexe("L");
		mexe("F");
	}
	if(verde.cores[1][2] == 1 && laranja.cores[1][0] == 3){
		mexe("D2");
		mexe("R'");
		mexe("D2");
	}
	if(laranja.cores[1][2] == 1 && azul.cores[1][0] == 3){
		mexe("D'");
		mexe("B'");
		mexe("D");
	}
	if(azul.cores[1][2] == 1 && vermelho.cores[1][0] == 3){
		mexe("L'");
	}
	if(vermelho.cores[1][2] == 1 && verde.cores[1][0] == 3){
		mexe("D");
		mexe("F'");
		mexe("D'");
	}
	if(verde.cores[1][2] == 3 && laranja.cores[1][0] == 1){
		mexe("D");
		mexe("F");
		mexe("D'");
	}
	if(laranja.cores[1][2] == 3 && azul.cores[1][0] == 1){
		mexe("D2");
		mexe("R");
		mexe("D2");
	}
	if(azul.cores[1][2] == 3 && vermelho.cores[1][0] == 1){
		mexe("D'");
		mexe("B");
		mexe("D");
	}
	if(vermelho.cores[1][2] == 3 && verde.cores[1][0] == 1){
		mexe("L");
	}
}

void mexe(char i[4]){
	int aux[3],auxf;

	if(strcmp(i,"R")==0){
		aux[0] = verde.cores[0][2];
		aux[1] = verde.cores[1][2];
		aux[2] = verde.cores[2][2];
		verde.cores[0][2] = branco.cores[0][2];
		verde.cores[1][2] = branco.cores[1][2];
		verde.cores[2][2] = branco.cores[2][2];
		branco.cores[0][2] = azul.cores[2][0];
		branco.cores[1][2] = azul.cores[1][0];
		branco.cores[2][2] = azul.cores[0][0];
		azul.cores[2][0] = amarelo.cores[0][2];
		azul.cores[1][0] = amarelo.cores[1][2];
		azul.cores[0][0] = amarelo.cores[2][2];
		amarelo.cores[0][2] = aux[0];
		amarelo.cores[1][2] = aux[1];
		amarelo.cores[2][2] = aux[2];
		auxf = laranja.cores[0][0];
		laranja.cores[0][0] = laranja.cores[2][0];
		laranja.cores[2][0] = laranja.cores[2][2];
		laranja.cores[2][2] = laranja.cores[0][2]; 
		laranja.cores[0][2] = auxf;
		auxf = laranja.cores[0][1];
		laranja.cores[0][1] = laranja.cores[1][0];
		laranja.cores[1][0] = laranja.cores[2][1]; 
		laranja.cores[2][1] = laranja.cores[1][2];
		laranja.cores[1][2] = auxf;
	}
	if(strcmp(i,"R'")==0){
		aux[0] = verde.cores[0][2];
		aux[1] = verde.cores[1][2];
		aux[2] = verde.cores[2][2];
		verde.cores[0][2] = amarelo.cores[0][2];
		verde.cores[1][2] = amarelo.cores[1][2];
		verde.cores[2][2] = amarelo.cores[2][2];
		amarelo.cores[0][2] = azul.cores[2][0];
		amarelo.cores[1][2] = azul.cores[1][0];
		amarelo.cores[2][2] = azul.cores[0][0];
		azul.cores[2][0] = branco.cores[0][2];
		azul.cores[1][0] = branco.cores[1][2];
		azul.cores[0][0] = branco.cores[2][2];
		branco.cores[0][2] = aux[0];
		branco.cores[1][2] = aux[1];
		branco.cores[2][2] = aux[2];
		auxf = laranja.cores[0][0];
		laranja.cores[0][0] = laranja.cores[0][2];
		laranja.cores[0][2] = laranja.cores[2][2];
		laranja.cores[2][2] = laranja.cores[2][0]; 
		laranja.cores[2][0] = auxf;
		auxf = laranja.cores[0][1];
		laranja.cores[0][1] = laranja.cores[1][2];
		laranja.cores[1][2] = laranja.cores[2][1]; 
		laranja.cores[2][1] = laranja.cores[1][0];
		laranja.cores[1][0] = auxf;
	}
	if(strcmp(i,"R2")==0){
		aux[0] = verde.cores[0][2];
		aux[1] = verde.cores[1][2];
		aux[2] = verde.cores[2][2];
		verde.cores[0][2] = branco.cores[0][2];
		verde.cores[1][2] = branco.cores[1][2];
		verde.cores[2][2] = branco.cores[2][2];
		branco.cores[0][2] = azul.cores[2][0];
		branco.cores[1][2] = azul.cores[1][0];
		branco.cores[2][2] = azul.cores[0][0];
		azul.cores[2][0] = amarelo.cores[0][2];
		azul.cores[1][0] = amarelo.cores[1][2];
		azul.cores[0][0] = amarelo.cores[2][2];
		amarelo.cores[0][2] = aux[0];
		amarelo.cores[1][2] = aux[1];
		amarelo.cores[2][2] = aux[2];
		auxf = laranja.cores[0][0];
		laranja.cores[0][0] = laranja.cores[2][0];
		laranja.cores[2][0] = laranja.cores[2][2];
		laranja.cores[2][2] = laranja.cores[0][2]; 
		laranja.cores[0][2] = auxf;
		auxf = laranja.cores[0][1];
		laranja.cores[0][1] = laranja.cores[1][0];
		laranja.cores[1][0] = laranja.cores[2][1]; 
		laranja.cores[2][1] = laranja.cores[1][2];
		laranja.cores[1][2] = auxf;	aux[0] = verde.cores[0][2];
		aux[1] = verde.cores[1][2];
		aux[2] = verde.cores[2][2];
		verde.cores[0][2] = branco.cores[0][2];
		verde.cores[1][2] = branco.cores[1][2];
		verde.cores[2][2] = branco.cores[2][2];
		branco.cores[0][2] = azul.cores[2][0];
		branco.cores[1][2] = azul.cores[1][0];
		branco.cores[2][2] = azul.cores[0][0];
		azul.cores[2][0] = amarelo.cores[0][2];
		azul.cores[1][0] = amarelo.cores[1][2];
		azul.cores[0][0] = amarelo.cores[2][2];
		amarelo.cores[0][2] = aux[0];
		amarelo.cores[1][2] = aux[1];
		amarelo.cores[2][2] = aux[2];
		auxf = laranja.cores[0][0];
		laranja.cores[0][0] = laranja.cores[2][0];
		laranja.cores[2][0] = laranja.cores[2][2];
		laranja.cores[2][2] = laranja.cores[0][2]; 
		laranja.cores[0][2] = auxf;
		auxf = laranja.cores[0][1];
		laranja.cores[0][1] = laranja.cores[1][0];
		laranja.cores[1][0] = laranja.cores[2][1]; 
		laranja.cores[2][1] = laranja.cores[1][2];
		laranja.cores[1][2] = auxf;
	}
	if(strcmp(i,"L")==0){
		aux[0] = verde.cores[0][0];
		aux[1] = verde.cores[1][0];
		aux[2] = verde.cores[2][0];
		verde.cores[0][0] = amarelo.cores[0][0];
		verde.cores[1][0] = amarelo.cores[1][0];
		verde.cores[2][0] = amarelo.cores[2][0];
		amarelo.cores[0][0] = azul.cores[2][2];
		amarelo.cores[1][0] = azul.cores[1][2];
		amarelo.cores[2][0] = azul.cores[0][2];
		azul.cores[2][2] = branco.cores[0][0];
		azul.cores[1][2] = branco.cores[1][0];
		azul.cores[0][2] = branco.cores[2][0];
		branco.cores[0][0] = aux[0];
		branco.cores[1][0] = aux[1];
		branco.cores[2][0] = aux[2];
		auxf = vermelho.cores[0][0];
		vermelho.cores[0][0] = vermelho.cores[2][0];
		vermelho.cores[2][0] = vermelho.cores[2][2];
		vermelho.cores[2][2] = vermelho.cores[0][2]; 
		vermelho.cores[0][2] = auxf;
		auxf = vermelho.cores[0][1];
		vermelho.cores[0][1] = vermelho.cores[1][0];
		vermelho.cores[1][0] = vermelho.cores[2][1]; 
		vermelho.cores[2][1] = vermelho.cores[1][2];
		vermelho.cores[1][2] = auxf;	
	}
	if(strcmp(i,"L'")==0){
		aux[0] = verde.cores[0][0];
		aux[1] = verde.cores[1][0];
		aux[2] = verde.cores[2][0];
		verde.cores[0][0] = branco.cores[0][0];
		verde.cores[1][0] = branco.cores[1][0];
		verde.cores[2][0] = branco.cores[2][0];
		branco.cores[0][0] = azul.cores[2][2];
		branco.cores[1][0] = azul.cores[1][2];
		branco.cores[2][0] = azul.cores[0][2];
		azul.cores[2][2] = amarelo.cores[0][0];
		azul.cores[1][2] = amarelo.cores[1][0];
		azul.cores[0][2] = amarelo.cores[2][0];
		amarelo.cores[0][0] = aux[0];
		amarelo.cores[1][0] = aux[1];
		amarelo.cores[2][0] = aux[2];
		auxf = vermelho.cores[0][0];
		vermelho.cores[0][0] = vermelho.cores[0][2];
		vermelho.cores[0][2] = vermelho.cores[2][2];
		vermelho.cores[2][2] = vermelho.cores[2][0]; 
		vermelho.cores[2][0] = auxf;
		auxf = vermelho.cores[0][1];
		vermelho.cores[0][1] = vermelho.cores[1][2];
		vermelho.cores[1][2] = vermelho.cores[2][1]; 
		vermelho.cores[2][1] = vermelho.cores[1][0];
		vermelho.cores[1][0] = auxf;
	}
	if(strcmp(i,"L2")==0){
		aux[0] = verde.cores[0][0];
		aux[1] = verde.cores[1][0];
		aux[2] = verde.cores[2][0];
		verde.cores[0][0] = amarelo.cores[0][0];
		verde.cores[1][0] = amarelo.cores[1][0];
		verde.cores[2][0] = amarelo.cores[2][0];
		amarelo.cores[0][0] = azul.cores[2][2];
		amarelo.cores[1][0] = azul.cores[1][2];
		amarelo.cores[2][0] = azul.cores[0][2];
		azul.cores[2][2] = branco.cores[0][0];
		azul.cores[1][2] = branco.cores[1][0];
		azul.cores[0][2] = branco.cores[2][0];
		branco.cores[0][0] = aux[0];
		branco.cores[1][0] = aux[1];
		branco.cores[2][0] = aux[2];
		auxf = vermelho.cores[0][0];
		vermelho.cores[0][0] = vermelho.cores[2][0];
		vermelho.cores[2][0] = vermelho.cores[2][2];
		vermelho.cores[2][2] = vermelho.cores[0][2]; 
		vermelho.cores[0][2] = auxf;
		auxf = vermelho.cores[0][1];
		vermelho.cores[0][1] = vermelho.cores[1][0];
		vermelho.cores[1][0] = vermelho.cores[2][1]; 
		vermelho.cores[2][1] = vermelho.cores[1][2];
		vermelho.cores[1][2] = auxf;
		aux[0] = verde.cores[0][0];
		aux[1] = verde.cores[1][0];
		aux[2] = verde.cores[2][0];
		verde.cores[0][0] = amarelo.cores[0][0];
		verde.cores[1][0] = amarelo.cores[1][0];
		verde.cores[2][0] = amarelo.cores[2][0];
		amarelo.cores[0][0] = azul.cores[2][2];
		amarelo.cores[1][0] = azul.cores[1][2];
		amarelo.cores[2][0] = azul.cores[0][2];
		azul.cores[2][2] = branco.cores[0][0];
		azul.cores[1][2] = branco.cores[1][0];
		azul.cores[0][2] = branco.cores[2][0];
		branco.cores[0][0] = aux[0];
		branco.cores[1][0] = aux[1];
		branco.cores[2][0] = aux[2];
		auxf = vermelho.cores[0][0];
		vermelho.cores[0][0] = vermelho.cores[2][0];
		vermelho.cores[2][0] = vermelho.cores[2][2];
		vermelho.cores[2][2] = vermelho.cores[0][2]; 
		vermelho.cores[0][2] = auxf;
		auxf = vermelho.cores[0][1];
		vermelho.cores[0][1] = vermelho.cores[1][0];
		vermelho.cores[1][0] = vermelho.cores[2][1]; 
		vermelho.cores[2][1] = vermelho.cores[1][2];
		vermelho.cores[1][2] = auxf;
	}
	if(strcmp(i,"F")==0){
		aux[0] = amarelo.cores[2][0];
		aux[1] = amarelo.cores[2][1];
		aux[2] = amarelo.cores[2][2];
		amarelo.cores[2][0] = vermelho.cores[2][2];
		amarelo.cores[2][1] = vermelho.cores[1][2];
		amarelo.cores[2][2] = vermelho.cores[0][2];
		vermelho.cores[0][2] = branco.cores[0][0];
		vermelho.cores[1][2] = branco.cores[0][1];
		vermelho.cores[2][2] = branco.cores[0][2];
		branco.cores[0][0] = laranja.cores[2][0];
		branco.cores[0][1] = laranja.cores[1][0];
		branco.cores[0][2] = laranja.cores[0][0];
		laranja.cores[0][0] = aux[0];
		laranja.cores[1][0] = aux[1];
		laranja.cores[2][0] = aux[2];
		auxf = verde.cores[0][0];
		verde.cores[0][0] = verde.cores[2][0];
		verde.cores[2][0] = verde.cores[2][2];
		verde.cores[2][2] = verde.cores[0][2]; 
		verde.cores[0][2] = auxf;
		auxf = verde.cores[0][1];
		verde.cores[0][1] = verde.cores[1][0];
		verde.cores[1][0] = verde.cores[2][1]; 
		verde.cores[2][1] = verde.cores[1][2];
		verde.cores[1][2] = auxf;
	}
	if(strcmp(i,"F'")==0){
		aux[0] = amarelo.cores[2][0];
		aux[1] = amarelo.cores[2][1];
		aux[2] = amarelo.cores[2][2];
		amarelo.cores[2][0] = laranja.cores[0][0];
		amarelo.cores[2][1] = laranja.cores[1][0];
		amarelo.cores[2][2] = laranja.cores[2][0];
		laranja.cores[0][0] = branco.cores[0][2];
		laranja.cores[1][0] = branco.cores[0][1];
		laranja.cores[2][0] = branco.cores[0][0];
		branco.cores[0][0] = vermelho.cores[0][2];
		branco.cores[0][1] = vermelho.cores[1][2];
		branco.cores[0][2] = vermelho.cores[2][2];
		vermelho.cores[0][2] = aux[2];
		vermelho.cores[1][2] = aux[1];
		vermelho.cores[2][2] = aux[0];
		auxf = verde.cores[0][0];
		verde.cores[0][0] = verde.cores[0][2];
		verde.cores[0][2] = verde.cores[2][2];
		verde.cores[2][2] = verde.cores[2][0]; 
		verde.cores[2][0] = auxf;
		auxf = verde.cores[0][1];
		verde.cores[0][1] = verde.cores[1][2];
		verde.cores[1][2] = verde.cores[2][1]; 
		verde.cores[2][1] = verde.cores[1][0];
		verde.cores[1][0] = auxf;
	}
	if(strcmp(i,"F2")==0){
		aux[0] = amarelo.cores[2][0];
		aux[1] = amarelo.cores[2][1];
		aux[2] = amarelo.cores[2][2];
		amarelo.cores[2][0] = vermelho.cores[2][2];
		amarelo.cores[2][1] = vermelho.cores[1][2];
		amarelo.cores[2][2] = vermelho.cores[0][2];
		vermelho.cores[0][2] = branco.cores[0][0];
		vermelho.cores[1][2] = branco.cores[0][1];
		vermelho.cores[2][2] = branco.cores[0][2];
		branco.cores[0][0] = laranja.cores[2][0];
		branco.cores[0][1] = laranja.cores[1][0];
		branco.cores[0][2] = laranja.cores[0][0];
		laranja.cores[0][0] = aux[0];
		laranja.cores[1][0] = aux[1];
		laranja.cores[2][0] = aux[2];
		auxf = verde.cores[0][0];
		verde.cores[0][0] = verde.cores[2][0];
		verde.cores[2][0] = verde.cores[2][2];
		verde.cores[2][2] = verde.cores[0][2]; 
		verde.cores[0][2] = auxf;
		auxf = verde.cores[0][1];
		verde.cores[0][1] = verde.cores[1][0];
		verde.cores[1][0] = verde.cores[2][1]; 
		verde.cores[2][1] = verde.cores[1][2];
		verde.cores[1][2] = auxf;
		aux[0] = amarelo.cores[2][0];
		aux[1] = amarelo.cores[2][1];
		aux[2] = amarelo.cores[2][2];
		amarelo.cores[2][0] = vermelho.cores[2][2];
		amarelo.cores[2][1] = vermelho.cores[1][2];
		amarelo.cores[2][2] = vermelho.cores[0][2];
		vermelho.cores[0][2] = branco.cores[0][0];
		vermelho.cores[1][2] = branco.cores[0][1];
		vermelho.cores[2][2] = branco.cores[0][2];
		branco.cores[0][0] = laranja.cores[2][0];
		branco.cores[0][1] = laranja.cores[1][0];
		branco.cores[0][2] = laranja.cores[0][0];
		laranja.cores[0][0] = aux[0];
		laranja.cores[1][0] = aux[1];
		laranja.cores[2][0] = aux[2];
		auxf = verde.cores[0][0];
		verde.cores[0][0] = verde.cores[2][0];
		verde.cores[2][0] = verde.cores[2][2];
		verde.cores[2][2] = verde.cores[0][2]; 
		verde.cores[0][2] = auxf;
		auxf = verde.cores[0][1];
		verde.cores[0][1] = verde.cores[1][0];
		verde.cores[1][0] = verde.cores[2][1]; 
		verde.cores[2][1] = verde.cores[1][2];
		verde.cores[1][2] = auxf;
	}
	if(strcmp(i,"B")==0){
		aux[0] = amarelo.cores[0][0];
		aux[1] = amarelo.cores[0][1];
		aux[2] = amarelo.cores[0][2];
		amarelo.cores[0][0] = laranja.cores[0][2];
		amarelo.cores[0][1] = laranja.cores[1][2];
		amarelo.cores[0][2] = laranja.cores[2][2];
		laranja.cores[0][2] = branco.cores[2][2];
		laranja.cores[1][2] = branco.cores[2][1];
		laranja.cores[2][2] = branco.cores[2][0];
		branco.cores[2][0] = vermelho.cores[0][0];
		branco.cores[2][1] = vermelho.cores[1][0];
		branco.cores[2][2] = vermelho.cores[2][0];
		vermelho.cores[0][0] = aux[2];
		vermelho.cores[1][0] = aux[1];
		vermelho.cores[2][0] = aux[0];
		auxf = azul.cores[0][0];
		azul.cores[0][0] = azul.cores[2][0];
		azul.cores[2][0] = azul.cores[2][2];
		azul.cores[2][2] = azul.cores[0][2]; 
		azul.cores[0][2] = auxf;
		auxf = azul.cores[0][1];
		azul.cores[0][1] = azul.cores[1][0];
		azul.cores[1][0] = azul.cores[2][1]; 
		azul.cores[2][1] = azul.cores[1][2];
		azul.cores[1][2] = auxf;
	}
	if(strcmp(i,"B'")==0){
		aux[0] = amarelo.cores[0][0];
		aux[1] = amarelo.cores[0][1];
		aux[2] = amarelo.cores[0][2];
		amarelo.cores[0][0] = vermelho.cores[2][0];
		amarelo.cores[0][1] = vermelho.cores[1][0];
		amarelo.cores[0][2] = vermelho.cores[0][0];
		vermelho.cores[0][0] = branco.cores[2][0];
		vermelho.cores[1][0] = branco.cores[2][1];
		vermelho.cores[2][0] = branco.cores[2][2];
		branco.cores[2][0] = laranja.cores[2][2];
		branco.cores[2][1] = laranja.cores[1][2];
		branco.cores[2][2] = laranja.cores[0][2];
		laranja.cores[0][2] = aux[0];
		laranja.cores[1][2] = aux[1];
		laranja.cores[2][2] = aux[2];
		auxf = azul.cores[0][0];
		azul.cores[0][0] = azul.cores[0][2];
		azul.cores[0][2] = azul.cores[2][2];
		azul.cores[2][2] = azul.cores[2][0]; 
		azul.cores[2][0] = auxf;
		auxf = azul.cores[0][1];
		azul.cores[0][1] = azul.cores[1][2];
		azul.cores[1][2] = azul.cores[2][1]; 
		azul.cores[2][1] = azul.cores[1][0];
		azul.cores[1][0] = auxf;

	}
	if(strcmp(i,"B2")==0){
		aux[0] = amarelo.cores[0][0];
		aux[1] = amarelo.cores[0][1];
		aux[2] = amarelo.cores[0][2];
		amarelo.cores[0][0] = laranja.cores[0][2];
		amarelo.cores[0][1] = laranja.cores[1][2];
		amarelo.cores[0][2] = laranja.cores[2][2];
		laranja.cores[0][2] = branco.cores[2][2];
		laranja.cores[1][2] = branco.cores[2][1];
		laranja.cores[2][2] = branco.cores[2][0];
		branco.cores[2][0] = vermelho.cores[0][0];
		branco.cores[2][1] = vermelho.cores[1][0];
		branco.cores[2][2] = vermelho.cores[2][0];
		vermelho.cores[0][0] = aux[2];
		vermelho.cores[1][0] = aux[1];
		vermelho.cores[2][0] = aux[0];
		auxf = azul.cores[0][0];
		azul.cores[0][0] = azul.cores[2][0];
		azul.cores[2][0] = azul.cores[2][2];
		azul.cores[2][2] = azul.cores[0][2]; 
		azul.cores[0][2] = auxf;
		auxf = azul.cores[0][1];
		azul.cores[0][1] = azul.cores[1][0];
		azul.cores[1][0] = azul.cores[2][1]; 
		azul.cores[2][1] = azul.cores[1][2];
		azul.cores[1][2] = auxf;
		aux[0] = amarelo.cores[0][0];
		aux[1] = amarelo.cores[0][1];
		aux[2] = amarelo.cores[0][2];
		amarelo.cores[0][0] = laranja.cores[0][2];
		amarelo.cores[0][1] = laranja.cores[1][2];
		amarelo.cores[0][2] = laranja.cores[2][2];
		laranja.cores[0][2] = branco.cores[2][2];
		laranja.cores[1][2] = branco.cores[2][1];
		laranja.cores[2][2] = branco.cores[2][0];
		branco.cores[2][0] = vermelho.cores[0][0];
		branco.cores[2][1] = vermelho.cores[1][0];
		branco.cores[2][2] = vermelho.cores[2][0];
		vermelho.cores[0][0] = aux[2];
		vermelho.cores[1][0] = aux[1];
		vermelho.cores[2][0] = aux[0];
		auxf = azul.cores[0][0];
		azul.cores[0][0] = azul.cores[2][0];
		azul.cores[2][0] = azul.cores[2][2];
		azul.cores[2][2] = azul.cores[0][2]; 
		azul.cores[0][2] = auxf;
		auxf = azul.cores[0][1];
		azul.cores[0][1] = azul.cores[1][0];
		azul.cores[1][0] = azul.cores[2][1]; 
		azul.cores[2][1] = azul.cores[1][2];
		azul.cores[1][2] = auxf;
	}
	if(strcmp(i,"U")==0){
		aux[0] = verde.cores[0][0];
		aux[1] = verde.cores[0][1];
		aux[2] = verde.cores[0][2];
		verde.cores[0][0] = laranja.cores[0][0];
		verde.cores[0][1] = laranja.cores[0][1];
		verde.cores[0][2] = laranja.cores[0][2];
		laranja.cores[0][0] = azul.cores[0][0];
		laranja.cores[0][1] = azul.cores[0][1];
		laranja.cores[0][2] = azul.cores[0][2];
		azul.cores[0][0] = vermelho.cores[0][0];
		azul.cores[0][1] = vermelho.cores[0][1];
		azul.cores[0][2] = vermelho.cores[0][2];
		vermelho.cores[0][0] = aux[0];
		vermelho.cores[0][1] = aux[1];
		vermelho.cores[0][2] = aux[2];
		auxf = amarelo.cores[0][0];
		amarelo.cores[0][0] = amarelo.cores[2][0];
		amarelo.cores[2][0] = amarelo.cores[2][2];
		amarelo.cores[2][2] = amarelo.cores[0][2]; 
		amarelo.cores[0][2] = auxf;
		auxf = amarelo.cores[0][1];
		amarelo.cores[0][1] = amarelo.cores[1][0];
		amarelo.cores[1][0] = amarelo.cores[2][1]; 
		amarelo.cores[2][1] = amarelo.cores[1][2];
		amarelo.cores[1][2] = auxf;
	}
	if(strcmp(i,"U'")==0){
		aux[0] = verde.cores[0][0];
		aux[1] = verde.cores[0][1];
		aux[2] = verde.cores[0][2];
		verde.cores[0][0] = vermelho.cores[0][0];
		verde.cores[0][1] = vermelho.cores[0][1];
		verde.cores[0][2] = vermelho.cores[0][2];
		vermelho.cores[0][0] = azul.cores[0][0];
		vermelho.cores[0][1] = azul.cores[0][1];
		vermelho.cores[0][2] = azul.cores[0][2];
		azul.cores[0][0] = laranja.cores[0][0];
		azul.cores[0][1] = laranja.cores[0][1];
		azul.cores[0][2] = laranja.cores[0][2];
		laranja.cores[0][0] = aux[0];
		laranja.cores[0][1] = aux[1];
		laranja.cores[0][2] = aux[2];
		auxf = amarelo.cores[0][0];
		amarelo.cores[0][0] = amarelo.cores[0][2];
		amarelo.cores[0][2] = amarelo.cores[2][2];
		amarelo.cores[2][2] = amarelo.cores[2][0]; 
		amarelo.cores[2][0] = auxf;
		auxf = amarelo.cores[0][1];
		amarelo.cores[0][1] = amarelo.cores[1][2];
		amarelo.cores[1][2] = amarelo.cores[2][1]; 
		amarelo.cores[2][1] = amarelo.cores[1][0];
		amarelo.cores[1][0] = auxf;
	}
	if(strcmp(i,"U2")==0){
		aux[0] = verde.cores[0][0];
		aux[1] = verde.cores[0][1];
		aux[2] = verde.cores[0][2];
		verde.cores[0][0] = laranja.cores[0][0];
		verde.cores[0][1] = laranja.cores[0][1];
		verde.cores[0][2] = laranja.cores[0][2];
		laranja.cores[0][0] = azul.cores[0][0];
		laranja.cores[0][1] = azul.cores[0][1];
		laranja.cores[0][2] = azul.cores[0][2];
		azul.cores[0][0] = vermelho.cores[0][0];
		azul.cores[0][1] = vermelho.cores[0][1];
		azul.cores[0][2] = vermelho.cores[0][2];
		vermelho.cores[0][0] = aux[0];
		vermelho.cores[0][1] = aux[1];
		vermelho.cores[0][2] = aux[2];
		auxf = amarelo.cores[0][0];
		amarelo.cores[0][0] = amarelo.cores[2][0];
		amarelo.cores[2][0] = amarelo.cores[2][2];
		amarelo.cores[2][2] = amarelo.cores[0][2]; 
		amarelo.cores[0][2] = auxf;
		auxf = amarelo.cores[0][1];
		amarelo.cores[0][1] = amarelo.cores[1][0];
		amarelo.cores[1][0] = amarelo.cores[2][1]; 
		amarelo.cores[2][1] = amarelo.cores[1][2];
		amarelo.cores[1][2] = auxf;
		aux[0] = verde.cores[0][0];
		aux[1] = verde.cores[0][1];
		aux[2] = verde.cores[0][2];
		verde.cores[0][0] = laranja.cores[0][0];
		verde.cores[0][1] = laranja.cores[0][1];
		verde.cores[0][2] = laranja.cores[0][2];
		laranja.cores[0][0] = azul.cores[0][0];
		laranja.cores[0][1] = azul.cores[0][1];
		laranja.cores[0][2] = azul.cores[0][2];
		azul.cores[0][0] = vermelho.cores[0][0];
		azul.cores[0][1] = vermelho.cores[0][1];
		azul.cores[0][2] = vermelho.cores[0][2];
		vermelho.cores[0][0] = aux[0];
		vermelho.cores[0][1] = aux[1];
		vermelho.cores[0][2] = aux[2];
		auxf = amarelo.cores[0][0];
		amarelo.cores[0][0] = amarelo.cores[2][0];
		amarelo.cores[2][0] = amarelo.cores[2][2];
		amarelo.cores[2][2] = amarelo.cores[0][2]; 
		amarelo.cores[0][2] = auxf;
		auxf = amarelo.cores[0][1];
		amarelo.cores[0][1] = amarelo.cores[1][0];
		amarelo.cores[1][0] = amarelo.cores[2][1]; 
		amarelo.cores[2][1] = amarelo.cores[1][2];
		amarelo.cores[1][2] = auxf;
	}
	if(strcmp(i,"D")==0){
		aux[0] = verde.cores[2][0];
		aux[1] = verde.cores[2][1];
		aux[2] = verde.cores[2][2];
		verde.cores[2][0] = vermelho.cores[2][0];
		verde.cores[2][1] = vermelho.cores[2][1];
		verde.cores[2][2] = vermelho.cores[2][2];
		vermelho.cores[2][0] = azul.cores[2][0];
		vermelho.cores[2][1] = azul.cores[2][1];
		vermelho.cores[2][2] = azul.cores[2][2];
		azul.cores[2][0] = laranja.cores[2][0];
		azul.cores[2][1] = laranja.cores[2][1];
		azul.cores[2][2] = laranja.cores[2][2];
		laranja.cores[2][0] = aux[0];
		laranja.cores[2][1] = aux[1];
		laranja.cores[2][2] = aux[2];
		auxf = branco.cores[0][0];
		branco.cores[0][0] = branco.cores[2][0];
		branco.cores[2][0] = branco.cores[2][2];
		branco.cores[2][2] = branco.cores[0][2]; 
		branco.cores[0][2] = auxf;
		auxf = branco.cores[0][1];
		branco.cores[0][1] = branco.cores[1][0];
		branco.cores[1][0] = branco.cores[2][1]; 
		branco.cores[2][1] = branco.cores[1][2];
		branco.cores[1][2] = auxf;
	}
	if(strcmp(i,"D'")==0){	
		aux[0] = verde.cores[2][0];
		aux[1] = verde.cores[2][1];
		aux[2] = verde.cores[2][2];
		verde.cores[2][0] = laranja.cores[2][0];
		verde.cores[2][1] = laranja.cores[2][1];
		verde.cores[2][2] = laranja.cores[2][2];
		laranja.cores[2][0] = azul.cores[2][0];
		laranja.cores[2][1] = azul.cores[2][1];
		laranja.cores[2][2] = azul.cores[2][2];
		azul.cores[2][0] = vermelho.cores[2][0];
		azul.cores[2][1] = vermelho.cores[2][1];
		azul.cores[2][2] = vermelho.cores[2][2];
		vermelho.cores[2][0] = aux[0];
		vermelho.cores[2][1] = aux[1];
		vermelho.cores[2][2] = aux[2];
		auxf = branco.cores[0][0];
		branco.cores[0][0] = branco.cores[0][2];
		branco.cores[0][2] = branco.cores[2][2];
		branco.cores[2][2] = branco.cores[2][0]; 
		branco.cores[2][0] = auxf;
		auxf = branco.cores[0][1];
		branco.cores[0][1] = branco.cores[1][2];
		branco.cores[1][2] = branco.cores[2][1]; 
		branco.cores[2][1] = branco.cores[1][0];
		branco.cores[1][0] = auxf;
	}
	if(strcmp(i,"D2")==0){
		aux[0] = verde.cores[2][0];
		aux[1] = verde.cores[2][1];
		aux[2] = verde.cores[2][2];
		verde.cores[2][0] = vermelho.cores[2][0];
		verde.cores[2][1] = vermelho.cores[2][1];
		verde.cores[2][2] = vermelho.cores[2][2];
		vermelho.cores[2][0] = azul.cores[2][0];
		vermelho.cores[2][1] = azul.cores[2][1];
		vermelho.cores[2][2] = azul.cores[2][2];
		azul.cores[2][0] = laranja.cores[2][0];
		azul.cores[2][1] = laranja.cores[2][1];
		azul.cores[2][2] = laranja.cores[2][2];
		laranja.cores[2][0] = aux[0];
		laranja.cores[2][1] = aux[1];
		laranja.cores[2][2] = aux[2];
		auxf = branco.cores[0][0];
		branco.cores[0][0] = branco.cores[2][0];
		branco.cores[2][0] = branco.cores[2][2];
		branco.cores[2][2] = branco.cores[0][2]; 
		branco.cores[0][2] = auxf;
		auxf = branco.cores[0][1];
		branco.cores[0][1] = branco.cores[1][0];
		branco.cores[1][0] = branco.cores[2][1]; 
		branco.cores[2][1] = branco.cores[1][2];
		branco.cores[1][2] = auxf;
		aux[0] = verde.cores[2][0];
		aux[1] = verde.cores[2][1];
		aux[2] = verde.cores[2][2];
		verde.cores[2][0] = vermelho.cores[2][0];
		verde.cores[2][1] = vermelho.cores[2][1];
		verde.cores[2][2] = vermelho.cores[2][2];
		vermelho.cores[2][0] = azul.cores[2][0];
		vermelho.cores[2][1] = azul.cores[2][1];
		vermelho.cores[2][2] = azul.cores[2][2];
		azul.cores[2][0] = laranja.cores[2][0];
		azul.cores[2][1] = laranja.cores[2][1];
		azul.cores[2][2] = laranja.cores[2][2];
		laranja.cores[2][0] = aux[0];
		laranja.cores[2][1] = aux[1];
		laranja.cores[2][2] = aux[2];
		auxf = branco.cores[0][0];
		branco.cores[0][0] = branco.cores[2][0];
		branco.cores[2][0] = branco.cores[2][2];
		branco.cores[2][2] = branco.cores[0][2]; 
		branco.cores[0][2] = auxf;
		auxf = branco.cores[0][1];
		branco.cores[0][1] = branco.cores[1][0];
		branco.cores[1][0] = branco.cores[2][1]; 
		branco.cores[2][1] = branco.cores[1][2];
		branco.cores[1][2] = auxf;
	}
	(auxPrinta == 1)?printf("%s ",i):auxPrinta;
}

void entraCores(int cores[][3]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Entre com a cor da coordenada %d %d: \n",i+1,j+1);
			scanf("%d",&cores[i][j]);
			while(cores[i][j] <1 || cores[i][j]>6){
				printf("Cor nao existe digite outra vez:\n");
				scanf("%d",&cores[i][j]);
			}
		}	
	}
}

void imprimeLado(struct lado lado){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printa(lado.cores[i][j]);
		}	
		printf("\n");
	}
}

void imprimeCubo(){
	int i,j;
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf("\n______________________________________\n");
	y = 4;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf("\t\t[Seu cubo]");
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf("\n");
	for(i=0;i<3;i++){
		printf("    ");
		for(j=0;j<3;j++){
			printa(amarelo.cores[i][j]);
		}	
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printa(vermelho.cores[i][j]);
		}
		printf(" ");
		for(j=0;j<3;j++){
			printa(verde.cores[i][j]);
		}
		printf(" ");
		for(j=0;j<3;j++){
			printa(laranja.cores[i][j]);
		}
		printf(" ");
		for(j=0;j<3;j++){
			printa(azul.cores[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++){
		printf("    ");
		for(j=0;j<3;j++){
			printa(branco.cores[i][j]);
		}	
		printf("\n");
	}
	y = 0;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
	printf("______________________________________\n");
}
void printa(int n){
	if( n == 1 ){
		y = 15;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
		printf("%c",219);
	}
	if( n == 2 ){
		y = 10;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
		printf("%c",219);
	}
	if( n == 3 ){
		y = 4;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
		printf("%c",219);
	}
	if( n == 4 ){
		y = 6;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
		printf("%c",219);
	}
	if( n == 5 ){
		y = 1;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
		printf("%c",219);
	}
	if( n == 6 ){
		y = 14;
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
		printf("%c",219);
	}
	y=14;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x<<4 | y);
}
