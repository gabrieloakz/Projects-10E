// gabriel ferreira carvalho 10E

#include <iostream>
#include <locale>
using namespace std;

// Considerando a tabela apresentada, armazenar num vetor
// e imprimir os respetivos valores.

int main()
{

    float valor[6] = {2.34, 5.40, 1.00, 7.62, 8.82, 3.91};

    puts ("Item\tValor") ;

    for (int i = 0; i < 6; i++)
    {

    cout << i + 1 << "\t" << valor[i]<< endl ;
    
    }

    return 0;
}
