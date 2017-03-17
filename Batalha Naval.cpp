#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;

int c,l,vet [20] [20], op,s, cont,e,v,r;

main(void){
	//Tela de Inicio
	do{
		cout<<"////////////////////BEM VINDO AO BATALHA NAVAL PROJECT 0.1\\\\\\\\\\\\\\\\\\\\\n";
		cout<<"\n|Menu|\n 1 - Novo Jogo \n 2 - Instrucoes \n 3 - Creditos\n";
		cin>>op;
		system("cls");
			if(op==2){
			cout<<"....................BATALHA NAVAL PROJECT 0.1....................\n";
			cout<<"1. O primeiro a jogar ira escolher a posicao do seu navio, definindo sua linha e coluna.";
			cout<<"\n2. O segundo jogador irá tentar acertar definindo a linha e coluna do seu tiro.";
			}
			if(op==3){
			cout<<"....................Creditos....................";
			cout<<"\nCriado por: Lucas G. \nImplementado por: \n ADS 2015.02";	
			}
			if(op==1){	//Escolha do jogador 1
				cout<<"....................BATALHA NAVAL PROJECT 0.1....................\n";
				cout<<"\n1. Jogador 1 vs Jogador 2 \n2. Jogador 1 vs Maquina\n";
				cin>>e;
				if(e==1){
				cout<<"...............JOGADOR 1...............\n\n";
				cout<<"\nDigite a coluna: ";
				cin>>c;
				cout<<"Digite sua linha: ";
				cin>>l;
				vet [c] [l] = 1;
				system("cls");
				}
				if(e==2){
					srand(time(NULL));
					c = rand ()%20;
					l = rand ()%20;
					vet [c] [l] = 1;
					system("cls");
					}
			//Tentativas do jogador 2
				cout<<"...............JOGADOR 2...............\n\n";
				cout<<"Voce tem 3 Tentativas. Boa Sorte!!!\n";
				cont = 3;
					do{
					cout<<"\nEscolha sua coluna: \n";
					cin>>c;
					cout<<"\nEscolha sua linha: \n";
					cin>>l;
					if(c>20 || l>20){
					cout<<"\nTiro fora nao vale! :@  Mala!!\n";
					}
			//condição de acerto ou erro
					else if(vet [c][l]==0){
					cout<<"\nERROU!!!\n";
					cont--;
					}
					if(cont == 2 && vet[c][l]==0){
					cout<<"\nFalta 2 Tentativas\n";
					}
					if(cont == 1 && vet[c][l]==0){
					cout<<"\nFalta 1 Tentativa\n";
					}
				}while(cont>0 && vet[c][l]==0);
					if(vet [c] [l]==1){
					cout<<"\nACERTOU!!!\n";
					}
				}
				cout<<"\nDeseja sair? \n 1 - Sim ou qualquer tecla para sair";
				s=0;
				cin>>s;
			}while(s==1 && vet[c][l]==1);
	}
