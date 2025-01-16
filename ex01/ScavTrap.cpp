#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap Also Created" << std::endl;
	attackDamage = 20;
	energyPoint = 50;
	hitPoint = 100;
	this->guard = false;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap already Died." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& rhs)
{
	*this = rhs;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs)
{
	if (this != &rhs)
	{
		this->guard = rhs.guard;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << "Scav Attack " << target << std::endl;
}

void	ScavTrap::guardGate()
{
	guard = true;
	std::cout << "Gate Keeper Mode Activated" << std::endl;
}

void	ScavTrap::printAttr()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Attack Damage: " << attackDamage << std::endl;
	std::cout << "Energy Points: " << energyPoint << std::endl;
	std::cout << "Hit Points: " << hitPoint << std::endl;
	std::cout << "Guard: " << guard << std::endl;
}