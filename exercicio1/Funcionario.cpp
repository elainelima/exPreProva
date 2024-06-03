#include "Funcionario.hpp"

Funcionario::Funcionario(string nome, int id, double salarioBase):nome(nome), id(id), salarioBase(salarioBase){

}
double  Funcionario::calcularSalarioTotal(){
    return salarioBase;
}