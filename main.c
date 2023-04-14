#include <stdio.h>
int main(void) {
  int horas, ayudador, ayuda2, ayuda3, i=1 ,empleados;
  float valor_hora,montoventa, salariototal, salariobruto, bonificaciones,aporteiess, montohoraextra,salarioconhoraextra, bono, salariohyb,totalnomina;
    printf("ingrese la cantidad de empleados \n");
    scanf("%i", &empleados);
  while (i <empleados+1){
    printf("empleado %i\n",i);
    printf("ingrese las horas trabajadas\n");
    scanf("%i", &horas);
    printf("ingrese el valor por horas trabajadas\n");
    scanf("%f", &valor_hora);
    printf("ingrese el monto de ventas por mes\n");
    scanf("%f", &montoventa);
    if (horas <= 40){
      salariobruto=horas*valor_hora;
    }
  //HORAS EXTRA//
    else {
      ayudador= horas-40;
      // si tiene hasta 10 horas extra 10% extra por cada hora //
      if (ayudador <= 10){
        montohoraextra=valor_hora*0.1*ayudador;
      }
      // si tiene de 11 a 15 horas //
      else if ( ayudador > 15){
        ayuda2=ayudador-10;
        montohoraextra=10*(valor_hora*0.1)+ayuda2*(valor_hora*0.15);
      }
      //si tiene 16 horas o más//
      else if (ayudador >= 16 ){
        ayuda3=ayudador-15;
        montohoraextra=10*(valor_hora*0.1)+5*(valor_hora*0.15)+ayuda3*(valor_hora*0.2);
      }
      salariobruto=horas*valor_hora;
      salarioconhoraextra=montohoraextra+salariobruto;
    }
  // BONIFICACIONES//
    if (montoventa <= 800)
      bono=montoventa*0.02;
    else if ( montoventa <=1500)
      bono=montoventa*0.04;
    else if ( montoventa <=3000)
      bono=montoventa*0.06;
    else 
      bono=montoventa*0.08;
    salariohyb=montohoraextra+salariobruto;
    aporteiess=salariohyb*0.0945;
    salariototal=salariohyb-aporteiess+bono;
    printf ("el número de horas trabajadas es:%i \n", horas);
    printf("el valor por hora es: %0.2f $\n", valor_hora);
    printf("el valor del salario considerando horas extra (salario bruto)es : %0.2f $\n",salariohyb);
    printf("el salario total es: %0.2f $\n", salariototal);
    i++;
    totalnomina+=salariototal;
  }
  printf("el valor de la nomina es: %0.2f $\n", totalnomina);
  return 0;
}