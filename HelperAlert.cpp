#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>
using namespace std;
#include "HelperAlert.h"

HelperAlert::HelperAlert() : Helper() {};

HelperAlert::~HelperAlert() {
};


void HelperAlert::text1() {
	MessageBox( nullptr, TEXT( "Aby rzucic kostka nacisnij klawisz q" ), TEXT( "Message" ), MB_OK );
	//cout<<"Aby rzucic kostka nacisnij klawisz q"<<endl;
};


void HelperAlert::text2(int x) {
	MessageBox( nullptr, TEXT( ("Wylosowano " + std::to_string(x)).c_str() ), TEXT( "Message" ), MB_OK );
	//cout<<"HWylosowano "<<x<<endl;
};


void HelperAlert::text3() {
	MessageBox( nullptr, TEXT( "Wprowadz L aby ruszyc sie w lewo lub P aby ruszyc sie w prawo na planszy" ), TEXT( "Message" ), MB_OK );
	//cout<<"HWprowadz L aby ruszyc sie w lewo lub P aby ruszyc sie w prawo na planszy"<<endl;
};

void HelperAlert::text4(string x, int y) {
	MessageBox( nullptr, TEXT( ("Wylosowano " + x + " o mocy " + std::to_string(y)).c_str() ), TEXT( "Message" ), MB_OK );
	//cout<<"Wylosowano "<<x<<" o mocy "<<y<<endl;
};

void HelperAlert::text5(string x, int y) {
	MessageBox( nullptr, TEXT( ("Wylosowano " + x + " o sile " + std::to_string(y)).c_str() ), TEXT( "Message" ), MB_OK );
	//cout<<"Wylosowano "<<x<<" o sile "<<y<<endl;
};

void HelperAlert::text6(string x, string y) {
	MessageBox( nullptr, TEXT( ("Napotykasz " + x + "\n" + y ).c_str() ), TEXT( "Message" ), MB_OK );
	//cout<<"Napotykasz "<<x<<"\n"<<y<<endl;
};

void HelperAlert::text7(int x) {
	if(x==1){
		MessageBox( nullptr, TEXT( "Wygrywasz!" ), TEXT( "Message" ), MB_OK );
	//cout<<"Wygrywasz!"<<endl;
	}else if(x==0){
		MessageBox( nullptr, TEXT( "Remis!" ), TEXT( "Message" ), MB_OK );
		//cout<<"Remis!"<<endl;
	}else if(x==-1){
		MessageBox( nullptr, TEXT( "Przegrywasz!" ), TEXT( "Message" ), MB_OK );
		//cout<<"Przegrywasz!"<<endl;
	}	
};

void HelperAlert::text8(int x) {
	if(x==1){
		MessageBox( nullptr, TEXT( "Udalo ci sie! Wygrywasz!" ), TEXT( "Message" ), MB_OK );
		//cout<<"Udalo ci sie! Wygrywasz!"<<endl;
	}else if(x==0){
		MessageBox( nullptr, TEXT( "Remis! Przeciwnik ucieka." ), TEXT( "Message" ), MB_OK );
		//cout<<"Remis! Przeciwnik ucieka."<<endl;
	}else if(x==-1){
		MessageBox( nullptr, TEXT( "Przegrywasz, przeciwnik odchodzi." ), TEXT( "Message" ), MB_OK );
		//cout<<"Przegrywasz, przeciwnik odchodzi."<<endl;
	}	
};

void HelperAlert::text9() {
	MessageBox( nullptr, TEXT( "Wprowadzono zle dane." ), TEXT( "Message" ), MB_OK );
		//cout<<"Wprowadzono zle dane."<<endl;	
};

void HelperAlert::text10() {
	MessageBox( nullptr, TEXT( "Wpadasz na big boss'a! Wybierz S aby walczyc na sile lub M aby walczyc na Moc" ), TEXT( "Message" ), MB_OK );
	//cout<<"Wpadasz na big boss'a! Wybierz S aby walczyc na sile lub M aby walczyc na Moc"<<endl;	
};

void HelperAlert::text11() {
	MessageBox( nullptr, TEXT( "Wpada na ciebie big boss'a! Wybierz S aby walczyc na sile lub M aby walczyc na Moc" ), TEXT( "Message" ), MB_OK );
	//cout<<"Wpada na ciebie big boss'a! Wybierz S aby walczyc na sile lub M aby walczyc na Moc"<<endl;	
};

void HelperAlert::text12() {
	MessageBox( nullptr, TEXT( "Nacisnij dowolny klawisz aby kontynuowac" ), TEXT( "Message" ), MB_OK );
	//cout<<"Nacisnij dowolny klawisz aby kontynuowac"<<endl;	
};

void HelperAlert::text13() {
	MessageBox( nullptr, TEXT( "Rzuc kostka aby walczyc! Wpisz q" ), TEXT( "Message" ), MB_OK );
	//cout<<"Rzuc kostka aby walczyc! Wpisz q"<<endl;	
};

void HelperAlert::text14(int x, int y) {
	MessageBox( nullptr, TEXT( ("Wylosowano " + std::to_string(x)).c_str() ), TEXT( "Message" ), MB_OK );
	//cout<<"Wylosowano "<<x<<endl;
	MessageBox( nullptr, TEXT( ("Przeciwnik wylosowal " + std::to_string(y)).c_str() ), TEXT( "Message" ), MB_OK );
	//cout<<"Przeciwnik wylosowal "<<y<<endl;	
};

void HelperAlert::text15() {
	MessageBox( nullptr, TEXT( "Dostepne klasy to:" ), TEXT( "Message" ), MB_OK );
	//cout<<"Dostepne klasy to:"<<endl; 	
};
  
void HelperAlert::text16(int x, string y) {
	MessageBox( nullptr, TEXT( (std::to_string(x) + ". " + y).c_str() ), TEXT( "Message" ), MB_OK );
	//cout<<x<<". "<<y<<endl; 	
};

void HelperAlert::text17() {
	MessageBox( nullptr, TEXT( "Wybierz klase (podaj numer): " ), TEXT( "Message" ), MB_OK );
	//cout<<"Wybierz klase (podaj numer): ";
};

void HelperAlert::text18() {
	MessageBox( nullptr, TEXT( "Nieprawidlowy wybor. Wybierz klase (podaj numer): " ), TEXT( "Message" ), MB_OK );
	//cout<<"Nieprawidlowy wybor. Wybierz klase (podaj numer): "<<endl; 	
};
   
