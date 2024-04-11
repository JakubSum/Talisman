#include <iostream>
#include <windows.h>

using namespace std;

#include "GraCLR.h"

GraCLR::GraCLR() : Gra() {};

GraCLR::~GraCLR() {};

void GraCLR::View() {
    int test = 0;
    int j = 6;

    system("cls");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); // ¯ó³ty

    for (int i = 0; i < 6; i++) {
        if (plansza_event[i].second.second != 0) {
            if (plansza[i].second[0] == 'B' || plansza[i].second[0] == 'P') {
                cout << plansza[i].second;
            } else {
                cout << plansza_event[i].first.second;
            }
        } else {
            cout << plansza[i].second;
        }
    }

    cout << endl;

    for (int i = 19; i > 15; i--) {
        if (plansza_event[i].second.second != 0) {
            if (plansza[i].second[0] == 'B' || plansza[i].second[0] == 'P') {
                cout << plansza[i].second;
            } else {
                cout << plansza_event[i].first.second;
            }
        } else {
            cout << plansza[i].second;
        }

        cout << "    ";

        if (plansza_event[j].second.second != 0) {
            if (plansza[j].second[0] == 'B' || plansza[i].second[0] == 'P') {
                cout << plansza[j].second << endl;
            } else {
                cout << plansza_event[j].first.second << endl;
            }
        } else {
            cout << plansza[j].second << endl;
        }

        j++;
    }

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); // ¯ó³ty

    for (int i = 15; i > 9; i--) {
        if (plansza_event[i].second.second != 0) {
            if (plansza[i].second[0] == 'B' || plansza[i].second[0] == 'P') {
                cout << plansza[i].second;
            } else {
                cout << plansza_event[i].first.second;
            }
        } else {
            cout << plansza[i].second;
        }
    }

    cout << endl;
    cout << endl;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); // Jasnozielony

    cout << "Statystyki bohatera to: Sila - " << T.STR << "\nMoc - " << T.POW << "\nZycie - " << T.HP << endl;

    cout << endl;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); // Czerwony

    for (int i = 0; i < 20; i++) {
        if (plansza_event[i].second.first != 0) {
            switch (plansza_event[i].second.first) {
                case 1:
                    cout << plansza_event[i].first.second << " " << T.M_p[plansza_event[i].second.second - 1].second.first << endl;
                    break;
                case 2:
                    cout << plansza_event[i].first.second << " " << T.M_s[plansza_event[i].second.second - 1].second.first << endl;
                    break;
                case 3:
                    cout << plansza_event[i].first.second << " " << T.Ev[plansza_event[i].second.second - 1].second.first << endl;
                    break;
            }
        }
    }

    cout << endl;
};

