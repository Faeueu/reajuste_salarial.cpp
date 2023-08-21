#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salario;

    cout << "Digite o salario: ";
    cin >> salario;

    double percentual, aumento, novoSalario;

    if (salario <= 280) {
        percentual = 0.20;
    } else if (salario <= 700) {
        percentual = 0.15;
    } else if (salario <= 1500) {
        percentual = 0.10;
    } else {
        percentual = 0.05;
    }

    aumento = salario * percentual;
    novoSalario = salario + aumento;

    cout << fixed << setprecision(2);
    cout << "Salario antes do reajuste: R$ " << salario << "\n";
    cout << "Percentual de aumento aplicado: " << percentual * 100 << "%" << "\n";
    cout << "Valor do aumento: R$ " << aumento << "\n";
    cout << "Novo salario apos o aumento: R$ " << novoSalario << "\n";

    return 0;
}
