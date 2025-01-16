#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <sstream>
#include <string>

class ClapTrap
{
	private:

	protected:
		std::string		name;
		unsigned int	hitPoint;
		unsigned int	energyPoint;
		unsigned int	attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		virtual	~ClapTrap();
		ClapTrap(ClapTrap& rhs);
		ClapTrap& operator=(const ClapTrap &rhs);
		
		virtual void	attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif