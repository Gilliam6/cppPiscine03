#include "FragTrap.hpp"

//CONSTRUCTOR BLOCK
FragTrap::FragTrap(std::string name)
{
	_name = name;
	_HP = 100;
	_EP = 50;
	_DMG = 20;
	std::cout << "Overloaded FragTrap constructor <std::string> call" <<
			  std::endl;
	return ;
}

FragTrap::FragTrap()
{
	std::cout << "Constructor FragTrap <default> call" << std::endl;
	_name = "default";
	_HP = 100;
	_EP = 50;
	_DMG = 20;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "Deconstructor FragTrap <default> call" << std::endl;
	return ;
}

//OPERATORS BLOCK

FragTrap& FragTrap::operator=(FragTrap const &ar)
{
	std::cout << "Assignation FragTrap call" << std::endl;
	if (this != &ar)
	{
		this->_name = ar.getName();
		this->_HP = ar.getHP();
		this->_EP = ar.getEP();
		this->_DMG = ar.getDMG();
	}
	return (*this);
}

//FUNC

void FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap " << _name << " give me five" << std::endl;
	return ;
}
