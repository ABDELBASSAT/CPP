/* *************************************************************************** */
/*                 *#########                                                  */
/*                ##........../##           KWAK!                              */
/*              *#,.......,##....#######  /                                    */
/*              ##........./....##////##                                       */
/*    ##          ##...........,##((##                                         */
/*   #.###/        ##,..........*                                              */
/*  #(.....(######(###*........,##                                             */
/* ##.............................##      File    : HumanA.cpp                 */
/* ##.    __       __  o       __  ##                                          */
/* ##.   |_  |\ | | __ | |\ | |_    *#.   Created : abquaoub                   */
/*  ##   |__ | \| |__| | | \| |__   ,#,             2024/09/18 05:41:09        */
/*   ##.............................##                                         */
/*    /##........................*##      Updated : abquaoub                   */
/*       ###/................*###.                  2024/09/18 05:41:09        */
/*            ##############.                                                  */
/* *************************************************************************** */

#include "HumanA.hpp"


void HumanA::attack()
{
  std::cout << name <<  " attacks with their " << AR.getType() << std::endl;
}


HumanA::HumanA(std::string nn , Weapon& weaponn):AR(weaponn)
{  
    name = nn;
}

HumanA::~HumanA()
{
}
