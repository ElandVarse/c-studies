/* 
    To compile: 
        g++ guess-the-number.cpp -o guess-the-number
        ./guess-the-number
*/

#include <iostream>
#include <cstdlib>   // rand(), srand()
#include <ctime>     // time()

using namespace std;

int main() {
    srand(time(0));  // inicializa o gerador de números aleatórios
    int numero_secreto = rand() % 100 + 1; // número entre 1 e 100
    int tentativa;
    int tentativas = 0;

    cout << "🎯 Bem-vindo ao jogo de adivinhação!\n";
    cout << "Tente adivinhar o número entre 1 e 100.\n\n";

    do {
        cout << "Digite seu palpite: ";
        cin >> tentativa;
        tentativas++;

        if (tentativa < numero_secreto) {   
            cout << "📉 Muito baixo! Tente novamente.\n";
        } else if (tentativa > numero_secreto) {
            cout << "📈 Muito alto! Tente novamente.\n";
        } else {
            cout << "🎉 Parabéns! Você acertou o número em " << tentativas << " tentativas!\n";
        }

    } while (tentativa != numero_secreto);

    return 0;
}
