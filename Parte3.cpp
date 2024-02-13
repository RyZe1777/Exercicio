#include <iostream>
using namespace std;

int n;

int main(){
    
   //TABUADA

    cout << "Vamos fazer a Tabuada!!" << endl;
    cout << "Digite um número: ";
    cin >> n;
    cout << "Tabuada de " << n << ":" << endl;
    for (int k = 1; k <= 10; ++k) {
        cout << n << " x " << k << " = " << n * k << endl;
    }



    return 0;
}
