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

  cout<<"Montante de k: R$"<<k.Montante<<endl;
  cout<<"Juros ao ano de k: R$"<<k.JurosAno<<"%"<<endl;
  cout<<"Periodo de k: "<<k.Periodo<<" anos"<<endl;
  cout<<"Montante de j: R$"<<j.Montante<<endl;
  cout<<"Juros ao ano de j: R$"<<j.JurosAno<<"%"<<endl;
  cout<<"Periodo de j: "<<j.Periodo<<" anos"<<endl;
  cout<<"\n------FUNÇÕES PRINCIPAIS--------\n"<<endl;
  cout<<"Montante ao final do periodo de k com juros simples: R$"<<k.MontanteFinalJS()<<endl;
  cout<<"Montante ao final do periodo de k com juros compostos: R$"<<k.MontanteFinalJC()<<endl;
  cout<<"Conversão de juros anuais para juros mensais de k: "<<k.ConversaoJanoJmes()<<"%"<<endl;
  cout<<"Montante ao final do periodo de j com juros simples: R$"<<j.MontanteFinalJS()<<endl;
  cout<<"Montante ao final do periodo de k com juros compostos: R$"<<j.MontanteFinalJC()<<endl;
  cout<<"Conversão de juros anuais para juros mensais de j: "<<j.ConversaoJanoJmes()<<"%"<<endl;
  cout<<"\n------FUNÇÕES EXTRAS-------\n"<<endl;
  cout<<"Montante ao final do periodo de k com juros simples: R$"<<k.MontanteFinalJS(5)<<endl;
  cout<<"Montante ao final do periodo de k com juros compostos: R$"<<k.MontanteFinalJC(8)<<endl;
  cout<<"Montante ao final do periodo de j com juros simples: R$"<<j.MontanteFinalJS(9)<<endl;
  cout<<"Montante ao final do periodo de k com juros compostos: R$"<<j.MontanteFinalJC(10)<<endl;
  



  
}