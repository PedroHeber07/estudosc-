#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    cout << "Bem vindo a calculador V1.0" << endl;
    cout << "Informe o primeiro numero: " << endl;
    int num1 = 0;
    cin >> num1;

    cout << "Informe o segundo numero: " << endl;
    int num2 = 0;
    cin >> num2;

    cout << "O valor atribuido ao primeiro numero foi: " << num1 << endl;
    cout << "O valor atribuido ao segundo numero foi: " << num2 << endl;

    int soma = num1 + num2;
    int subtracao = num1 - num2;
    double divisao = num1 / num2;
    double mult = num1 * num2;
    double modulo = num1 % num2;

    cout << "O valor da soma dos numeros e: " << soma << endl;
    cout << "O valor da subtracao dos numeros e: " << subtracao << endl;
    cout << "O valor da divisao dos numeros e: " << double(divisao) << endl;
    cout << "O valor da multiplicacao dos numeros e: " << mult << endl;
    cout << "O valor da modulo dos numeros e: " << modulo << endl;

    system("pause");


}
