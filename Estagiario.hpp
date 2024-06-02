#ifndef GERENTE
#define GERENTE
#include <string>
#include "Funcionario.hpp"
using std::string;

class Estagiario: public Funcionario{
    private: 
        double salarioBase = 1000;
    public:
        Estagiario(string nome, int id, double salarioBase);
        double CalculaSalarioTotal(double salarioBase);

};
#endif