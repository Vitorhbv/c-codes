#include <stdlib.h>
#include <stdio.h>

int data(int dia, int mes, int ano){
    int n_mes = 0;
    int n_dias = 0;
    int n_ano = 2020 - ano;
    if (mes > 9){
         n_mes = (n_ano)*12 - (mes - 9);
    }
    else {
         n_mes = (n_ano)*12 + (9 - mes);
    }
    if ((n_mes) % 12 == 0){
        if (dia > 17){
             n_dias = (n_mes)*30 + (n_ano)*5 - (dia - 17);
        }
        else {
             n_dias = (n_mes)*30 + (n_ano)*5 + (17 - dia);
        }
    }
    else if ((n_mes) % 12 == 1){
        if (dia > 17){
             n_dias = (n_mes-1)*30 + (n_ano)*5 - (dia - 17);
        }
        else {
             n_dias = (n_mes-1)*30 + (n_ano)*5 + (17 - dia);
        }
    }
    else if ((n_mes) % 12 == 2){
        if (dia > 17){
             n_dias = (n_mes-2)*30 + (n_ano)*5 - (dia - 17);
        }
        else {
             n_dias = (n_mes-2)*30 + (n_ano)*5 + (17 - dia);
        }
    }
    else if ((n_mes) % 12 == 3){
        if (dia > 17){
             n_dias = (n_mes-3)*30 + (n_ano)*5 - (dia - 17);
        }
        else {
             n_dias = (n_mes-3)*30 + (n_ano)*5 + (17 - dia);
        }
    }
    else if ((n_mes) % 12 == 4){
        if (dia > 17){
             n_dias = (n_mes+1)*30 + (n_ano)*5 - (dia - 17);
        }
        else {
             n_dias = (n_mes+1)*30 + (n_ano)*5 + (17 - dia);
        }
    }
    else if ((n_mes) % 12 == 5){
        if (dia > 17){
             n_dias = (n_mes+2)*30 + (n_ano)*5 - (dia - 17);
        }
        else {
             n_dias = (n_mes+2)*30 + (n_ano)*5 + (17 - dia);
        }
    }
    else if ((n_mes) % 12 == 6){
        if (dia > 17){
             n_dias = (n_mes+3)*30 + (n_ano)*5 - (dia - 17);
        }
        else {
             n_dias = (n_mes+3)*30 + (n_ano)*5 + (17 - dia);
        }
    }    
    else if ((n_mes) % 12 == 7){
        if (dia > 17){
             n_dias = (n_mes+4)*30 + (n_ano)*5 - (dia - 17);
        }
        else {
            int n_dias = (n_mes+4)*30 + (n_ano)*5 + (17 - dia);
        }
    }
    else if ((n_mes) % 12 == 8){
        if (dia > 17){
             n_dias = (n_mes+5)*30 + (n_ano)*5 - (dia - 17);
        }
        else {
             n_dias = (n_mes+5)*30 + (n_ano)*5 + (17 - dia);
        }
    }
    else if ((n_mes) % 12 == 9){
        if (dia > 17){
             n_dias = (n_mes+6)*30 + (n_ano)*5 - (dia - 17);
        }
        else {
             n_dias = (n_mes+6)*30 + (n_ano)*5 + (17 - dia);
        }
    }
    else if ((n_mes) % 12 == 10){
        if (dia > 17){
             n_dias = (n_mes+7)*30 + (n_ano)*5 - (dia - 17);
        }
        else {
             n_dias = (n_mes+7)*30 + (n_ano)*5 + (17 - dia);
        }                    
    }
    else if ((n_mes) % 12 == 11){
        if (dia > 17){
             n_dias = (n_mes+8)*30 + (n_ano)*5 - (dia - 17);
        }
        else {
             n_dias = (n_mes+8)*30 + (n_ano)*5 + (17 - dia);
        }                    
    }
    printf("%d\n%d\n",n_ano,n_mes);
    if ((ano % 4 == 0 && ano % 100 !=0) || ano % 400 == 0){
      n_dias+= (n_ano)/4 + 2;
    }
    else {
      n_dias += (n_ano)/4 + 1;
    }
    return n_dias;
}
   

int main(void){
    int dia, mes, ano;
    while (scanf("%d%d%d",&dia, &mes, &ano)){
    printf("%d",data(dia,mes,ano));
    }
}
