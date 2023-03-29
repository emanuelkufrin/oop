#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Klijent {
public:
	string ime;
	string prezime;
	double stanje;
	double prekoracenje;
	Klijent() {};
	Klijent(string _ime, string _prezime, double _stanje, double _prekoracenje) {
		ime = _ime;
		prezime = _prezime;
		stanje = _stanje;
		prekoracenje = _prekoracenje;
	}

};

class Banka {
public:
	string ime;
	string adresa;
	vector<Klijent> klijenti;
	Banka() {};
	Banka(string _ime, string _adresa, vector<Klijent> _klijenti) {
		ime = _ime;
		adresa = _adresa;
		klijenti = _klijenti;
	}

	void KlijentiSaPrekoracenjem() {
	}
};

void KlijentiSaPrekoracenjem() {

}



int main() {

	vector<Klijent> klijenti = { Klijent("Marko", "Markovic", -1000, -15000), Klijent("Ivan", "Ivic", 1500, -15000) };
	Banka banka("Banka", "Romanova 15, Split", klijenti); // svi klijenti u popisu automatski pripadaju toj banci


	return 0;
}
