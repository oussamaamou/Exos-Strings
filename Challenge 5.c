#include<stdio.h>
#include<string.h>


int main(){
    char Chaine[50];
    printf("Veuillez entrer une chaine de caractere :");
    gets(Chaine);
    printf(" \t %s",strrev(Chaine));
    
return 0;
}
