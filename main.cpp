#include <stdlib.h>
#include <iostream>
#include "natural.h"

using namespace std;

int main(){
  Natural b (5);
  Natural c (12);
  Inteiro d (10,'+');
  cout << "c: " << c.getValor() << endl;
  cout << "d: " << d.getValor() << endl;
  Inteiro e = c+d;
  cout << "c + d = " << e.getValor();


  return 0;
}