#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main( void )
{
	ScavTrap A("Navalniy");
	ScavTrap B ("Gachi");

	std::cout << B;
	B = A;
	A.attack("Putin");
	B.attack("your anus");
	std::cout << B;
	ScavTrap C(A);
	std::cout << C;
	C.guardGate();

	FragTrap X("Pyotr");
	FragTrap Y("Zelyonka");
	std::cout << X;
	std::cout << Y;
	X.attack(A.getName());
	Y.attack(A.getName());
	X.highFivesGuys();
	Y.highFivesGuys();
	Y = X;
	Y.highFivesGuys();
	return 0;
}