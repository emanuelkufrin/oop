#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Garaza {
public:
	double sirina;
	double duljina;
	string automatska_vrata;
	string lokacija;
	vector <Garaza> Predmeti;
};

class Predmet {
public:
	string naziv;
	double vrijednost;
	Predmet(string _naziv, double _vrijednost) {
		naziv = _naziv;
		vrijednost = _vrijednost;
	}
	Predmet() {};
};



int main() {


	int n;
	int n_predmet;
	int rb_garaze;
	string naziv;
	double vrijednost;

	cout << "Unesite broj garaza (N): " << endl;
	cin >> n;
	vector<Garaza> garaza(n);
	vector<Predmet> predmet(n);

	for (int i = 0; i < n; i++) {
		cout << "Unesite velicinu, lokaciju i podatak o vratima za " << i+1 << ". garazu: " << endl;
		cin >> garaza[i].sirina >> garaza[i].duljina;
		cin.ignore();
		getline(cin,garaza[i].lokacija);
		cin >> garaza[i].automatska_vrata;
	}

	cout << "Unesite broj predmeta (M): " << endl;
	cin >> n_predmet;
	cin.ignore();
	for (int i = 0; i < n_predmet; i++) {
		cout << "Unesite redni broj garaze u koju spada " << i + 1 << ". predmet: " << endl;
		cin >> rb_garaze;
		cout << "Unesite naziv i vrijednost predmeta: " << endl;
		cin >> naziv >> vrijednost;
		Predmet predmet(naziv, vrijednost);
	}

	cout << "Ispis garaza i predmeta: \n" << endl;
	for (int i = 0; i < garaza.size(); i++) {
		cout << i + 1 << ". " << garaza[i].lokacija << " " << garaza[i].sirina << "x" << garaza[i].duljina << " - predmeti: " << predmet[i].naziv << " (" << predmet[i].vrijednost << "kn)" << endl;
	}





	return 0;
}
