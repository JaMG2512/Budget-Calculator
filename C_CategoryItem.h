//
// Created by alanm on 2/27/2025.
//

#ifndef C_CATEGORYITEM_H
#define C_CATEGORYITEM_H

#include <string>

using namespace std;

class C_CategoryItem {
private:
    string name;
    float averageExpense;
    int purchaseFrequency;
    int importance;

public:
    C_CategoryItem(string name, float avgExpense, int freq, int imp);

    string getName() const;
    float getAverageExpense() const;
    int getPurchaseFrequency() const;
    int getImportance() const;

    void setName(string newName);
    void setAverageExpense(float newExpense);
    void setPurchaseFrequency(int newFreq);
    void setImportance(int newImp);
};

#endif // C_CATEGORYITEM_H
