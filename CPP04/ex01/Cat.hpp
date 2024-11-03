
#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat &obj);
    Cat & operator=(const Cat &obj);
    void makeSound() const;
    ~Cat();
private:
    Brain *ptr;
};


#endif