// Projeto do aluno: Gabriel Ferreira Carvalho 10E

// Objetivo: Implementar um programa em C++ que simule uma máquina automática de café.

#include <iostream>
#include <locale>
using namespace std;

// Declaração de variáveis

int escolha, valor, credito, moeda, troco;
int q1, q2, q3, q4, q5, q6, q7;
float faturamento = 0;

int MenuPrincipal()
{

    int escolhamenu;

    puts("(1) Comprar ");
    puts("(2) Faturamento");
    puts("(3) Sair");
    cin >> escolhamenu;

    system("cls") ;

    return escolhamenu;
}

int Comprar()
{

    int escolhacomprar;

    cout << "(1) Bebidas ";
    cout << "(2) Lanches";
    cout << "(3) Doces";
    cin >> escolhacomprar;

    system("pause");
    system("cls") ;

    return escolhacomprar;
}

void Faturamento()
{

    cout << "Faturamento =" << (faturamento / 100) << "Euros\n\n";
}

void Sair()
{

    cout << "Tchau Tchau Baby";
    system("pause");
    system("cls")
}

void MenuBebidas()

{

    // Zerar as variáveis a cada compra seguida

    troco = 0, credito = 0, valor = 0, moeda = 0;

    cout << "----------------------------------\n";
    cout << "|       Cafeteria do Biel        |\n";
    cout << "----------------------------------\n";
    cout << "| 1-Café pingado ( 80 cêntimos ) |\n";
    cout << "| 2-Chá de limão ( 60 cêntimos ) |\n";
    cout << "| 3-Café longo ( 70 cêntimos )   |\n";
    cout << "| 4-Café curto ( 70 cêntimos )   |\n";
    cout << "| 5-Cappuccino ( 95 cêntimos )   |\n";
    cout << "| 6-Chocolate ( 85 cêntimos )    |\n";
    cout << "| 7-Galão ( 95 cêntimos )        |\n";
    cout << "----------------------------------";
    cout << "\n*Obs: Esta máquina só aceita moedas\n";
    cout << "\nInsira o número do produto: ";
    //   cin >> escolha;
}

int main()
{

    setlocale(LC_ALL, "pt_PT.utf8");

    // Variáveis Locais

    int MenuEscolhido;

    // Primeiramente faremos o Do While para que a maquina só funcione
    // enquanto nao for digitado -99, e caso seja digitado, encerrado

    do

    {

        MenuEscolhido = MenuPrincipal();

        if (MenuEscolhido != -99)
        {

            switch (MenuEscolhido)
            {
            case 1:

                Comprar();
                break;

            case 2:

                Faturamento();
                break;

            case 3:

                Sair();
                break;
            default:
                break;
            }
        }

    } while (escolha != -99);

    return 0;
}