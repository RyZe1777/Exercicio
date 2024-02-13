#include <iostream>
using namespace std;

int a;
int b;
const double PI = 3.14159;
int r;


int main(){
    
    //CONTAS
    
    cout <<"Qual o valor de a: " <<endl; //pergunta o valor de a
        cin >> a;
    cout <<"Qual o valor de b: " <<endl; //pergunta o valor de b
        cin >> b;
 
    cout << a+b <<endl; //adiçao
    cout << a*b <<endl; //multiplicaçao
    cout << a-b <<endl; //subtraçao

    if(a !=0){
        cout << a/b <<endl; //divisao
        cout << a%b <<endl; //resto da divisao
    }else{
        cout <<"Nao podemos dividir por 0" <<endl; //informa que nao podemos dividir por 0
    }
