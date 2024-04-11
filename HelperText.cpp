#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
#include "HelperText.h"

HelperText::HelperText() : Helper() {};

HelperText::~HelperText() {
};


void HelperText::text1() {
	cout<<"Aby rzucic kostka nacisnij klawisz q"<<endl;
};


void HelperText::text2(int x) {
	cout<<"Wylosowano "<<x<<endl;
};


void HelperText::text3() {
	cout<<"Wprowadz L aby ruszyc sie w lewo lub P aby ruszyc sie w prawo na planszy"<<endl;
};

void HelperText::text4(string x, int y) {
	cout<<"Wylosowano "<<x<<" o mocy "<<y<<endl;
};

void HelperText::text5(string x, int y) {
	cout<<"Wylosowano "<<x<<" o sile "<<y<<endl;
};

void HelperText::text6(string x, string y) {
	cout<<"Napotykasz "<<x<<"\n"<<y<<endl;
};

void HelperText::text7(int x) {
	if(x==1){
		cout<<"Wygrywasz!"<<endl;
	}else if(x==0){
		cout<<"Remis!"<<endl;
	}else if(x==-1){
		cout<<"Przegrywasz!"<<endl;
	}	
};

void HelperText::text8(int x) {
	if(x==1){
		cout<<"Udalo ci sie! Wygrywasz!"<<endl;
	}else if(x==0){
		cout<<"Remis! Przeciwnik ucieka."<<endl;
	}else if(x==-1){
		cout<<"Przegrywasz, przeciwnik odchodzi."<<endl;
	}	
};

void HelperText::text9() {
	cout<<"Wprowadzono zle dane."<<endl;	
};

void HelperText::text10() {
	cout<<"Wpadasz na big boss'a! Wybierz S aby walczyc na sile lub M aby walczyc na Moc"<<endl;	
};

void HelperText::text11() {
	cout<<"Wpada na ciebie big boss'a! Wybierz S aby walczyc na sile lub M aby walczyc na Moc"<<endl;	
};

void HelperText::text12() {
	cout<<"Nacisnij dowolny klawisz aby kontynuowac"<<endl;	
};

void HelperText::text13() {
	cout<<"Rzuc kostka aby walczyc! Wpisz q"<<endl;	
};

void HelperText::text14(int x, int y) {
	cout<<"Wylosowano "<<x<<endl;
	cout<<"Przeciwnik wylosowal "<<y<<endl;	
};

void HelperText::text15() {
	cout<<"Dostepne klasy to:"<<endl; 	
};
  
void HelperText::text16(int x, string y) {
	cout<<x<<". "<<y<<endl; 	
};

void HelperText::text17() {
	cout<<"Wybierz klase (podaj numer): ";
};

void HelperText::text18() {
	cout<<"Nieprawidlowy wybor. Wybierz klase (podaj numer): "<<endl; 	
};
   
