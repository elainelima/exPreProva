#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Estagiario.hpp"
#include "FuncionarioRegular.hpp"
//#include "Gerente.hpp"
using std::cout;
using std::endl;

int main(){
    Funcionario* funcionario1 = new Estagiario("Gabriel",123,5000);
    Funcionario* funcionario2 = new FuncionarioRegular("Amanda",5134,5000);


}