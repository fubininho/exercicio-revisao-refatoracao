#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <string>
#include "Empregado.hpp"

/**
 * \brief essa classe representa engenheiro, que é tipo de empregado
 */
class Engenheiro : public Empregado {

  public: 
    /**
     * \brief Esse método é o construtor da classe Engenheiro.
     * \param nome nome do Engenheiro.
     * \param salarioHora salario por hora do Engenheiro.
     * \param projetos número de projetos executados pelo Engenheiro.
     */
    Engenheiro(std::string nome, double salarioHora, int projetos) : Empregado(nome, salarioHora), projetos(projetos) {}

    /**
     * \brief Esse método retorna o número de projetos executados pelo Engenheiro.
     */
    int getProjetos() const;

    /**
     * \brief Esse método modifica o número de projetos executados pelo Engenheiro.
     * \param projetos valor do novo número de projetos executados pelo Engenheiro.
     */
	  void setProjetos(int projetos);

    /**
     * \brief Esse método é o destrutor da classe Engenheiro.
     */
    ~Engenheiro() {};

  private:
    int projetos;
	
};

#endif