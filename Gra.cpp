#include <iostream>
using namespace std;
#include "Gra.h"
#include <time.h>
#include <conio.h>

Gra::Gra() {};

Gra::~Gra() {};

void Gra::delay(long i){
	long t0=clock();
	while(clock()-t0<i);
};

void Gra::Play(){
	Plansza();
	delay(1500);
	View();	
	//for(int i=1; i<=100; i++){
	do{
	Ruch();
	delay(2500);
	View();
	Analiza();
	View();
	delay(500);
	}while(T.HP>0 && win!=1);
	///Funkcja result
	if(win==1){
		cout<<"Gratulacje! Wygrywasz gre."<<endl;
	}else{
	cout<<"Przegrales, sprobuj ponownie."<<endl;
	}
	///Koniec result
	delay(4000);
	//}
};

