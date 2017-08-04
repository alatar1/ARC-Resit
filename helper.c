#include <stdio.h>
#include <stdlib.h>
#include <helper.h>
#include <time.h>

//besion d'une fonction qui sélectionne
//un mot aléatoire provenant d'une liste

//besoin d'une fonction qui parse le mot
//et qui vérifie l'input utilisateur avec
//chaque lettre du mot.

// récupère l'entrée du joueur
char getUserInput(char messageToPrint){
    char userInput;,
    printf(messageToPrint);
    scanf("%c", userInput);
    return (userInput);
}

//Renvoie 1 si le joueur a deviner la bonne lettre
//Renvoie 0 si le joueur s'est trompé
int Guess(char userInput, /*randomLetter*/){
    int resultGuess;
    if(userInput == /*randomLetter*/)
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
void HPCounter(char difficulty){
    int counter;
 switch (difficulty)
 {
 case "easy":
    counter = 10;
     break;
case "medium" :
        counter = 8;
    break;
case "hard":
    counter = 5;
    break;
 default:
    counter = 8;
     break;

    // a completer
 }   
}