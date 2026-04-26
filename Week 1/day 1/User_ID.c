/*  ____  _           ______                                     __   ___    __ __ ___            __  ___     __        ___ 
   / __ \(_)___      / ____/_______  ___  ____  ________       _/_/  /   |  / //_//   |          /  |/  /__  / /_  ____/ (_)
  / /_/ / / __ \    / /   / ___/ _ \/ _ \/ __ \/ ___/ _ \    _/_/   / /| | / ,<  / /| |         / /|_/ / _ \/ __ \/ __  / / 
 / _, _/ / /_/ /   / /___/ /  /  __/  __/ /_/ / /  /  __/  _/_/    / ___ |/ /| |/ ___ |   _    / /  / /  __/ / / / /_/ / /  
/_/ |_/_/ .___/____\____/_/   \___/\___/ .___/_/   \___/  /_/     /_/  |_/_/ |_/_/  |_|  (_)  /_/  /_/\___/_/ /_/\__,_/_/   
       /_/   /_____/                  /_/                                                                                   */



#include <stdio.h>


int main()
{
    // Declare The User name and the Nickname
    char name[] = "Creepre";
    char nick_name[] = "Faze";
    // Declare The user age 
    int age = 26;
    int birth_year = 2000;
    // Fav langue
    char fav_langue = 'c';
    // Print the User data
    printf("╔══════════════════════════════════════╗\n");
    printf("║      USER INFORMATION DATA SHEET     ║\n");
    printf("║            By.@Faze_Creepre          ║\n");
    printf("╠══════════════════════════════════════╣\n");
    printf("║   User_Name : %s                ║\n", name);
    printf("║   Nick_Name : %s                   ║\n", nick_name);
    printf("║//////////////////////////////////////║\n");
    printf("║   User Age : %d                      ║\n", age);
    printf("║   Birth Year : %d                  ║\n", birth_year);
    printf("╚══════════════════════════════════════╝\n");


    return 0;


}






