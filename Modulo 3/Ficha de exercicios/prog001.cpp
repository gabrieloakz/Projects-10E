#include <iostream>
#include <locale>
using namespace std;

int soma()
{

    int num, soma = 0
    
    do
    {

        cout << "insira um numero:" cin >> num
                                        
        soma = soma + num
    }
    while (num != -1)
    soma++

    return soma ;

}

int main()

    setlocale(LC_ALL, "pt_PT.utf8");

    cout << "Digite -1 para sair" ;
    cout << "Resultado:"  << soma() << endl ;