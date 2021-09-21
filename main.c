#include <stdio.h>
#include <stdlib.h>


// Ponteiros nada mais é do que a manipulação na memoria

/* aqui nao vamos falar que vamso receber uma varivel inteira, e sim um id de momoria, usamso * depois do tipo de variavel "int*"
 se a variavel que queremos mostrar o id de memoria(Varivel da função main) for char, etc... onde queremos que seja exibido tbm deve ser char
  */
// especificamos que estamos recebendo um endereço de memoria como parametro de entradada"*" depois da variavel
 void valor(int* num){
 printf("\nO valor sem inclemento: %d\n", (*num)); // agora para imprimirmos essa varivel colocamos ela da seguinte forma: (*variavel)
 printf("localizacao da memomria: %d\n", num); // agora para imprimirmos o endereço de memoria tiramos n o "&" e usamos a variavel normal "variavel"


 //valor++ = imprime o valor e depois o inclemento
 // ++valor = inclementa e depois imprime o valor

 printf("\nO valro da memoria com inclemento : %d\n", ++(*num));
 printf("\nlocalizacao da memoria : %d\n", num);

 }


 //quando declaramos um valor
    // alocamos um espaço na memória para esse valor



 int main(){
  int sla = 10;     //só foi copiado o valor da variavel e nao a variavel em si, por isso mostra 11 somente quando inclementamos "valor", isso se chama copia por valor

  printf(" \no valor que temos antes da inclementacao: %d\n", sla);

  printf("\nlocalizacao da memoria : %d\n", &sla); // tem que usar o "&" para ver o valor de memoria da variavel original
  valor(&sla);
  //colocamos um & para fazer a alteração na memoria

  /* Suponha que estamos fazendo um jogo, e a variavel "sla" é a vida maxima do player
  para dazermos que o valor total da vida seja 11 e nao 10, teremos que fazer alteração na memoria do sistema.
   Para dizer que a variavel vai usar seu respectivo id de memoria, usamos o "&", dizendo para o programa trabalhar com o id dessa variavel*/


  printf("o \nvalor da memoria com inclemento: %d\n", sla);

  printf("\nlocalizacao da memoria e: %d\n", &sla);



 return 0;}
 // agora aprendemos a fazer com que a varivael não copie o valor da variavel e sim a variavel, mesmo depois de inclemntada
