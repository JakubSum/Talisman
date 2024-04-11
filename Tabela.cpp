#include <iostream>
#include <fstream>
#include <string>
#include "Tabela.h"
#include "Klawiatura.h"
#include "HelperText.h"
#include "HelperAlert.h"

using namespace std;

Tabela::Tabela() {
    Init("Postacie.txt");
    MP("M_Pow.txt");
    MS("M_Str.txt");
    EV("Event.txt");
};

Tabela::~Tabela() {
};

void Tabela::Init(const char* fname){
    int num_of_classes;
    string class_name;
    fstream file;
    file.open(fname);
    if (!file) {
        //cerr << "Nie udalo sie otworzyc pliku " << fname << endl;
        return;
    }
    file >> num_of_classes;
    ////Funkcja hero_class
    //cout << "Dostepne klasy to:" << endl;
    G.text15();
	Array = new int*[num_of_classes]; // deklaracja i inicjalizacja tablicy Array
    for(int i=0; i<num_of_classes; i++){
    	file.ignore(1, '\n');
        Array[i] = new int[4];
        getline(file, class_name); // odczytanie pustego wiersza
        getline(file, class_name); // odczytanie nazwy klasy
        //cout << i+1 << ". " << class_name << endl;
        G.text16(i+1,class_name);
		int str, pow, hp;
        file >> str >> pow >> hp; // odczytanie atrybutów klasy
        Array[i][0] = (i+1); // zapisanie numeru klasy w tablicy
        Array[i][1] = str; // zapisanie atrybutów klasy w tablicy
        Array[i][2] = pow;
        Array[i][3] = hp;
    }
    file.close();
    //cout << "Wybierz klase (podaj numer): ";
    G.text17();
	int choice;
    //cin >> choice;
    choice=P.Input_Int();
    cout<<choice<<endl;
	while (choice < 1 || choice > num_of_classes) {
        //cout << "Nieprawidlowy wybor. Wybierz klase (podaj numer): ";
        G.text18();
		//cin >> choice;
        choice=P.Input_Int();
    }
    STR = Array[choice-1][1];
    POW = Array[choice-1][2];
    HP = Array[choice-1][3];
    //////Koniec hero_class
    //cout<<STR<<" "<<POW<<" "<<HP<<" "<<endl;
}

void Tabela::MP(const char *fname){
	int A;
	string B;
	int C;
	fstream file;
    file.open(fname);
    if (!file) {
        //cerr << "Nie udalo sie otworzyc pliku " << fname << endl;
        return;
    }
    int i=7;
    for(int j=0; j<i; j++){
    	file >> A >> B >> C;
		M_p.push_back(make_pair(A, make_pair(B, C)));
		//cout<<M_p[j].second.first<<endl;
	}
    file.close();
}

void Tabela::MS(const char *fname){
	int A;
	string B;
	int C;
	fstream file;
    file.open(fname);
    if (!file) {
        //cerr << "Nie udalo sie otworzyc pliku " << fname << endl;
        return;
    }
    int i=7;
    for(int j=0; j<i; j++){
    	file >> A >> B >> C;
		M_s.push_back(make_pair(A, make_pair(B, C)));
		//cout<<M_s[j].second.first<<endl;
	}
    file.close();
}

void Tabela::EV(const char *fname){
	int A;
	string B;
	string C;
	int D;
	int E;
	int F;
	fstream file;
    file.open(fname);
    if (!file) {
        //cerr << "Nie udalo sie otworzyc pliku " << fname << endl;
        return;
    }
	int i=6;
	for(int j=0; j<i; j++){
		file >> A;
		file.ignore(1, '\n');
		getline(file,B);
		file.ignore(0, '\n');
		getline(file, C);
		file >> D >> E >> F;
		Ev.push_back(make_pair(A, make_pair(B, make_pair(C, make_pair(D, make_pair(E, F))))));
		//cout<<Ev[j].second.first;
	}
}
