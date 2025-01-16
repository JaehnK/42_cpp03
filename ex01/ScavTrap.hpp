#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		bool	guard;
	
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(ScavTrap& rhs);
		ScavTrap& operator=(const ScavTrap &rhs);
		
		void	attack(const std::string &target);
		void	guardGate();
		void	printAttr();
		
};
