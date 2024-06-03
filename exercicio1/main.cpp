#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Estagiario.hpp"
#include "FuncionarioRegular.hpp"
#include "Gerente.hpp"
using std::cout;
using std::endl;

int main(){
    Funcionario* funcionario1 = new Estagiario("Gabriel",123,5000);
    Funcionario* funcionario2 = new FuncionarioRegular("Amanda",5134,5000);
    Funcionario* funcionario3 = new Gerente("Debora",2434,5000);

    cout << "Salário total do Funcionário Regular (" << funcionario1->calcularSalarioTotal() << "): R$" << funcionario1->calcularSalarioTotal() << endl;
    cout << "Salário total do Gerente (" << funcionario2->calcularSalarioTotal() << "): R$" << funcionario2->calcularSalarioTotal() << endl;
    cout << "Salário total do Estagiário (" << funcionario3->calcularSalarioTotal() << "): R$" << funcionario3->calcularSalarioTotal() << endl;

    return 0;


}