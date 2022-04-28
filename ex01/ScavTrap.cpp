#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

// CONSTRUCTOR BLOCK
ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_HP = 100;
	_EP = 50;
	_DMG = 20;
	std::cout << "Overloaded ScavTrap constructor <std::string> call" <<
	std::endl;
	return ;
}

ScavTrap::ScavTrap()
{
	std::cout << "Constructor ScavTrap <default> call" << std::endl;
	_name = "default";
	_HP = 100;
	_EP = 50;
	_DMG = 20;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Deconstructor ScavTrap <default> call" << std::endl;
	return ;
}

//OPERATORS BLOCK

ScavTrap& ScavTrap::operator=(ScavTrap const &ar)
{
	std::cout << "Assignation ScavTrap call" << std::endl;
	if (this != &ar)
	{
		this->_name = ar.getName();
		this->_HP = ar.getHP();
		this->_EP = ar.getEP();
		this->_DMG = ar.getDMG();
	}
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << _name << " is in guard gate mode." << std::endl;
	return;
}

std::ostream &	operator<< (std::ostream &o, ScavTrap const &ar)
{
	o << ar.getName() << " Class" << std::endl;
	return (o);
}
