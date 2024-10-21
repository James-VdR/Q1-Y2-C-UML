#include "Character.h"
#include <iostream>
#include <string>;
#include "Game.h";


Character::Character(Charactertypes aClass, float someHealth, float someDamage)
{
	currentType = aClass;
	health		= someHealth;
	damage		= someDamage;
}

Character::~Character()
{
}



void Character::DoDamage(float someDamage)
{
	health -= someDamage;
}

void Character::Heal(float someHealing)
{
	health += someHealing;
}

void Character::SetCharacterType(Charactertypes aType)
{
	currentType = aType;
}

void Character::SetHealth(float someHealth)
{
	health = someHealth;
}

void Character::SetDamage(float someDamage)
{
	damage = someDamage;
}

float Character::GetHealth()
{
	return health;
	
	
}

float Character::GetDamage()
{
	return damage;
}

float Character::GetStats()
{
	Game delay;
	if (health <= 0)
	{
		Game end;
		end.ending();
	}
	std::cout << "Damage: " << damage << "\n";
	delay.Delay();
	std::cout << "Health: " << health << "\n\n";
	delay.Delay();
	return 0.0f;
}



Charactertypes Character::GetType()
{
	return currentType;
}
