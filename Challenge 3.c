#include<stdio.h>
#include<string.h>


int main(){
    int i;
    char Chaine[50];
    char Cmpl[50];
    printf("Veuillez entrer une chaine de caractere :");
    gets(Chaine);
    printf("Veuillez entrer une autre chaine de caractere :");
    gets(Cmpl);
    strcat(Cmpl,Chaine);
    puts(Cmpl);

return 0;
}
