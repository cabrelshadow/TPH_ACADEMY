#include <stdio.h>
#include <stdlib.h>
    int max = 50;
    int min = 10;
    int valeur_myster;
   
int main(int argc, char *argv[])
{
 do{ 
printf('quel est le nombre?')
scanf('%d' valeur_myster);

srand(time(NULL));
valeur_myster = (rand() % (max - max + 1)) + min;
if (valeur_myster>max && valeur_myster<min )
{
  printf("essai encore");
}
if (valeur_myster==max)
{
  printf("vous avez trouver");
}

}
while(valeur_myster==max);


	}