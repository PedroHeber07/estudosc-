#include <iostream>
#include <stdlib.h>


using namespace std;

int main() {

    //1) Perguntar qual a tabuada para o usuario
    //   e armazenar o valor numa variavel

    cout << "Por favor, informe a tabuada que voce deseja: " << endl;

    int n = 0;
    cin >> n;

    //2) Implementa��o de um la�o de repeti��o FOR
    for(int i = 1; i<=10; i++){
        //3) Imprimir a tabuada na tela
        cout << i << " x " << n << " = " << i*n << endl;
    }


    system("pause");
    return 0;
}
