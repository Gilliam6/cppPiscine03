#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
private:
	FragTrap();
public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(FragTrap const *ar);

	FragTrap& operator= (FragTrap const &ar);

	void 	highFivesGuys(void) const;
};
#endif
