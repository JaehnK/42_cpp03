#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
	
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap& rhs);
		ScavTrap& operator=(const ScavTrap &rhs);
		
		void	attack(const std::string &target);
		void	guardGate();
		void	printAttr();
		
};
