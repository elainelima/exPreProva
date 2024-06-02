#ifndef GERENTE
#define GERENTE
#include <string>
#include "Funcionario.hpp"
using std::string;

class Gerente: public Funcionario{
    private:
        double salarioBase = 3000;
        double bonusAnual;
    public:
        Gerente(string nome, int id, double salarioBase);
        double CalcularSalarioTotal(double salarioBase, double bonusAnual);


};
#endif