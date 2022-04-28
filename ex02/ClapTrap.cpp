#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("default"), _HP(10), _EP(10), _DMG(0)
{
	std::cout << "ClapTrap Base constructor call\n";
	return;
}

ClapTrap::ClapTrap(ClapTrap const &ar)
{
	std::cout << "Overload constructor <ClapTrap> call\n";
 	*this = ar;
	return ;
}

ClapTrap::ClapTrap(std::string const name): _name(name), _HP(10), _EP(10),
_DMG(0)
{
	std::cout << "Overload constructor <std::string> call\n";
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor call\n";

	return ;
}

std::string ClapTrap::getName() const
{
	return (_name);
}

int ClapTrap::getHP(void) const
{
	return (_HP);
}

int ClapTrap::getEP(void) const
{
	return (_EP);
}

int ClapTrap::getDMG(void) const
{
	return (_DMG);
}

void ClapTrap::attack(const std::string& target)
{
	if (_EP && _HP > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target
				  << ", causing " << _DMG << " points of damage!" << std::endl;
		_EP--;
	}
	else
		std::cout << "ClapTrap are tired and can't attack" << std::endl;
  // ClapTrap <name> attacks <target>, causing <damage> points of damage!
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_HP > 0)
	{
		std::cout << "ClapTrap " << _name << " takes " << amount << " points "
								"of damage" << std::endl;
		_HP -= amount;
	}
	else
		std::cout << "ClapTrap " << _name << "is dead =(" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_EP && _HP > 0)
	{
		std::cout << "ClapTrap " << _name << " heal self on " << amount
				  << " points of HP" << std::endl;
		_EP--;
		_HP += amount;
	}
	else
		std::cout << "ClapTrap are too tired for healing" << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &other)
{
	std::cout << "Assignement operator called ";
	if (this != &other)
	{
		this->_name = other.getName().append("Clone");
		this->_HP = other.getHP();
		this->_EP = other.getEP();
		this->_DMG = other.getDMG();
	}
	return *this;
}
std::ostream & operator<<(std::ostream &o, ClapTrap const & ar)
{
	o << ar.getName() << " have " << ar.getHP() << " HP " << ar.getEP() << " energy "
							   "and " << ar.getDMG() << " damage" << std::endl;
	return (o);
}