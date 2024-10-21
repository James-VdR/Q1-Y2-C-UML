#pragma once
#include <string>
#include "Charactertypes.h"


class Character
{
public:
	Character() = default;
	Character(Charactertypes aClass , float someHealth, float someDamage);
	~Character();
	
	

	void DoDamage(float someDamage);
	void Heal(float someHealing);

	void SetCharacterType(Charactertypes aType);
	void SetHealth(float someHealth);
	void SetDamage(float someDamage);

	float GetHealth();
	float GetDamage();
	
	

	float GetStats();
	Charactertypes GetType();

private:
	Charactertypes currentType;
	float health;
	float damage;
	

public:

};

