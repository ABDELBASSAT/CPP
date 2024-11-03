/* *************************************************************************** */
/*                 *#########                                                  */
/*                ##........../##           KWAK!                              */
/*              *#,.......,##....#######  /                                    */
/*              ##........./....##////##                                       */
/*    ##          ##...........,##((##                                         */
/*   #.###/        ##,..........*                                              */
/*  #(.....(######(###*........,##                                             */
/* ##.............................##      File    : main.cpp                   */
/* ##.    __       __  o       __  ##                                          */
/* ##.   |_  |\ | | __ | |\ | |_    *#.   Created : abquaoub                   */
/*  ##   |__ | \| |__| | | \| |__   ,#,             2024/09/18 05:39:29        */
/*   ##.............................##                                         */
/*    /##........................*##      Updated : abquaoub                   */
/*       ###/................*###.                  2024/09/18 05:39:29        */
/*            ##############.                                                  */
/* *************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int NumberOfZombie = 5;
    Zombie *obj = zombieHorde(NumberOfZombie, "abdelbassat");
    for (int i = 0; i < NumberOfZombie; i++)
        obj[i].announce();

    delete[] obj;
}