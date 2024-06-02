#ifndef FUNCIONARIOREGULAR
#define FUNCIONARIOREGULAR
#include <string>
#include "Funcionario.hpp"
using std::string;

class FuncionarioRegular: public Funcionario{
    private: 
        double salarioBase = 2000;
    public:
        FuncionarioRegular(string nome, int id, double salarioBase);
        double CalcularSalarioTotal(double salarioBase);

};
#endif