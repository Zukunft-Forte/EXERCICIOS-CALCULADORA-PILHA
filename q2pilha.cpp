#include <iostream>
#include <string>
#define TAM 100
using namespace std;

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
    /* Aqui estou fazendo: 5 3 - 8 * 4 /. Me baseiei no 1º código
    e desenrolei para adicionar subtração e divisão.
    
    */

    push(5);
    push(3);

    double b = pop();
    double a = pop();
    push(a - b);

    push(8);

    b = pop();
    a = pop();
    push(a * b);

    push(4);

    b = pop();
    a = pop();
    push(a / b);

    double resultado = pop();

    cout << "Resultado: " << resultado << endl;

    return 0;
}