#include "Advantagetable.h"

AdvantageTable::AdvantageTable()
{
    std::vector<float> archerAdvantages = { 1.0f,0.5f,1.5f };
    advantageTable.push_back(archerAdvantages);
    std::vector<float> wizardAdvantages = { 1.5f,1.0f,0.5f };
    advantageTable.push_back(wizardAdvantages);
    std::vector<float> knightAdvantages = { 0.5f,1.5f,1.0f };
    advantageTable.push_back(knightAdvantages);
}

AdvantageTable::~AdvantageTable()
{
}

float AdvantageTable::CalculateMultiplier(Charactertypes attackType, Charactertypes target)
{
    return advantageTable.at((int)attackType).at((int)target);
}
