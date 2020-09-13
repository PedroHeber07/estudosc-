#include <iostream>

using namespace std;

int main()
{

    int varInt = 100;
    char c = 'r';
    double pFlutuante = 5.99;

    cout << "O valor da variavel varInt e: " << varInt << endl;
    cout << "O valor da variavel c e: " << c << endl;
    cout << "O valor da variavel pFlutuante e: " << pFlutuante << endl;
    cout << endl;
    cout << "Memoria da variavel varInt: " << sizeof(varInt) << " Byte(s)" << endl;
    cout << "Memoria da variavel c: " << sizeof(c) << " Byte(s)" << endl;
    cout <<"Memoria da variavel pFlutuante: " << sizeof(pFlutuante) << " Byte(s)" << endl;
}
