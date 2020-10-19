#include <string>
#include "Vendedor.hpp"

int Vendedor::getQuotaMensalVendas() const {
  return this->quotaMensalVendas;
}

void Vendedor::setQuotaMensalVendas(double quotaMensalVendas){
  this->quotaMensalVendas = quotaMensalVendas;
}

double Vendedor::quotaTotalAnual() {
  return this->quotaMensalVendas * TOTAL_DE_MESES;
}
