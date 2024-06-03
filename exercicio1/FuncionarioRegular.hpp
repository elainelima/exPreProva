#ifndef FUNCIONARIOREGULAR
#define FUNCIONARIOREGULAR
#include <string>
#include "Funcionario.hpp"
using std::string;

class FuncionarioRegular: public Funcionario{
    public:
        FuncionarioRegular(string nome, int id, double salarioBase);
};


#endif