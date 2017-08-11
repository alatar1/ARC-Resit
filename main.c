#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include "helper.h"

//déclaration des variables et des constantes;

 char *listOfWords[] = {"jambon", "merlot", "melon", "saucisse", "broccoli"};
 char *my_array[] = {"eenie","meenie","miney"};
//int n = rdmNumber();
int n = 0;
char theWord [];

//boucle de jeu
void main(int argc, char const *argv[])
{
    theWord = pickWord(n, &listOfWords);
    printf("Hangman being build ...");
    printf("n value is : %d", n);
    printf("the word is : %s", theWord);
    getchar();
}
