#include <iostream>
#include <string>
#define TAM 100
using namespace std;
//QUESTÃO 03 PILHA E CALCULADORA PROF ALEX
int pilha[TAM];
int topo = -1;

void push(int valor) {

    topo++;
    pilha[topo] = valor;
}

int pop() {

    int valor = pilha[topo];
    topo--;
    return valor;
}

int main()
{
    int numero;

    cout << "Digite números positivos abaixo! \n[OBS] - 0 PARA PARAR:" << endl;

    cin >> numero;

    while (numero != 0) {

        push(numero);

        cin >> numero;
    }

    cout << "Números pares:" << endl;

    while (topo >= 0) {

        numero = pop();

        if (numero % 2 == 0) {
            cout << numero << endl;
        }
    }

    return 0;
}