#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <string>
#include "Empregado.hpp"

/**
 * \brief essa classe representa vendedor, que é tipo de empregado
 */
class Vendedor : public Empregado {

  public:
    /**
     * \brief Esse método é o construtor da classe Vendedor.
     * \param nome nome do Vendedor.
     * \param salarioHora salario por hora do Vendedor.
     * \param quotaMensalVendas quota mensal de vendas do Vendedor.
     */
    Vendedor(std::string nome, double salarioHora, double quotaMensalVendas) : Empregado(nome, salarioHora), quotaMensalVendas(quotaMensalVendas) {}

    /**
     * \brief Esse método retorna o valor da Quota Mensal de Vendas do Vendedor.
     */
    int getQuotaMensalVendas() const;

    /**
     * \brief Esse método modifica a quota mensal de vendas do Vendedor.
     * \param projetos valor do novo da quota mensal de vendas do Vendedor.
     */
	  void setQuotaMensalVendas(double quotaMensalVendas);
    
    /**
     * \brief Esse método retorna o valor da Quota Anual de Vendas do Vendedor.
     */
	  double quotaTotalAnual();

    /**
     * \brief Esse método é o destrutor da classe Vendedor.
     */
    ~Vendedor() {};
  
  private:
    const int TOTAL_DE_MESES = 12;

    double quotaMensalVendas;

};

#endif