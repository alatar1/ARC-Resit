#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include "helper.h"

//déclaration des variables et des constantes;
char* listOfWords[][15] = {"jambon", "merlot", "melon", "saucisse", "broccoli"};
int n = rdmNumber();

//boucle de jeu
void main(int argc, char const *argv[])
{
   char* theWord = pickWord(int n, char* listOfWords);
    printf("Hangman being build ...");
    printf("n value is : %d", n);
    printf("the word is : %s", theWord);
    getchar();
}
