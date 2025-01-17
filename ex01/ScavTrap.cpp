#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	name = "UNNAMED";
	attackDamage = 20;
	energyPoint = 50;
	hitPoint = 100;
	std::cout << "ScavTrap[" << name << "]: Created" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->name = name;
	attackDamage = 20;
	energyPoint = 50;
	hitPoint = 100;
	std::cout << "ScavTrap[" << name << "]: Created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap[" << name << "]: Died" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& rhs): ClapTrap(rhs)
{
	std::cout << "ScavTrap[" << rhs.name << "]: Created (Copy Construtor)" << std::endl;
	this->name = rhs.name;
	this->attackDamage = rhs.attackDamage;
	this->energyPoint = rhs.energyPoint;
	this->hitPoint = rhs.hitPoint;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs)
{
	if (this != &rhs)
	{
		std::cout << "ScavTrap[" << rhs.name << "]: Copy Assignment Operator Called" << std::endl;	
		this->name = rhs.name;
		this->attackDamage = rhs.attackDamage;
		this->energyPoint = rhs.energyPoint;
		this->hitPoint = rhs.hitPoint;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap[" << name << "]: Attack " << target << "." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "Securing the perimeter!" << std::endl;
}

void	ScavTrap::printAttr()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Attack Damage: " << attackDamage << std::endl;
	std::cout << "Energy Points: " << energyPoint << std::endl;
	std::cout << "Hit Points: " << hitPoint << std::endl;
}