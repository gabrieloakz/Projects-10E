// gabriel ferreira carvalho 10E

#include <iostream>
#include <locale>
using namespace std;

const int N_LINHAS = 5;
const int N_COLUNAS = 3;

// Declaração da Matriz

int Notas[N_LINHAS][N_COLUNAS] = {{12, 15, 9}, {10, 11, 15}, {13, 16, 11}, {8, 18, 10}, {17, 14, 12}};

// Declaração de Variáveis

int Escolha, MenuEscolhido;

// Declaração de Funções

void Menu_Principal();

void Ler_Elemento_Da_Matriz();

// void Substituir_Elemento_Na_Matriz();

// void Limpar_Matriz();

// void Mostrar_Os_Elementos_Da_Matriz();

// void Pesquisar_valor();

// void Procurar_Maximo();

// void Mostrar_Os_Indices_Do_Menor_Valor();

// void Calcular_Media();

// void Sair();

// Função Principal

int main()
{

    setlocale(LC_ALL, "pt_PT.utf8");

    do

    {

        Menu_Principal();

        if (MenuEscolhido != 0)
        {

            switch (MenuEscolhido)
            {
            case 1:

                Ler_Elemento_Da_Matriz();
                break;

            case 2:

                // Substituir_Elemento_Na_Matriz();
                break;

            case 3:

                // Limpar_Matriz();
                break;

            case 4:
                // Mostrar_Os_Elementos_Da_Matriz();
                break;

            case 5:

                // Pesquisar_valor();
                break;

            case 6:

                // Procurar_Maximo();
                break;

            case 7:

                // Mostrar_Os_Indices_Do_Menor_Valor();
                break;

            case 8:

                // Calcular_Media();
                break;

            default:
                break;
            }
        }

    } while (MenuEscolhido != 0);

    return 0;
}

void Menu_Principal()
{

    system("cls");
    
    puts("\t");
    puts("\t1 - Ler Elemento Da Matriz");
    puts("\t2 - Substituir Elemento Na Matriz");
    puts("\t3 - Limpar Matriz");
    puts("\t4 - Mostrar Os Elementos Da Matriz");
    puts("\t5 - Pesquisar valor ");
    puts("\t6 - Procurar Maximo");
    puts("\t7 - Mostrar Os Indices Do Menor Valor");
    puts("\t8 - Calcular Media ");
    puts("\t9 - Faturamento");
    puts("\t0 - Sair");
    
    cout << "\n\n\tInsira a sua opção:" ;

    cin >> MenuEscolhido;
}

void Ler_Elemento_Da_Matriz()
{

int LinhaD , ColunaD ;
int i , j ;

// Lembrete: Do while pra limitar o ususario ao inserir as linhas e colunas

system("cls");

puts("\t");

cout << "\tLinhas:" << N_LINHAS << "\tColunas:" << N_COLUNAS << "\n\n";

cout << "\tInsira a linha desejada:" ;
cin >> LinhaD ;
cout << "\tInsira a Coluna desejada:" ;
cin >> ColunaD ;

cout << "\tValor nestas cordenadas:" << Notas[LinhaD][ColunaD] << "\n\n" ;

system("pause");

// return j ;

}