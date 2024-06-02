#ifndef FUNCIONARIO
#define FUNCIONARIO
#include <string>
using std::string;

class Funcionario{
    private:
        string nome;
        int id;
        double salarioBase;
    protected:
        Funcionario(string nome, int id, double salarioBase);

};
#endif