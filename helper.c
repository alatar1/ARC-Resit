#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//besion d'une fonction qui sélectionne
//un mot aléatoire provenant d'une liste

//besoin d'une fonction qui parse le mot
//et qui vérifie l'input utilisateur avec
//chaque lettre du mot.

//génère un nombre aléatoire
int rdmNumber()
{
    srand(time(NULL));
    int r = rand();
    return r;
}

//sélectionne un nombre aléatoire provenant d'une liste
char pickWord(int num, char* listOfWords){
    char* word;
    word = listOfWords[num];
    return word;
}

// récupère l'entrée du joueur
char getUserInput(char messageToPrint)
{
    char userInput;
    printf("%s",messageToPrint);
    scanf("%c", userInput);
    return (userInput);
}

//Renvoie 1 si le joueur a deviner la bonne lettre
//Renvoie 0 si le joueur s'est trompé
int Guess(char userInput /*randomLetter*/)
{
    int resultGuess;
    if (userInput/*== randomLetter*/)
    {
        resultGuess = 1;
    }
    else
    {
        resultGuess = 0;
    }
    return (resultGuess);
}

//fonction qui gère la "vie" du joueur
//counter est décrémenté a chaque erreur
//si counter ==0, la partie est ternminée
int HPCounter(char difficulty)
{
    int counter;
if(difficulty == "easy")
{
    counter = 10;
}
else if (difficulty == "hard")
{
    counter = 5;
}
else
{
    counter = 8;
}
return counter;
}
