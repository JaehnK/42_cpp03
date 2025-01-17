#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "Unnamed";
	std::cout << "ClapTrap " << name << " has Created" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap " << name << " has Created" << std::endl;
	this->name = name;
	this->hitPoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " has Died" << std::endl;
} 

ClapTrap::ClapTrap(ClapTrap& rhs)
{
	std::cout << "ClapTrap " << rhs.name << " has Created (Copy Construtor)" << std::endl;
	*this = rhs;
	this->hitPoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	if (this != &rhs)
	{
		std::cout << rhs.name << " Copy Assignment Operator Called" << std::endl;
		this->name = rhs.name;
		this->hitPoint = rhs.hitPoint;
		this->energyPoint = rhs.energyPoint ;
		this->attackDamage = rhs.attackDamage;	
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	std::stringstream ss;

	ss << name << " attacks " << target << ", causing " << attackDamage <<" points of damage!";
	std::cout << ss.str() << std::endl;
	energyPoint--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::stringstream ss;

	ss << name << " has taken" << amount << " points of damage!";
	std::cout << ss.str() << std::endl;
	hitPoint -= amount;
	std::cout << name << "'s hitEnergy : " << hitPoint << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::stringstream ss;

	ss << name << " is repaired" << amount << "point!";
	hitPoint += amount;
	std::cout << name << "'s hitEnergy : " << hitPoint << std::endl;
	energyPoint--;
}
