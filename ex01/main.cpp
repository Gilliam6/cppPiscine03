#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main( void )
{
	ScavTrap A("Navalniy");
	ScavTrap B;

	std::cout << B;
	B = A;
	A.attack("Putin");
	B.attack("your anus");
	std::cout << B;
	ScavTrap C(A);
	std::cout << C;
	C.guardGate();
	return 0;
}