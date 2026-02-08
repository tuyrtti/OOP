#ifndef SEURAAJA_H
#include <string>
#define SEURAAJA_H

#endif // SEURAAJA_H
using namespace std;

class Seuraaja
{
public:
    Seuraaja* next = nullptr;
    Seuraaja();
    Seuraaja(string);
    string getNimi();
    void paivitys(string);
private:
    string nimi;
};
