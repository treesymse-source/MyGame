/*  ____  _           ______                                     __   ___    __ __ ___            __  ___     __        ___ 
   / __ \(_)___      / ____/_______  ___  ____  ________       _/_/  /   |  / //_//   |          /  |/  /__  / /_  ____/ (_)
  / /_/ / / __ \    / /   / ___/ _ \/ _ \/ __ \/ ___/ _ \    _/_/   / /| | / ,<  / /| |         / /|_/ / _ \/ __ \/ __  / / 
 / _, _/ / /_/ /   / /___/ /  /  __/  __/ /_/ / /  /  __/  _/_/    / ___ |/ /| |/ ___ |   _    / /  / /  __/ / / / /_/ / /  
/_/ |_/_/ .___/____\____/_/   \___/\___/ .___/_/   \___/  /_/     /_/  |_/_/ |_/_/  |_|  (_)  /_/  /_/\___/_/ /_/\__,_/_/   
       /_/   /_____/                  /_/                                                                                   */


#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int max_tries = 10;
int tries = 0;
int random_number = 100;


int main()
{
    int secret = rand() % random_number + 1;
    printf("Welcome to my gusessing game : \n");
    printf("U have to Guess Between 1 and %d\n", random_number);
    


    while (tries < max_tries)
    {
        int guess;
        scanf("%d", &guess);
        if (secret == guess ){
            printf("U win??? Daym\n");
            printf("It Took u %d tries to Guess it GG!!\n", tries);
            break;
        }else if(secret < guess){
            printf("Nah u Too Far\n");
            printf("U still have %d tries left!!\n", max_tries - tries);
            tries++;
        }else if(secret > guess){
            printf("Too close GAMBARI GAMBARII\n");
            printf("dont worrie u have %d tries left \n", max_tries - tries);
            tries++;
        }

    }
}