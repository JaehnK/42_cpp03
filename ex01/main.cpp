#include "ScavTrap.hpp"

void	PrintSep(void)
{
	for (int i=0; i<40; i++)
		std::cout << "-" ;
	std::cout << std::endl;
}

int	main(void)
{
	{
		ClapTrap *st = new ScavTrap();
		st->attack("Target");
		st->beRepaired(10);
		st->takeDamage(10);
		// st.printAttr();
		delete st;
	}
	PrintSep();
	{
		ScavTrap st;
		st.attack("Target");
		st.guardGate();
		ScavTrap st2(st);
		// st.printAttr();
	}
	PrintSep();
	{
		ClapTrap cl("NAME?");
		cl.attack("Target");
		// st.printAttr();
	}
	
	return 0;
}