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

void EscolhaMenu();

int Ler_Elemento_Da_Matriz();

void Substituir_Elemento_Na_Matriz();

void Limpar_Matriz();

void Mostrar_Os_Elementos_Da_Matriz();

bool Pesquisar_valor();

int Procurar_Maximo();

// void Mostrar_Os_Indices_Do_Menor_Valor();

// void Calcular_Media();

// void Sair();

// Função Principal

int main()
{

    setlocale(LC_ALL, "pt_PT.utf8");

    system("color 0e");

    // Menu_Principal();

    EscolhaMenu();

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

    cout << "\n\n\tInsira a sua opção: ";

    cin >> MenuEscolhido;
}

void EscolhaMenu()
{

    int Valor;

    do
    {

        Menu_Principal();

        if (MenuEscolhido != 0)
        {

            switch (MenuEscolhido)
            {
            case 1:

                Valor = Ler_Elemento_Da_Matriz();

                cout << "\tValor nestas cordenadas: " << Valor << "\n\n\t";

                cout << "Para voltar ao menu digite qualquer tecla!"
                     << "\n\n\t";

                system("pause");
                break;

            case 2:

                Substituir_Elemento_Na_Matriz();
                system("pause");
                break;

            case 3:

                Limpar_Matriz();
                break;

            case 4:
                Mostrar_Os_Elementos_Da_Matriz();
                break;

            case 5:

                if (Pesquisar_valor())
                {
                    puts("\t");
                    puts("\tSim! Este valor está presenete na matriz!");
                }
                else
                {
                    puts("\t");
                    puts("\tNão! Este valor não está presenete na matriz!");
                }

                cout << "Para voltar ao menu digite qualquer tecla!"
                     << "\n\n\t";

                system("pause");

                break;

            case 6:

                Valor = Procurar_Maximo();

                cout << "\tO maior valor é: " << Valor << "\n\n\t";

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
}

int Ler_Elemento_Da_Matriz()
{

    int i, j;

    do
    {
        system("cls");

        puts("\t");

        puts("\tLENDO A MATRIZ...");

        cout << "\n\tLinhas:" << N_LINHAS << "\tColunas:" << N_COLUNAS << "\n\n";

        cout << "\tInsira a linha desejada: ";
        cin >> i;

        puts("\t");

        cout << "\tInsira a Coluna desejada: ";
        cin >> j;

        puts("\t");

        return Notas[i][j];

    } while (i < 0 || i > N_LINHAS - 1 || j < 0 || j > N_COLUNAS - 1);
}

void Substituir_Elemento_Na_Matriz()
{

    int Valor, i, j;

    system("cls");

    puts("\t");

    puts("\tSUBSTITUIÇÃO DA MATRIZ...");

    cout << "\n\tLinhas:" << N_LINHAS << "\tColunas:" << N_COLUNAS << "\n\n";

    do
    {
        cout << "\tInsira a linha desejada: ";
        cin >> i;
    
    } while (i < 0 || i > N_LINHAS - 1);

    puts("\t");
    do
    {
        cout << "\tInsira a coluna desejada: ";
        cin >> j;
    
    } while (j < 0 || j > N_COLUNAS - 1);

    puts("\t");

    cout << "\tInsira o valor desejado: ";
    cin >> Valor;

    Notas[i][j] = Valor;

    puts("\t");

    cout << "\tNovo Valor: " << Valor << "\n\n\t";

    cout << "Para voltar ao menu digite qualquer tecla!"
         << "\n\n\t";
}

void Limpar_Matriz()
{

    int i, j;

    system("cls");

    puts("\t");

    puts("\tLIMPANDO A MATRIZ...");

    for (i = 0; i < N_LINHAS; i++)
    {
        for (j = 0; j < N_COLUNAS; j++)
        {

            Notas[i][j] = 0;
        }
    }

    puts("\n\tMatriz Limpa:");

    for (int i = 0; i < N_LINHAS; i++)
    {
        cout << "\n";

        for (int j = 0; j < N_COLUNAS; j++)
        {
            cout << "\t";
            cout << Notas[i][j] << " ";
        }
    }

    cout << "\n\n\t";

    cout << "Para voltar ao menu digite qualquer tecla!"
         << "\n\n\t";

    system("pause");
}

void Mostrar_Os_Elementos_Da_Matriz()
{

    system("cls");

    puts("\t");

    puts("\tELEMENTOS DA MATRIZ...");

    puts("\t");

    for (int i = 0; i < N_LINHAS; i++)
    {
        for (int j = 0; j < N_COLUNAS; j++)
        {

            cout << "\tNotas[" << i << "][" << j << "]: " << Notas[i][j];
        }

        cout << "\n\n";
    }

    cout << "\t";

    system("pause");
}

bool Pesquisar_valor()
{
    // Crie uma função que receba um valor lido a partir do teclado e que devolva true ou false,
    // conforme esse valor esteja ou não na matriz, respetivamente.

    int ValorPesquisado, i = 0, j = 0;

    system("cls");

    puts("\t");

    puts("\tPESQUISA NA MATRIZ...");

    puts("\t");

    cout << "\n\n\tValor que procuras: ";
    cin >> ValorPesquisado;

    for (i = 0; i < N_LINHAS; i++)
    {
        for (j = 0; j < N_COLUNAS; j++)
        {

            if (ValorPesquisado == Notas[i][j])
            {

                return true;
            }
        }
    }

    return false;
}

int Procurar_Maximo()
{

    int maiornum = Notas[0][0];

    system("cls");

    puts("\t");

    puts("\tMAIOR VALOR NA MATRIZ...");

    puts("\t");

    for (int i = 0; i < N_LINHAS; i++)
    {
        for (int j = 0; j < N_COLUNAS; j++)
        {
            if (Notas[i][j] > maiornum)
            {
                maiornum = Notas[i][j];
            }
        }
    }

    return maiornum;

    puts("\t");
}

// void Mostrar_Os_Indices_Do_Menor_Valor();