#pragma once
#include <vector>
#include "Charactertypes.h"
class AdvantageTable
{
public:
    AdvantageTable();
    ~AdvantageTable();
    float CalculateMultiplier(Charactertypes attackType, Charactertypes target);
private:
    std::vector<std::vector<float>> advantageTable;

};

