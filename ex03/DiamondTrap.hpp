#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string	name;
		std::string	clap_name;
		int			hitPoint;
		int			energyPoint;
		int			attackDamage;
	
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap& rhs);
		DiamondTrap& operator=(const DiamondTrap &rhs);

		void attack(const std::string &target); 
		void	whoAmI();
};
