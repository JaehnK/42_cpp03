#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	private:
		
	public:
		FragTrap();
		FragTrap(std::string name);
		virtual	~FragTrap();
		FragTrap(const FragTrap& rhs);
		FragTrap &operator=(const FragTrap &rhs);

		virtual void	attack(const std::string &target);
		void	highFivesGuys(void);
};
