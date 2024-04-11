#ifndef SILNIK_H
#define SILNIK_H

#include <iostream>
#include <vector>
#include "Tabela.h"
#include "Klawiatura.h"
#include "HelperText.h"
#include "HelperAlert.h"
#include <cstdlib> // zawiera funkcje srand() i rand()
#include <ctime> // zawiera funkcje time()



using namespace std;

class Silnik
{
	private:
		Silnik(const Silnik& rb);
		Silnik& operator = (const Silnik &rb);
	protected:
		int count_event=0;
	    vector <pair <int, const char*>> plansza;
		vector <pair <int, const char*>> temp_plansza;
		vector <pair <pair <int, int>, pair <int, int>>> plansza_event;
		int pom;
		int way;
		int win=0;
		int zmiana;
		int M_STR;
		int M_POW;
		Silnik();
		~Silnik();
		void Plansza();
		void Analiza();
		void Ruch();
		Tabela T;
		Klawiatura K;
		/////Zmiana helpera
		HelperText Text;
		//HelperAlert Text;
	public:
		int Los();
		int Walka(int stat, int M_stat);
};


#endif
