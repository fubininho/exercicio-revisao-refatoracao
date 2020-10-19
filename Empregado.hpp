#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

/**
 * \brief essa classe representa um empregado
 */
class Empregado {
	
  public:
    /**
     * \brief Esse método é o construtor da classe Empregado.
     * \param nome nome do Empregado.
     * * \param salarioHora salario por hora do Empregado.
     */
    Empregado(std::string nome, double salarioHora);

    /**
     * \brief Esse método retorna o valor do Salário por Hora do Empregado.
     */
    double getSalarioHora();

    /**
     * \brief Esse método modifica o valor da Salário por Hora do Empregado.
     * \param salarioHora valor do novo Salário por Hora do Empregado.
     */
    void setSalarioHora(double salarioHora);

    std::string getNome();

    /**
     * \brief Esse método modifica o nome do Empregado.
     * \param nome nome do Empregado.
     */
    void setNome(std::string nome);

    /**
     * \brief Esse método calcula o valor a ser pago no final do mês ao Empregado no número de horas trabalhado.
     * \param horasTrabalhadas número de horas trabalhado pelo Empregado.
     */
    double pagamentoMes(double horasTrabalhadas);

    /**
     * \brief Esse método é o destrutor da classe Engenheiro.
     */
    virtual ~Empregado() {};
  
  private:
    const int JORNADA_DE_TRABALHO = 8;
    const float BONUS_HORA_EXTRA = 0.5;

    std::string nome;
    double salarioHora;
	
};

#endif