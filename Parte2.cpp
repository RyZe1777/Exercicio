#include <iostream>
using namespace std;

//variaveis array 5

float notas[5];
float soma;
float media;
float maior = 0;
float menor = 0;

//variaveis array 10

float maior_10 = 0;
float menor_10 = 0; 
int array[10]= {10,56,9,12,70,23,32,69,17,80};



int main(){
     //NOTAS DOS ALUNOS
    

    cout << "Quais sao as notas dos alunos? " <<endl;
        menor = array[0];
        maior = array[0];
    for(int x=0; x<5; x++){
        cout <<"Aluno" << x + 1 << ":" <<endl;
        cin >> notas[x];
        soma += notas[x]; //mandar para o array em espaços difs
        media = soma/5; //media 
        if(notas[x] < menor){  
            menor = notas[x];
        }
        if(notas[x] > maior){
            maior = notas[x];
        }
    }
    
    cout <<"Media: " << media <<endl;
    cout <<"Menor: " << menor <<endl;
    cout <<"Maior: " << maior <<endl;
    
    //ARRAY DE 10

    cout << "VAMOS IMPRIMIR O MAXIMO E MINIMO DO ARRAY 10: " << endl;
        menor_10 = array[0];
        maior_10 = array[0];
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
