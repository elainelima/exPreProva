#ifndef ESTAGIARIO
#define ESTAGIARIO
#include <string>
#include "Funcionario.hpp"
using std::string;

class Estagiario: public Funcionario{
    public:
        Estagiario(string nome, int id, double salarioBase);

};
#endif