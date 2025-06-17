#include <iostream>
#include <algorithm>
using namespace std;

int pontuacao(int a, int b){
        if((a == 1 && b == 2) || (a == 2 && b == 1)){
            return 1000;
        } else if(a == b){
            return 100 + a * 10;
        } else{
            return max(a,b) * 10 + min(a,b);
        }
    }

int main() {
    
    int dado1Jogador1, dado2Jogador1, dado1Jogador2, dado2Jogador2, pontuacaoJogador1, pontuacaoJogador2;
    
    while(cin >> dado1Jogador1 >> dado2Jogador1 >> dado1Jogador2 >> dado2Jogador2){
        
        if (dado1Jogador1 == 0 && dado2Jogador1 == 0 && dado1Jogador2 == 0 && dado2Jogador2 == 0)
            return 0;
        
        pontuacaoJogador1 = pontuacao(dado1Jogador1, dado2Jogador1);
        pontuacaoJogador2 = pontuacao(dado1Jogador2, dado2Jogador2);
        
        if (pontuacaoJogador1 > pontuacaoJogador2){
            cout << "Player 1 wins." << endl;
        } else if (pontuacaoJogador2 > pontuacaoJogador1)
            cout << "Player 2 wins." << endl;
        else
            cout << "Tie." << endl;
    }

    return 0;
}
