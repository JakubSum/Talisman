#ifndef TABELA_H
#define TABELA_H

#include <iostream>
#include "Klawiatura.h"
#include "HelperText.h"
#include "HelperAlert.h"
#include <vector>
#include <string>

using namespace std;

class Tabela
{
    private:
        Tabela(const Tabela& rb);
        Tabela& operator = (const Tabela &rb);
    public:
    	vector <pair <int , pair <string, pair <string , pair <int , pair <int, int> > > > > > Ev;
		vector <pair <int , pair <string, int> > > M_s;
		vector <pair <int , pair <string, int> > > M_p;
        Tabela();
        int STR;
		int POW;
		int HP;
		void Init(const char *fname);
		void MP(const char *fname);
		void MS(const char *fname);
		void EV(const char *fname);
        ~Tabela();
        Klawiatura P;
        
        ///Wybór Helpera
        //HelperText G;
        HelperAlert G;
		
		int** Array;
        friend class Silnik;
};

#endif

