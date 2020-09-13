#include <iostream>
#include <cstdio>
#include <cstdlib>


using namespace std;

int main()
{

int A = 0;
short int B = 0;
long int C = 0;
signed int D = 0;
unsigned int E = 0;
short signed int F = 0;
long signed int G = 0;
short unsigned int H = 0;
long unsigned int I = 0;

    std::cout << "\n";
    std::cout << "Um int ocupa " << sizeof(A) << "B.\n";
    std::cout << "Um short int ocupa " << sizeof(B) << "B.\n";
    std::cout << "Um long int ocupa " << sizeof(C) << "B.\n";
    std::cout << "Um signed int ocupa " << sizeof(D) << "B.\n";
    std::cout << "Um unsigned int ocupa " << sizeof(E) << "B.\n";
    std::cout << "Um short signed int ocupa " << sizeof(F) << "B.\n";
    std::cout << "Um long signed int ocupa " << sizeof(G) << "B.\n";
    std::cout << "Um short unsigned int ocupa " << sizeof(H) << "B.\n";
    std::cout << "Um long unsigned int ocupa " << sizeof(I) << "B.\n";
    std::cout << "\n";
    std::cout << "Os valores acima significam que o normal ocupa 4B de memória, o short só ocupa 2B e o long ocupa 8B.\n";
    std::cout << "\n";
}


}
