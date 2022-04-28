#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ClapTrap const & copy);
	~ScavTrap();

	ScavTrap &	operator=(ScavTrap const & other);

	void	guardGate();
};
#endif
