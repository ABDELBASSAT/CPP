

#include "Character.hpp"
#include "linked.hpp"

#include "Cure.hpp"
#include "Ice.hpp"

Character::Character() : name("AKAZA")
{
	head = ft_lstnew(new Ice());
	for (int i = 0; i < 4; i++)
		ptr[i] = NULL;
}

Character::Character(std::string name)
{
	head = ft_lstnew(new Ice());
	this->name = name;
	for (int i = 0; i < 4; i++)
		ptr[i] = NULL;
}

Character::Character(const Character &obj)
{
	*this = obj;
}

Character &Character::operator=(const Character &obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
	}
	return (*this);
}

Character::~Character()
{

}

std::string const &Character::getName() const
{
	return (name);
}

void Character::equip(AMateria *m)
{


	for (int i = 0; m && i < 4; i++)
	{
		if (ptr[i] == NULL)
		{
			ptr[i] = m;
			ft_lstadd_back(&head , ft_lstnew(m));
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx > 3 || idx < 0 || !ptr[idx])
		return ;
	ptr[idx] = NULL;
}


void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || !ptr[idx])
	{
	 t_data *tmp;
	while(head)
	{
		tmp = head->next;
		delete head->content;
		delete head;
		head = tmp;
	}
		std::cout << "THIS SLOT NOT FOUND!" << std::endl;
		return ;
	}
	ptr[idx]->use(target);
}
