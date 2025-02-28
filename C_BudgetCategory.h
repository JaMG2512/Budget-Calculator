#ifndef C_BUDGETCATEGORY_H
#define C_BUDGETCATEGORY_H

#include <string>
#include <vector>
#include "C_CategoryItem.h"

using namespace std;

class C_BudgetCategory {
private:
    string name;
    bool isNecessary;
    float subBudget;
    vector<C_CategoryItem> items;

public:
    C_BudgetCategory(string name, bool necessary, float budget = 0.0);

    string getName() const;
    bool getIsNecessary() const;
    float getSubBudget() const;
    vector<C_CategoryItem> getItems() const;

    void setName(string newName);
    void setIsNecessary(bool necessary);
    void setSubBudget(float budget);
    void addItem(C_CategoryItem item);
};

#endif // C_BUDGETCATEGORY_H
