#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    bool b = true;
    bool b2 = (1 == 1);

    cout << "O valor contido em 'b' � igual a: " << b << endl;
    cout << "O valor contido em 'b2' � igual a: " << b2 << endl;

    //True representa o valor 1
    //False representa o valor 0

    bool c = 0;
    bool c2 = 1;

    cout << "O valor e: " << (c2 == true) << endl;

    system("pause");
    return 0;
}
