// gabriel ferreira carvalho e joao bahia 10E

#include <iostream>
#include <locale>

using namespace std;

// Define os valores de pedra, papel e tesoura

#define PEDRA 1
#define PAPEL 2
#define TESOURA 3

// Variáveis Globais

int PontosJogador = 0, Pontoscpu = 0;

void Menu()

{

    cout << " Pedra Papel Tesoura";
    cout << "\n\n Total de pontos";
    cout << "\n\nJogador:" << pontosjogador << endl;
    cout << "\nCPU:" << pontosjogador << endl;
}

int EscolhaJogador()
{

    int aposta;
   
    cout << "(1) Pedra |(2) Papel | (3) Tesoura |\n";
    cout << "\nDigite sua aposta:";
    
    cin >> aposta;

    return aposta;
}

int EscolhaCpu()
{

   // Ferrementa random 
   // Rand começa do 0
   // Por isso % 3 + 1 pra ir do 1 ao 3
   // Computador escolhe aleatoriamente 1, 2 ou 3

   return (rand() % 3 + 1) ;

}

void legendaescolha(int l)
{

if (l == PEDRA)
{
    cout << " PEDRA " ;
}

else if (l == PAPEL)
{
    cout << " PAPEL " ;
}

else
{
    cout << " TESOURA " ;
}

}

void ExibirEscolhas(int j , int c)
{

cout << "\nJogador ->" ;

legendaescolha(j) ;

cout << "X" ;

legendaescolha(c) ;

cout << "<- Computador\n" ;

}

char VerificarVencedor (int ApostaJ , int ApostaC)
{

if (ApostaJ == ApostaC )
{
    return 'E'
}


if (ApostaJ == PEDRA && ApostaC == PAPEL || ApostaJ == PAPEL && ApostaC == TESOURA ||  ApostaJ == TESOURA && ApostaC == PEDRA  )
{
    return 'C';    
}

if (ApostaJ == PAPEL && ApostaC == PEDRA  || ApostaJ == TESOURA && ApostaC == PAPEL  || ApostaJ == PEDRA && ApostaC == TESOURA )
{
   return 'J' 
}






}

void ContarPontos( char Vencedor )
{

if ( Vencedor = 'J' )
{
    puts << "Jogador Ganhou!"
    pontosjogador++
}

if (/* condition */)
{
    /* code */
}

if (/* condition */)
{
    /* code */
}


}

int main()
{
    srand ((unsigned)time(NULL)) ;

    int ApostaJogador ; 
    int ApostaCpu ;
    char Resultado ;
   
    Menu();
    
    ApostaJogador = EscolhaJogador();
    
    ApostaCpu = EscolhaCpu();

    ExibirEscolhas( ApostaJogador , ApostaCpu ) ;
   
    Resultado = VerificarVencedor ( ApostaJogador , ApostaCpu ) ;

    ContarPontos(char Resultado)

    return 0;
}
