#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    //Imprimindo os n�meros de 0 at� 99
    int num = 0;
    while(num < 100){
        cout << num << endl;
//        num = num + 1;
//        num += 1;
        num++;
    }

    //Imprimindo os n�meros de 99 at� 0
    int num2 = 100;
    while(num2 > 0){
        cout << num2 << endl;
        num2--;
    }

    system("pause");
    return 0;
}
