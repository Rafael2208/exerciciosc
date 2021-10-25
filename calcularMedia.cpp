#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
float n1,n2,n3,media;

printf("Digite a nota 1:  ");

scanf("%f",&n1);

printf("Digite a nota 2: ");

scanf("%f",&n2);

printf("Digite a nota 3: ");

scanf("%f",&n3);

media= (n1+n2)/2, (n1+n3)/2,(n2+n3)/2;

printf("A media e %f",media);

printf("\n");

if (media >= 7){
    printf("APROVADO ");
} else {
    printf("REPROVADO ");
}

}
