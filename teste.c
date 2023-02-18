#include <stdio.h>
#include <stdlib.h>

int main () {
    int numero,i;

    printf("Digite um Numero:");
    scanf("%d",&numero);

      switch(numero % 2){
        case 0:
          printf("O numero e Par!");
          break;
        default:
          printf("O numero e Impar!");
          break;
      }

        if(numero<=1){
          printf("Nao e primo");
        }else{
          for(i=2; i<numero; i++){
            if(numero%i==0){
              printf("Nao e primo");
              break;
            }
          }
          if(i==numero){
            printf("E primo");
          }
        }

      
      
    return 0;
}