#include "Game.h"

Game::Game()
{

}

Game::~Game()
{
}



int Game::Delay()
{
    for (int i = 1; i > 0; --i) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    return 0;
}


Character* Game::ClassSelection()
{
    
    std::cout << "\nBooting up game";
    Delay();
    std::cout << ".";
    Delay();
    std::cout << ".";
    Delay();
    std::cout << ".\n";
    Delay();
    std::cout << "\nLoading Classes\n\n";
    Delay();
    
    std::cout << "Class 1 : " << "Archer" << "\n";
    std::cout << "Damage: " << "25" << "\n";
    std::cout << "Health: " << "100" << "\n";
    std::cout << "\n";
    Delay();
   
    std::cout << "Class 2 : " << "Wizard" << "\n";
    std::cout << "Damage: " << "30" << "\n";
    std::cout << "Health: " << "75" << "\n";
    std::cout << "\n";
    Delay();
   
    std::cout << "Class 3 : " << "Knight" << "\n";
    std::cout << "Damage: " << "20" << "\n";
    std::cout << "Health: " << "125" << "\n";
    std::cout << "\n";

    std::cout << "Press a number to select a Class\n";
    std::cout << "\n";
    
   
    std::getline(std::cin, input);
    while(CurrentlyOnClassSelectionMode == true) {
        if (input != "1" && input != "2" && input != "3") {
            std::cout << "\nInvalid class detection \n\n";

            std::cout << "Class 1 : " << "Archer" << "\n";
            std::cout << "Damage: " << "25" << "\n";
            std::cout << "Health: " << "100" << "\n";
            std::cout << "\n";
            Delay();

            std::cout << "Class 2 : " << "Wizard" << "\n";
            std::cout << "Damage: " << "30" << "\n";
            std::cout << "Health: " << "75" << "\n";
            std::cout << "\n";
            Delay();

            std::cout << "Class 3 : " << "Knight" << "\n";
            std::cout << "Damage: " << "20" << "\n";
            std::cout << "Health: " << "125" << "\n";
            std::cout << "\n";
            Delay();

            std::cout << "Press a number to select a Class\n";
            std::cout << "\n";

            
            std::getline(std::cin, newInput);
        }
        
        
       
        if (input == "1" || newInput == "1") {
            std::cout << "you choose the Archer class\n";
            Delay();
            classtype = "Player-Archer";
            Delay();
            PlayerCharacter = new Character(Charactertypes::Archer, 100.0f, 25.f);
            CurrentlyOnClassSelectionMode = false;
        }
        if (input == "2" || newInput == "2") {
            std::cout << "you choose the Wizard class\n";
            Delay();
            classtype = "Player-Wizard";
            Delay();
            PlayerCharacter = new Character(Charactertypes::Wizard, 75, 30);
            CurrentlyOnClassSelectionMode = false;
        }
        if (input == "3" || newInput == "3") {
            std::cout << "you choose the Knight class\n";
            Delay();
            classtype = "Player-Knight";
            Delay();
            PlayerCharacter = new Character(Charactertypes::Knight, 125, 20);
            CurrentlyOnClassSelectionMode = false;
        }
        
        
        
    }


    while (CurrentlyOnClassSelectionMode == false && DummyStateArcher == false && DummyStateKnight == false && DummyStateWizard == false) {
        

        std::cout << "Welcome to the Combat Arena lets go through a small tutorial to get you refreshed on how to fight!.\n";
        Delay();
        std::cout << "Alright lets get started with the basics.\n";
        Delay();
        std::cout << "First off all let me explain combat roles.\n";
        Delay();
        std::cout << "There are 3 combat classes found in the world.\n";
        Delay();
        std::cout << "You can come across wizards knights and archers.\n";
        Delay();
        std::cout << "However due to recent corruption of a unknown source they all seem to be rendered... hostile.\n";
        Delay();
        std::cout << "It is all rather simple however, as a archer you are weak to wizards and deal less damage to them.\n";
        Delay();
        std::cout << "You also take more damage when being attacked by a wizard.\n";
        Delay();
        std::cout << "The wizard however is weak to the knight, and in turn the knight is weak to the archer!.\n";
        Delay();
        std::cout << "i set up some combat dummy's for you to practise on, have a pick.\n";
        Delay();
        std::cout << "1: archer Dummy.\n";
        std::cout << "2: knight Dummy.\n";
        std::cout << "3: Wizard Dummy.\n";

        std::string Thirdinput;
        std::getline(std::cin, Thirdinput);

        if (input != "1" && input != "2" && input != "3"){
            std::cout << "that aint one of the choises we gave you bucko...\n";
            Delay();
            Delay();
            Delay();
            std::cout << "You know what. just because of that you are going to have to sit through all that dialouge again.\n";
            Delay();
            Delay();
            Delay();
            std::cout << "yeah, dont you feel stupid now? well you shouldnt be tryna break the game now should you?!\n\n\n";
            Delay();
            Delay();
        }
        if (Thirdinput == "1") {
            std::cout << "Player : Ill take a shot at the Archer\n";
            DummyStateArcher = true;
        }
        if (Thirdinput == "2") {
            std::cout << "Player : Ill take a shot at the Knight\n";
            DummyStateKnight = true;
        }
        if (Thirdinput == "3") {
            std::cout << "Player : Ill take a shot at the Wizard\n";
            DummyStateWizard = true;
        }
       

    }
    while (DummyStateArcher == true) {
        
        std::cout << "You take your stance against the archer dummy\n";
        std::cout << "what do you do?\n";
        std::cout << "1: Attack\n";
        std::cout << "2: Observe\n";
       
        std::string fourthinput;
        std::getline(std::cin, fourthinput);
       
        if (fourthinput == "1") {
            Delay();
            std::cout << "you choose to Attack, using your skill and power\n";
            Delay();
            std::cout << "Pow! direct hit!\n\n";
            Delay();
            float multiplier = table.CalculateMultiplier(PlayerCharacter->GetType(), enemy1.GetType());
            float amountOfDamage = multiplier * PlayerCharacter->GetDamage();
            enemy1.DoDamage(amountOfDamage);
            Delay();
            std::cout << "Dummy-" << enemy1ClassType << "\n";
            Delay();
            enemy1.GetStats();
           
        }
        if (fourthinput == "2") {
            std::cout << "you stare at the dummy";
            Delay();
            std::cout << ".";
            Delay();
            std::cout << ".";
            Delay();
            std::cout << ".";
            Delay();
            std::cout << "you start to think about the dummys famillies how it has lived its life being bullied and beaten by the people around it.\n";
            Delay();
            Delay();
            std::cout << "you snap out of it, lets not do that again...\n";
        }
    }

    while (DummyStateKnight == true) {
        std::cout << "You take your stance against the Knight dummy\n";
        std::cout << "what do you do?\n";
        std::cout << "1: Attack\n";
        std::cout << "2: Observe\n";

        std::string fourthinput;
        std::getline(std::cin, fourthinput);

        if (fourthinput == "1") {
            Delay();
            std::cout << "you choose to Attack, using your skill and power\n";
            Delay();
            std::cout << "Pow! direct hit!\n\n";
            Delay();
            float multiplier = table.CalculateMultiplier(PlayerCharacter->GetType(), enemy2.GetType());
            float amountOfDamage = multiplier * PlayerCharacter->GetDamage();
            enemy2.DoDamage(amountOfDamage);
            Delay();
            std::cout << "Dummy-" << enemy2ClassType << "\n";
            Delay();
            enemy2.GetStats();

        }
        if (fourthinput == "2") {
            std::cout << "you stare at the dummy";
            Delay();
            std::cout << ".";
            Delay();
            std::cout << ".";
            Delay();
            std::cout << ".";
            Delay();
            std::cout << "you start to think about the dummys famillies how it has lived its life being bullied and beaten by the people around it.\n";
            Delay();
            Delay();
            std::cout << "you snap out of it, lets not do that again...\n";
        }

    }
    while (DummyStateWizard == true) {
        std::cout << "You take your stance against the Wizard dummy\n";
        std::cout << "what do you do?\n";
        std::cout << "1: Attack\n";
        std::cout << "2: Observe\n";

        std::string fourthinput;
        std::getline(std::cin, fourthinput);

        if (fourthinput == "1") {
            Delay();
            std::cout << "you choose to Attack, using your skill and power\n";
            Delay();
            std::cout << "Pow! direct hit!\n\n";
            Delay();
            float multiplier = table.CalculateMultiplier(PlayerCharacter->GetType(), enemy3.GetType());
            float amountOfDamage = multiplier * PlayerCharacter->GetDamage();
            enemy3.DoDamage(amountOfDamage);
            Delay();
            std::cout << "Dummy-" << enemy3ClassType << "\n";
            Delay();
            enemy3.GetStats();

        }
        if (fourthinput == "2") {
            std::cout << "you stare at the dummy";
            Delay();
            std::cout << ".";
            Delay();
            std::cout << ".";
            Delay();
            std::cout << ".";
            Delay();
            std::cout << "you start to think about the dummys famillies how it has lived its life being bullied and beaten by the people around it.\n";
            Delay();
            Delay();
            std::cout << "you snap out of it, lets not do that again...\n";
        }

    }

    return 0;
}

void Game::ending()
{
    std::cout << "as you hit your final strike on the dummy the dummy recoils all its pent up anger and slams into your face.\n";
    Delay();
    std::cout << "you black out slightly and wake up at the beginning.\n";
    Delay();
    std::cout << "are you alright? you seemed a bit zoned out there.\n";
    Delay();
    std::cout << "anyways take a pick from the weapon rack and lets get started on your training.\n";
    ClassSelection();
}

