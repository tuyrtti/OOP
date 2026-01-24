#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef()
{
    cout << "olen italiadefaultkonstruktorissa" << endl;
}

ItalianChef::ItalianChef(string cN)
{
    cout << "olen italiainputkonstruktorissa" << endl;
    chefName = cN;
}

ItalianChef::~ItalianChef()
{
    cout << "olen italiadefaultdestruktorissa" << endl;
}

bool ItalianChef::askSecret(string pw, int amountOfWater, int amountOfFlour)
{
    int numberOfPizzas;
//    if (pw != password) return false;
    water = amountOfWater;
    flour = amountOfFlour;
    numberOfPizzas = makePizza();
    cout << "saatiin tehtya: " << numberOfPizzas << "pizzaa" << endl;
    return true;
}

int ItalianChef::makePizza()
{
    cout << "tehdaan pizzaa" << endl;
    cout << "jauhoja on: " << flour << endl;
    cout << "vetta on: " << water << endl;

    //tähän algoritmi
    //int numberOfPizzas

    return 0; // numberOfPizzas;
}
