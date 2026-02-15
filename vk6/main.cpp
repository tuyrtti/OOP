#include <iostream>
#include "student.h"
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
    int selection =0;
    vector<student>studentList;
    string sname;
    int ika;
    vector<student>::iterator it = studentList.begin();

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            cout << "valinta 0" << endl;


            cout << "Anna opiskelijan nimi" << endl;
            cin >> sname;
            cout << "Anna opiskelijan ikä" << endl;
            cin >> ika;

            studentList.emplace_back(sname,ika);
            cout << "Lisattiin: " << sname << " "<< ika << endl;
            break;
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            cout << "valinta 1" << endl;
            cout << "Tulostetaan lista" << endl;

            for (auto &s: studentList){
                cout << s.getName() << ": " << s.getAge() << endl;
            }

            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout << "valinta 2" << endl;

            cout << "jarjestetaan aakkosjarjestykseen" << endl;
            sort(studentList.begin(), studentList.end(), [](const student &a, const student &b){
                return a.getName() < b.getName();
            });
            for (auto &s: studentList){
                s.printStudentInfo();
            }

            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout << "valinta 3" << endl;
            cout << "jarjestetaan ikajarjestykseen" << endl;

            sort(studentList.begin(), studentList.end(), [](const student &a, const student &b){
                return a.getAge() < b.getAge();
            });
            for (auto &s: studentList){
                s.printStudentInfo();
            }
            break;
        case 4:
            cout << "valinta 4" << endl;
            cout << "anna opiskelijan nimi" << endl;
            cin >> sname;
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.

            // vector<student>::iterator it = studentlist.begin();
            //it = find_if(vec.begin(), vec.end(), isOdd);
            it = find_if(studentList.begin(), studentList.end(), [sname](const student &a){
                return a.getName() == sname;
                // vertaillaan onko opiskelijan nimi sname
            });

            if (it != studentList.end())
            {
                cout << "Loytyi!" << endl;
                it->printStudentInfo();
            }
            else
            {
                cout << "Ei loytynyt: " << sname << endl;
            }
            break;


        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
    }while(selection < 5);

    return 0;
}
