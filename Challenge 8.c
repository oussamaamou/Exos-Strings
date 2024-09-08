#include<stdio.h>
#include<string.h>


int main(){
    char Chaine[50];
    printf("Veuillez entrer une chaine de caractere :");
    gets(Chaine);
    printf("La chaine modifiee est : %s",strlwr(Chaine));
    
return 0;
}
