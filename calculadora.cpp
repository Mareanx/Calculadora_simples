#include <iostream>

using namespace std;

int main()
{
    char op;
    double n1, n2;

    cout << "Escolha o operador para executar a ação desejada (+, -, *, /):  ";
    cin >> op;

    cout << "Digite dois números respectivamente:  ";
    cin >> n1 >> n2;

    switch (op)
    {
    case '+':
        cout << n1 << " + " << n2 << " = " << (n1 + n2);
        break;

    case '-':
        cout << n1 << " - " << n2 << " = " << (n1 - n2);
        break;

    case '*':
        cout << n1 << " * " << n2 << " = " << (n1 * n2);
        break;

    case '/':
        if (n2 != 0.0)
            cout << n1 << " / " << n2 << " = " << (n1 / n2);
        else
            cout << "Não é posivel fazer divisão por 0\n\n";
        break;

    default:
        cout << "Erro: operador invalido";
    }

    return 0;
}
