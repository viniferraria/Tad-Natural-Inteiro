#ifndef INTEIRO_H
#define INTEIRO_H

class Inteiro{
  private: 
    int valor;
    char sinal;

  public: 
    Inteiro(unsigned int v, char sinal);
    ~Inteiro();
    int getValor();
    Inteiro suc();
    Inteiro pred();
    Inteiro operator+(Inteiro n);
    Inteiro operator-(Inteiro n);
};
#endif