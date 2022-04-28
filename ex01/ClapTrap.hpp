#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>
class ClapTrap
{
protected:
	std::string	_name;
	int			_HP;
	int 		_EP;
	int 		_DMG;

public:
	ClapTrap(std::string name);

	ClapTrap();
	ClapTrap(ClapTrap const &ar);
	~ClapTrap();

	ClapTrap& operator= (const ClapTrap &);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName(void) const;
	int getHP(void) const;
	int getEP(void) const;
	int getDMG(void) const;
};
std::ostream & operator<<(std::ostream &o, ClapTrap const & ar);
#endif
