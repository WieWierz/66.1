#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class licz{
	ifstream plik1;
	int a,b,c;
	string a2,b2;
	int dlugosc1, dlugosc2;
	int liczba, liczba2;
	int suma=0;
	int suma2=0;
	string przy, przy2;
	
	public:
		
		licz();
		~licz();
		
		void wczytaj();
};

licz::licz(){
	plik1.open("trojki.txt");
}

licz::~licz(){
	plik1.close();
}

void licz::wczytaj(){
	while(!plik1.eof()){
		plik1>>a;
		plik1>>b;
		plik1>>c;

		a2 = to_string(a);
		b2 = to_string(b);

	dlugosc1 = a2.length();
	dlugosc2 = b2.length();
	
	for(int i=0;i<dlugosc1;i++){
		przy=a2[i];
		liczba = stoi(przy);
		suma=suma+liczba;	
	}
	//	cout<<"Suma a:"<<suma<<endl;
		
	for(int i=0;i<dlugosc2;i++){
		przy2=b2[i];
		liczba2 = stoi(przy2);
		suma2=suma2+liczba2;
	}
	//	cout<<"Suma b:"<<suma2<<endl;
		
	if(suma+suma2==c){
		cout<<a<<" "<<b<<" "<<c<<endl;
	}
		suma=0;
		suma2=0;
	}
}
int main(int argc, char** argv) {
	licz l;
	l.wczytaj();
	return 0;
}
