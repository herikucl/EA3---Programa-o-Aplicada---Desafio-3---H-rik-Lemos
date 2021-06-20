#include <iostream>
#include "desafio3.h"
using namespace std;

int main() {
  tInvestimento k;
  tInvestimento j;
  k.Montante=1000;
  k.JurosAno=0.1;
  k.Periodo=3;
  j.Montante=1500;
  j.JurosAno=0.2;
  j.Periodo=2;

  cout<<"Montante de k"<<k.Montante<<endl;
  cout<<"Juros ao ano de k"<<k.JurosAno<<endl;
  cout<<"Periodo de k"<<k.Periodo<<endl;
  cout<<"Montante de j"<<j.Montante<<endl;
  cout<<"Juros ao ano de j"<<j.JurosAno<<endl;
  cout<<"Periodo de j"<<j.Periodo<<endl;
  



  
}