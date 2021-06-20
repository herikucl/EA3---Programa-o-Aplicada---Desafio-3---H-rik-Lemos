#include<math.h>
struct tInvestimento
{
  int Periodo;
  float Montante,JurosAno;

float MontanteFinalJS(){
return (Montante*JurosAno*Periodo)+Montante;
}

float MontanteFinalJC(){
return Montante*pow((1+JurosAno),Periodo);
}

float ConversaoJanoJmes(){
return pow(1+JurosAno,(1.0/12.0))-1;
}

};