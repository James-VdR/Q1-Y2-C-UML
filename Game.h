#pragma once
#include <string>
#include <iostream>
#include <chrono>
#include <thread>
#include "Character.h"
#include "Charactertypes.h"
#include "Advantagetable.h"
class Game
{
public:
	Game();
	~Game();
	int Delay();
	
	Character* ClassSelection();
	void ending();
private:
	std::string classtype;
	std::string newInput;
	std::string input;
	std::string enemy1ClassType = "Archer";
	std::string enemy2ClassType = "Knight";
	std::string enemy3ClassType = "Wizard";
	Character* PlayerCharacter;
	bool CurrentlyOnClassSelectionMode = true;
	bool DummyStateArcher = false;
	bool DummyStateWizard = false;
	bool DummyStateKnight = false;
	
	AdvantageTable table;
	Character enemy1{ Charactertypes::Archer, 100, 25 };
	Character enemy2{ Charactertypes::Knight, 125, 20 };
	Character enemy3{ Charactertypes::Wizard, 75, 30 };
	
};

