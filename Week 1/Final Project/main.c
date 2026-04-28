/*  ____  _           ______                                     __   ___    __ __ ___            __  ___     __        ___ 
   / __ \(_)___      / ____/_______  ___  ____  ________       _/_/  /   |  / //_//   |          /  |/  /__  / /_  ____/ (_)
  / /_/ / / __ \    / /   / ___/ _ \/ _ \/ __ \/ ___/ _ \    _/_/   / /| | / ,<  / /| |         / /|_/ / _ \/ __ \/ __  / / 
 / _, _/ / /_/ /   / /___/ /  /  __/  __/ /_/ / /  /  __/  _/_/    / ___ |/ /| |/ ___ |   _    / /  / /  __/ / / / /_/ / /  
/_/ |_/_/ .___/____\____/_/   \___/\___/ .___/_/   \___/  /_/     /_/  |_/_/ |_/_/  |_|  (_)  /_/  /_/\___/_/ /_/\__,_/_/   
       /_/   /_____/                  /_/                                                                                   */


#include <stdio.h>
#include "input.h"
#include "globals.h"
#include "calculator.h"

void calculation()
{
    ask_num();
    ask_operation();

    switch(operation){
        case '-':
            sub(num1, num2);
            break;
        case '+':
            add(num1, num2);
            break;
        case '*':
            multiply(num1, num2);
            break;
        case '/':
            if (num2 == 0 || num1 == 0) {
             printf("Cant divide by 0\n");
             calculation();     
            }  else {
             divide(num1, num2);
            }
            break;        
       }
}

int main()
{
    printf("Welcome\n");

    calculation();
   

    printf("Would u like to Try again? y/n : \n");
    char anwser;
    scanf(" %c", &anwser);
    if (anwser == 'y' || anwser == 'Y'){
        calculation();
    
    }else {
        printf("Thanks For testing \n");
    }

    return 0;
    
}




