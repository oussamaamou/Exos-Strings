#include<stdio.h>
#include<string.h>


int main(){
    int i;
    char Chaine[50];
    char Cprs[50];
    printf("Veuillez entrer une chaine de caractere :");
    gets(Chaine);
    printf("Veuillez entrer une autre chaine de caractere :");
    gets(Cprs);
   
    if(strcmp(Chaine,Cprs) == 0)
    printf("Les deux chaines sont egales.");
    else
    printf("Les deux chaines sont differentes.");
    
return 0;
}
