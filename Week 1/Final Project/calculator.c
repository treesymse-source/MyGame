/*  ____  _           ______                                     __   ___    __ __ ___            __  ___     __        ___ 
   / __ \(_)___      / ____/_______  ___  ____  ________       _/_/  /   |  / //_//   |          /  |/  /__  / /_  ____/ (_)
  / /_/ / / __ \    / /   / ___/ _ \/ _ \/ __ \/ ___/ _ \    _/_/   / /| | / ,<  / /| |         / /|_/ / _ \/ __ \/ __  / / 
 / _, _/ / /_/ /   / /___/ /  /  __/  __/ /_/ / /  /  __/  _/_/    / ___ |/ /| |/ ___ |   _    / /  / /  __/ / / / /_/ / /  
/_/ |_/_/ .___/____\____/_/   \___/\___/ .___/_/   \___/  /_/     /_/  |_/_/ |_/_/  |_|  (_)  /_/  /_/\___/_/ /_/\__,_/_/   
       /_/   /_____/                  /_/                                                                                   */


#include <stdio.h>
#include "input.h"
#include "globals.h"


void print_clean(double num) // this function takes care of the trash 1.0000 decimal so it looks modren
{
    if((int)num == num) {
        printf("%.0f", num);
    } else {
        printf("%g", num);
    }
}

void add(double num1, double num2) //just spam print_clean
{
    print_clean(num1);
    printf(" + ");
    print_clean(num2);
    printf(" = ");
    print_clean(num1 + num2);
    printf("\n");
}

void sub(double num1, double num2) // no copy made it bymyself but i have to copy this cuz it pmo to rewrite it
{
    print_clean(num1);
    printf("-");
    print_clean(num2);
    printf("=");
    print_clean(num1 - num2);
    printf("\n");
}

void multiply(double num1, double num2) // no copy made it bymyself but i have to copy this cuz it pmo to rewrite it
{
    print_clean(num1);
    printf("*");
    print_clean(num2);
    printf("=");
    print_clean(num1 * num2);
    printf("\n");
}

void divide(double num1, double num2) // no copy made it bymyself but i have to copy this cuz it pmo to rewrite it
{
    print_clean(num1);
    printf("/");
    print_clean(num2);
    printf("=");
    print_clean(num1 / num2);
    printf("\n");
}