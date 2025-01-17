#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	private:
	
	public:
		ScavTrap();
		ScavTrap(std::string name);
		virtual	~ScavTrap();
		ScavTrap(const ScavTrap& rhs);
		ScavTrap& operator=(const ScavTrap &rhs);
		
		virtual void	attack(const std::string &target);
		void	guardGate();
		void	printAttr();
		
};
