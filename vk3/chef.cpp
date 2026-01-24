#include "chef.h"
#include <iostream>

Chef::Chef()
{
    cout << "Olen default konstruktorissa" << endl;
}

Chef::Chef(string cN)
{
    cout << "Olen input konstruktorissa" << endl;
    chefName = cN;
}

Chef::~Chef()
{
    cout << "Olen default destruktorissa" << endl;
}

int Chef::makeSalad(int numberOfItems)
{
   // int numberOfPortions = numberOfItems/5;
    cout << "olen salaattifuntiossa" << endl;
    return numberOfItems/5;
}

int Chef::makeSoup(int numberOfItems)
{
    cout << "olen soppafuktiossa" << endl;
    return numberOfItems/3;
}

string Chef::getName()
{
    cout << "Olen getterissä" << endl;
    return chefName;
}

void Chef::setName(string cN)
{
    cout << "olen setterissä" << endl;
    chefName= cN;
}
