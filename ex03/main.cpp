#include "DiamondTrap.hpp"

void	printSep()
{
	for (int i = 0; i < 80; i++)
		std::cout << "=";
	std::cout << std::endl;
}

int	main(void)
{
	{
		DiamondTrap a;
		a.whoAmI();
		a.printAttr();
		a.attack("Kim");
	}
	printSep();
	{
		DiamondTrap b("Trap");
		b.whoAmI();
		b.attack("df");
		b.beRepaired(20);
		b.printAttr();
	}
	printSep();
	{
		DiamondTrap c("CC");
		DiamondTrap d(c);
		d.printAttr();
	}
	return 0;
}