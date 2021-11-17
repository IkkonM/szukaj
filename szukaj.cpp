#include<iostream>
#include<string>
using namespace std;

bool szukaj(string tekst, string wyraz1, string wyraz2){
	
	int posA = -1;
	int posB = -1;
	posA = tekst.find(wyraz1);


	posB = tekst.find(wyraz2);

	
	if(posA>-1 && posB>-1){
		cout<<"Znaleziono oba wyrazy"<<endl;
		cout<<"Wyraz "<<wyraz1<<" znaleziony na pozycji "<<posA;
		cout<<endl;
		cout<<"Wyraz "<<wyraz2<<" znaleziony na pozycji "<<posB;
		return true;
	} else if(posA>-1 || posB>-1){
		cout<<"Znaleziono tylko jeden wyraz";
		return 0;
	} else if(posA==-1 && posB==-1){
		cout<<"Nie znaleziono zadnego wyrazu";
		return 0;
	} else{
		return 0;
	}
	
	
	
}


int main(){
	
	string wyraz1;
	string wyraz2;
	
	cout<<"Podaj pierwszy wyraz do znalezienia: ";
	cin>> wyraz1;
	
	cout<<"Podaj drugi wyraz do znalezienia: ";
	cin>> wyraz2;	
	
	
	string tekst = "Blorem bipsum ddd lorem Lorem ipsum asdf Ipsum";

	bool wynik;
	wynik = szukaj(tekst, wyraz1, wyraz2);
	
	cout<<endl;
	cout<<wynik;
	
}
