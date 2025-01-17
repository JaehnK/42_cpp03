#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:
		
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(FragTrap& rhs);
		FragTrap &operator=(const FragTrap &rhs);

		void	attack(const std::string &target);
		void	highFivesGuys(void);
};
