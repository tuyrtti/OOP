#include <iostream>
#include "Gamenew.h"

using namespace std;

int main()
{
    int maxNum (20);
    GameNew peliOlio(maxNum);
    GameNew peliOlio_2(maxNum);
    peliOlio.play();
    peliOlio.printGameResult();


}
