#include <iostream>
using namespace std;
#include "Silnik.h"
#include <fstream>
#include <algorithm>
#include <vector>
#include <cstdlib> // zawiera funkcje srand() i rand()
#include <ctime> // zawiera funkcje time()
#include <string>
#include <conio.h>
#include "Gra.h"
#include "Klawiatura.h"
#include "HelperText.h"
#include "HelperAlert.h"

Silnik::Silnik() {};

void Silnik::Plansza(){
	srand(time(NULL)); // ustawienie ziarna generatora liczb pseudolosowych
	for(int i=0; i<20; i++){
		plansza_event.push_back(make_pair(make_pair(i,-1), make_pair(0,0)));
		if(i==3){
			plansza.push_back(make_pair(i,"B"));
		}else if(i==13){
			plansza.push_back(make_pair(i,"P"));
		}else{
			plansza.push_back(make_pair(i,"X"));
		}
		//cout<<plansza[i].second;
	}
};


Silnik::~Silnik() {
};

int Silnik::Los() {
	return (rand() % 6) + 1; // losowanie liczby od 1 do 6
};

void Silnik::Ruch() {
	int free;
	int fight;
	string input;
	///Funkcja input
	//cout<<"Aby rzucic kostka nacisnij klawisz q"<<endl;
	Text.text1();
	//cin>>input;
	input=K.Input_Char();
	if(input=="q"){
		pom=Los();
		//cout<<"Wylosowano: "<<pom<<endl;
		Text.text2(pom);
		Text.text3();
		//cout<<"Wprowadz L aby ruszyc sie w lewo lub P aby ruszyc sie w prawo na planszy"<<endl;
		//cin>>input;
		input=K.Input_Char();
		if(input=="P" || input=="L"){
			if(input=="L"){
				pom=-pom;
			}
			temp_plansza=plansza;
				for(int j=0; j<plansza.size(); j++){
				if(plansza[j].second=="B"){
					zmiana=j+pom;
				if(zmiana<0) {
					zmiana=20+zmiana;
				}
				if(zmiana>19){
					zmiana=zmiana-20;
				}
				/////Start losowania rzeczy
				if(temp_plansza[zmiana].second=="X") {
					///
					if(plansza_event[zmiana].first.second !=-1){
					
					switch(plansza_event[zmiana].second.first){
						case 1:
							//cout<<plansza_event[zmiana].second.second<<endl;
							//cout<<"Spotyka cie "<<T.M_p[plansza_event[zmiana].second.second-1].second.first<<" o sile "<<T.M_p[plansza_event[zmiana].second.second-1].second.second<<endl;
							Text.text4(T.M_p[plansza_event[zmiana].second.second-1].second.first, T.M_p[plansza_event[zmiana].second.second-1].second.second);
							fight=Walka(T.POW,T.M_p[plansza_event[zmiana].second.second-1].second.second);
							if(fight==1){
								//cout<<"Wygrywasz!"<<endl;
								Text.text7(fight);
								T.POW++;
							}else if(fight==0){
								//cout<<"Remis!"<<endl;
								Text.text7(fight);
							}else if(fight==-1){
								//cout<<"Przegrywasz!"<<endl;
								Text.text7(fight);
								T.HP--;
							}
						break;
						case 2:
							//cout<<"Spotyka cie "<<T.M_s[plansza_event[zmiana].second.second-1].second.first<<" o mocy "<<T.M_s[plansza_event[zmiana].second.second-1].second.second<<endl;
							Text.text5(T.M_s[plansza_event[zmiana].second.second-1].second.first, T.M_s[plansza_event[zmiana].second.second-1].second.second);
							fight=Walka(T.STR,T.M_s[plansza_event[zmiana].second.second-1].second.second);
							if(fight==1){
								//cout<<"Wygrywasz!"<<endl;
								Text.text7(fight);
								T.STR++;
							}else if(fight==0){
								//cout<<"Remis!"<<endl;
								Text.text7(fight);
							}else if(fight==-1){
								//cout<<"Przegrywasz!"<<endl;
								Text.text7(fight);
								T.HP--;
							}
						break;
						/*
						case 3:
							cout<<"Napotykasz "<<T.Ev[plansza_event[zmiana].second.second-1].second.first<<"\n"<<T.Ev[plansza_event[zmiana].second.second-1].second.second.first<<endl;
							fight=T.Ev[plansza_event[zmiana].second.second-1].second.second.second.first - 1;
							
						break;
						*/
					}
					temp_plansza[zmiana].second="B";
					temp_plansza[j].second="X";	
					break;
				}
				////
					free = (Los()%3)+1;
					//free=3;
					if(count_event<10){
					switch(free){
						case 1:
							//for(int i=0; i<20; i++){
							free = ((Los() + Los()) % 7);
							//cout<<free<<" ";
							//}
							//cout<<free<<endl;
							//cout<<"Spotyka cie "<<T.M_p[free].second.first<<" o mocy "<<T.M_p[free].second.second<<endl;
							Text.text4(T.M_p[free].second.first, T.M_p[free].second.second);
							fight=Walka(T.POW,T.M_p[free].second.second);
							if(fight==1){
								//cout<<"Wygrywasz!"<<endl;
								Text.text7(fight);
								T.POW++;
							}else if(fight==0){
								//cout<<"Remis!"<<endl;
								Text.text7(fight);
								plansza_event[zmiana].second.first = 1;
								plansza_event[zmiana].first.second = count_event;
								count_event++;
								plansza_event[zmiana].second.second=T.M_p[free].first;
							}else if(fight==-1){
								//cout<<"Przegrywasz!"<<endl;
								Text.text7(fight);
								T.HP--;
								plansza_event[zmiana].second.first = 1;
								plansza_event[zmiana].first.second = count_event;
								count_event++;
								plansza_event[zmiana].second.second=T.M_p[free].first;	
							}
							break;
						case 2:
							free = ((Los() + Los()) % 7);
							//cout<<free<<endl;
							//cout<<"Spotyka cie "<<T.M_s[free].second.first<<" o sile "<<T.M_s[free].second.second<<endl;
							Text.text5(T.M_s[free].second.first, T.M_s[free].second.second);
							fight=Walka(T.STR,T.M_s[free].second.second);
							if(fight==1){
								//cout<<"Wygrywasz!"<<endl;
								Text.text7(fight);
								T.STR++;
							}else if(fight==0){
								//cout<<"Remis!"<<endl;
								Text.text7(fight);
								plansza_event[zmiana].second.first = 2;
								plansza_event[zmiana].first.second = count_event;
								count_event++;
								plansza_event[zmiana].second.second=T.M_s[free].first;
							}else if(fight==-1){
								//cout<<"Przegrywasz!"<<endl;
								Text.text7(fight);
								T.HP--;
								plansza_event[zmiana].second.first = 2;
								plansza_event[zmiana].first.second = count_event;
								count_event++;
								plansza_event[zmiana].second.second=T.M_s[free].first;	
							}
						break;
						case 3:
							free = Los()-1;
							//cout<<"Napotykasz "<<T.Ev[free].second.first<<"\n"<<T.Ev[free].second.second.first<<endl;
							Text.text6(T.Ev[free].second.first, T.Ev[free].second.second.first);
							fight=T.Ev[free].second.second.second.first - 1;
							switch(T.Ev[free].second.second.second.second.first){
								case 2:
									T.POW=T.POW+T.Ev[free].second.second.second.second.second;
									//fight--;
								break;
								case 1:
									T.STR=T.STR+T.Ev[free].second.second.second.second.second;
									//fight--;
								break;
								case 3:
									T.HP=T.HP+T.Ev[free].second.second.second.second.second;
									//fight--;
								break;
							}
							/*
							if(fight>0){
							plansza_event[zmiana].second.first = 3;
							plansza_event[zmiana].first.second = count_event;
							count_event++;
							plansza_event[zmiana].second.second=T.Ev[free].first;
							}
							*/
						break;
					}
					}
					
					temp_plansza[zmiana].second="B";
					//cout<<pom<<endl;
					//cout<<zmiana<<endl;
					//cout<<j<<endl;
					temp_plansza[j].second="X";	
										
				}
				
				else if(temp_plansza[zmiana].second=="P"){
					string wyb1;
					int final1=0;
					//cout<<"Walka"<<endl;
					//break;
					//cout<<"Wpadasz na big boss'a! Wybierz S aby walczyc na sile lub M aby walczyc na Moc"<<endl;
					Text.text10();
					do{
					//cin>>wyb1;	
					wyb1=K.Input_Char();
					if(wyb1[0]=='S'){
						final1=Walka(T.STR, 10);
					}else if(wyb1[0]=='M'){
						final1=Walka(T.POW, 10);
					}
					}while(final1==0);
					if(final1==1){
						//cout<<"Udalo ci sie! Wygrywasz!";
						Text.text8(final1);
						win=1;
					}else if(final1==-1){
						//cout<<"Przegrywasz, przeciwnik odchodzi."<<endl;
						Text.text8(final1);
						T.HP--;
						break;
					}else if(final1==0){
						//cout<<"Remis! Przeciwnik ucieka."<<endl;
						Text.text8(final1);
						break;
					}
					temp_plansza[zmiana].second="B";
					temp_plansza[j].second="X";					
				}
				/*
				else{
					
					switch(plansza_event[zmiana].second.first){
						case 1:
							cout<<"Spotyka cie "<<T.M_p[plansza_event[zmiana].second.second].second.first<<" o mocy "<<T.M_p[plansza_event[zmiana].second.second].second.second<<endl;
							fight=Walka(T.POW,T.M_p[plansza_event[zmiana].second.second].second.second);
							if(fight==1){
								cout<<"Wygrywasz!"<<endl;
								T.POW++;
							}else if(fight==0){
								cout<<"Remis!"<<endl;
							}else if(fight==-1){
								cout<<"Przegrywasz!"<<endl;
								T.HP--;
							}
						break;
						case 2:
							
						break;
						case 3:
							
						break;
					}
				}
					*/
				////Tutaj
					}
		}
	}else{
		//cout<<"Wprowadzono zle dane."<<endl;
		Text.text9();
		Ruch();
	}
}
///Koniec input
else{
	Ruch();
}
plansza=temp_plansza;
}


void Silnik::Analiza() {
		
		temp_plansza=plansza;
		for(int j=0; j<plansza.size(); j++){
			if(plansza[j].second=="P"){
				pom=(Los()%3)+1;
				way=(Los()%2)+1;
				if(way==1){
					pom=-pom;
				}
				zmiana=j+pom;
				if(zmiana<0) {
					zmiana=20+zmiana;
				}
				if(zmiana>19){
					zmiana=zmiana-20;
				}
				
				//Wróg spotyka bohatera
				if(temp_plansza[zmiana].second=="B") {
					string wyb;
					int final=2;
					//cout<<"Walka"<<endl;
					//break;
					
					///Funkcja surprise
					//cout<<"Wpada na ciebie big boss'a! Wybierz S aby walczyc na sile lub M aby walczyc na Moc"<<endl;
					Text.text11();
					do{
					//cin>>wyb;	
					wyb=K.Input_Char();
					if(wyb[0]=='S'){
						final=Walka(T.STR, 10);
					}else if(wyb[0]=='M'){
						final=Walka(T.POW, 10);
					}
					}while(final==2);
					if(final==1){
						//cout<<"Udalo ci sie! Wygrywasz!";
						Text.text8(final);
						win=1;
					}else if(final==-1){
						//cout<<"Przegrywasz, przeciwnik odchodzi."<<endl;
						Text.text8(final);
						T.HP--;
						Analiza();
					}else{
						//cout<<"Remis! Przeciwnik ucieka."<<endl;
						Text.text8(final);
						Analiza();
					}
					//cout<<"Nacisnij dowolny klawisz aby kontynuowac"<<endl;
					Text.text12();
					getch();
					///Koniec surprise
				}
				temp_plansza[zmiana].second="P";
				temp_plansza[j].second="X";
			}
		}
		plansza=temp_plansza;
};


int Silnik::Walka(int stat, int M_stat){
	int temp;
	int temp2;
	string q = "q";
	//cout<<"Rzuc kostka aby walczyc! Wpisz q"<<endl;
	Text.text13();
	//cin>>q;
	q=K.Input_Char();
	while(q[0] !='q'){
		//cout<<"Podano zle dane"<<endl;
		Text.text9();
		//cin>>q;
		q=K.Input_Char();	
	}
	temp=Los();
	temp2=Los();
	//cout<<"Wylosowano "<<temp<<endl;
	//cout<<"Przeciwnik wylosowal "<<temp2<<endl;
	Text.text14(temp, temp2);
	stat=stat+temp;
	M_stat=M_stat+temp2;
		if (stat > M_stat) {
        	return 1;
    	} else if (stat < M_stat) {
        	return -1;
    	} else {
        	return 0;
    	}
};

