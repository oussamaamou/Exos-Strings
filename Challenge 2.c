#include<stdio.h>
#include<string.h>


int main(){
    int i;
    char Chaine[25];
    printf("Veuillez entrer une chaine de caractere : ");
    gets(Chaine);
    for(i=0;Chaine[i]!='\0';i++){
        Chaine[i] = i;
    }
    printf("La longueur de cette chaine de caractere est : %d",i);

return 0;
}
