// gabriel ferreira carvalho 10E

#include <iostream>
#include <locale>
using namespace std;

// Declaração de Funções

int Menu();

void IntroduzirSequencia();

int CodificarSequencia();

int DescodificarSequencia();

int Sair();

// Função Principal

int main()
{

    setlocale(LC_ALL, "pt_PT.utf8");

    int MenuEscolhido ;

    MenuEscolhido = Menu();

    switch (MenuEscolhido)
    {
    case 1:

        IntroduzirSequencia();
        break;

    case 2:

        CodificarSequencia();
        break;

    case 3:

        DescodificarSequencia();
        break;

    case 0:

        Sair() ;
        break;
    
    default:
        
        break;
    }

    return 0;
}

// Definição das funções abaixo:

// Menu Inicial

int Menu()
{

    int EscolhaMenu;

    cout << "PROGRAMA DE CODIFICACAO - CENTRAL SECRET\n";
    cout << "1 - Introduzir Sequência\n";
    cout << "2 - Codificar Sequência\n";
    cout << "3 - Descodificar Sequência\n";
    cout << "0 - Sair\n";
    cin >> EscolhaMenu;

    system("cls");

    return EscolhaMenu;
}

void IntroduzirSequencia()
{

cout <<"SeuPai" ;

}

// // int CodificarSequencia()
// // {
// // }

// // int DescodificarSequencia()
// // {
// // }

// // int Sair()
// {
// }
