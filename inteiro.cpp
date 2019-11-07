#include "inteiro.h"
#include <stdlib.h>

Inteiro::Inteiro(unsigned int v, char sinal){
  if(sinal =='+')
    valor = v;
  else if(sinal =='-')
    valor = -v;
}

Inteiro::~Inteiro(){}

int Inteiro::getValor(){
  return valor;
}

Inteiro Inteiro::suc(){
  int v = valor+1;
  Inteiro n(abs(v), v<0?'-':'+');
  return n;
}

Inteiro Inteiro::pred(){
  int v = valor-1;
  Inteiro n(abs(v), v<0?'-':'+');
  return n;
}

Inteiro Inteiro::operator+(Inteiro n){
  int v = valor + n.getValor();
  Inteiro s(abs(v), v<0?'-':'+');
  return s;
}

Inteiro Inteiro::operator-(Inteiro n){
  int v = valor - n.getValor();
  Inteiro s (abs(v), v<0?'-':'+');
  return s;
}