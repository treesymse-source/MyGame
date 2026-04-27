/*  ____  _           ______                                     __   ___    __ __ ___            __  ___     __        ___ 
   / __ \(_)___      / ____/_______  ___  ____  ________       _/_/  /   |  / //_//   |          /  |/  /__  / /_  ____/ (_)
  / /_/ / / __ \    / /   / ___/ _ \/ _ \/ __ \/ ___/ _ \    _/_/   / /| | / ,<  / /| |         / /|_/ / _ \/ __ \/ __  / / 
 / _, _/ / /_/ /   / /___/ /  /  __/  __/ /_/ / /  /  __/  _/_/    / ___ |/ /| |/ ___ |   _    / /  / /  __/ / / / /_/ / /  
/_/ |_/_/ .___/____\____/_/   \___/\___/ .___/_/   \___/  /_/     /_/  |_/_/ |_/_/  |_|  (_)  /_/  /_/\___/_/ /_/\__,_/_/   
       /_/   /_____/                  /_/                                                                                   */






       
#include <stdio.h>

//ask the op

void calcul()
{
       int number1,number2;
       char op;

       //Input from the user
       printf("Enter The Firts Number : \n");
       scanf("%d",&number1);
       printf("Enter The Second Number : \n");
       scanf("%d",&number2);



       //clear
       getchar();

       printf("What opertation would u like ? :\n");
       scanf("%c",&op);

       switch(op)
       {
              case '-':
                  printf("%d - %d = %d",number1, number2 , number1 - number2);
                  break;
              case '+':
                  printf("%d + %d = %d", number1, number2 , number1 + number2);
                  break;
              case '*':
                  printf("%d * %d = %d", number1, number2 , number1 * number2);
                  break;
              case '/':
                  if(number1&&number2 <= 0){
                     printf("Cant divide by 0");
                  }else if(number1&&number2 > 0){
                     printf("%d / %d = %d", number1, number2 , number1 / number2);
                  } else printf("Invalid OP");
                  
       }

}

int main()
{
    calcul();
    return 0;
}