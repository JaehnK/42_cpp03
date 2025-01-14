#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clap1("Hello");
	ClapTrap	clap3;

	clap1.attack("World");
	clap1.beRepaired(15);
	clap1.takeDamage(15);

	ClapTrap clap2 = clap1;
	std::cout << std::endl;
}