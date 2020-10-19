#include "Empregado.hpp"

Empregado::Empregado(std::string nome, double salarioHora){
    this->nome = nome;
    this->salarioHora = salarioHora;
}

double Empregado::pagamentoMes(double horasTrabalhadas) {
    double total = horasTrabalhadas;
    
    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > JORNADA_DE_TRABALHO) {
        double horasExtras = horasTrabalhadas - JORNADA_DE_TRABALHO;
        total += horasExtras * BONUS_HORA_EXTRA;
    }

    return total * salarioHora;
}

double Empregado::getSalarioHora(){
    return this->salarioHora;
}

void Empregado::setSalarioHora(double salarioHora){
    this->salarioHora = salarioHora;
}

std::string Empregado::getNome(){
    return this->nome;
}

void Empregado::setNome(std::string nome){
    this->nome = nome;
}