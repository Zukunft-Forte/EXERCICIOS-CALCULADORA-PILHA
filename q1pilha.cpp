#include <iostream>
#include <string>
#define TAM 100
using namespace std;
//QUESTÃO 1 PROF ALEX
double pilha[TAM];
int topo = -1;

void push(double valor) {

    topo++;
    pilha[topo] = valor;
}

double pop() {

    double valor = pilha[topo];
    topo--;
    return valor;
}

int main()
{
    push(2);
    push(4);

    double b = pop();
    double a = pop();

    push(a + b);

    double resultado = pop();

    cout << "Resultado: " << resultado << endl;

    return 0;
}