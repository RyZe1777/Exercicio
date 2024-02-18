#include <iostream>
using namespace std;

//variaveis array 5

float notas[5];
float soma;
float media;
float maior = 0;
float menor = 10;

//variaveis array 10

float maior_10 = 0;
float menor_10 = 10; 
int array[10]= {10,56,9,12,70,23,32,69,17,80};


int main(){
    
     //NOTAS DOS ALUNOS
    
    cout << "Quais sao as notas dos alunos? " <<endl;
  
    for(int x=0; x<5; x++){
        cout <<"Aluno" << x + 1 << ":" <<endl;
        cin >> notas[x];
        soma += notas[x]; // soma as notas todos q escolhemos para armazenar no ciclo for
        media = soma/5; //media 
    }
        menor = notas[0];
        maior = notas[0];
    
    for(int y=0; y<5; y++){
        if(notas[y] < menor){ 
        menor = notas[y];
        }
    }
    for(int p=0; p<5; p++){ 
        if(notas[p] > maior){
        maior = notas[p];
        }
    }

    cout <<"Media: " << media <<endl;
    cout <<"Menor: " << menor <<endl;
    cout <<"Maior: " << maior <<endl;
    //ARRAY DE 10

    cout << "VAMOS IMPRIMIR O MAXIMO E MINIMO DO ARRAY 10: " << endl;
    for (int z = 0; z < 10; z++) {
        if (array[z] < menor_10) {
            menor_10 = array[z];
        }
        if (array[z] > maior_10) {
            maior_10 = array[z];
        }
    }

    cout << "Menor: " << menor_10 << endl;
    cout << "Maior: " << maior_10 << endl;


    return 0;
}
