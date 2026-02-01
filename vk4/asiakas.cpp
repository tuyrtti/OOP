#include "asiakas.h"
#include <iostream>
using namespace std;

//Asiakas();
//Asiakas(string, double);
//string getNimi();
//void showSaldo();
//bool talletus(double);
//bool nosto(double);
//bool luotonMaksu(double);
//bool luotonNosto(double);




Asiakas::Asiakas()
{
    cout << "Asiakas: olen defaultkonstruktorissa!" << endl;
}

Asiakas::Asiakas(string name, double lr) : kayttotili(name), luottotili(name, lr)
{
    cout << "Asiakas: olen parametrikonstruktiossa!" << endl;
    nimi = name;
}

bool Asiakas::tiliSiirto(double sum, Asiakas& kohde)
{
    kohde.
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout << "Käyttötilin saldo: " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo: " << luottotili.getBalance() << endl;
}

bool Asiakas::talletus(double sum)
{
    kayttotili.deposit(sum);
}
bool Asiakas::nosto(double sum)
{
    kayttotili.withdraw(sum);
}
bool Asiakas::luotonMaksu(double sum)
{
    luottotili.deposit(sum);
}
bool Asiakas::luotonNosto(double sum)
{
    luottotili.withdraw(sum);
}
