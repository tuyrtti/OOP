#include "gamenew.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


GameNew::GameNew(int mN)
{
    cout << "Peli luotu" << endl;
    maxNumber = mN;
}


GameNew::~GameNew()
{
    cout << "Peli tuhottu" << endl;
}

void GameNew::play()
{
    cout << "Pelissa" << endl;

    srand(std::time(0));
    randomNumber = (rand()%maxNumber)+1;  //otetaan jakojäännös, nyt pitäisi olla välillä 1-20
    cout << "maxNumber: " << maxNumber << endl << "randomNumber: " << randomNumber << endl;
    bool stayInLoop = true;
    while(stayInLoop)
    {
        cout<<"Give your guess between 1-"<<maxNumber<<endl;
        cin>>playerGuess;
        numOfGuesses++;
        if(playerGuess == randomNumber)
        {
            cout<<"Arvasit oikein luku = "<<playerGuess<<endl;
            stayInLoop = false;
        }
        else if(playerGuess<randomNumber)
        {
            cout<<"Lukusi on liian pieni"<<endl;
        }
        else
        {
            cout<<"Lukusi on liian suuri"<<endl;
        }

}
}
void GameNew::printGameResult()
{
    cout << "Tulostuksessa" << endl;
    cout << "Oikea luku: " << randomNumber << endl << "Arvausten maara: " << numOfGuesses << endl;
}
