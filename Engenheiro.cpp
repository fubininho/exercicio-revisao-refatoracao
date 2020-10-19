#include <string>
#include "Engenheiro.hpp"

int Engenheiro::getProjetos() const {
  return this->projetos;
}

void Engenheiro::setProjetos(int projetos){
  this->projetos = projetos;
}