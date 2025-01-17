#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), FragTrap(), ScavTrap()
{
	name = FragTrap::name;
	hitPoint = FragTrap::hitPoint;
	energyPoint = ScavTrap::energyPoint;
	attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap[" << this->name << "]: Created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): 
	ClapTrap(name + "_clap_name"),
	FragTrap(name), 
	ScavTrap(name)
{
	this->name = name;
	hitPoint = FragTrap::hitPoint;
	energyPoint = ScavTrap::energyPoint;
	attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap[" << this->name << "]: Created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap[" << name << "]: Died" << std::endl;

}

DiamondTrap::DiamondTrap(const DiamondTrap& rhs)
{
	std::cout << "DiamondTrap[" << rhs.name << "]: Created (Copy Construtor)" << std::endl;
	this->name = rhs.name;
	this->attackDamage = rhs.attackDamage;
	this->energyPoint = rhs.energyPoint;
	this->hitPoint = rhs.hitPoint;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &rhs)
{
	if (this != &rhs)
	{
		std::cout << "DiamondTrap[" << rhs.name << "]: Copy Assignment Operator Called" << std::endl;	
		this->name = rhs.name;
		this->attackDamage = rhs.attackDamage;
		this->energyPoint = rhs.energyPoint;
		this->hitPoint = rhs.hitPoint;
	}
	return (*this);
	
}

void	DiamondTrap::attack(const std::string &target)
{
		ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My Name: " << name << " && ClapTrap's Name: " << ClapTrap::name << std::endl;
}

