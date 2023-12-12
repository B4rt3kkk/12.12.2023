#include <iostream>
#include <vector>
using namespace std;
class Zakupy
{
public:
	string Nabiał;
	string Warzywa;
	string Pieczywo;
	int Nabiał_Cena;
	int Warzywa_Cena;
	int Pieczywo_Cena;

public:
	Zakupy(string Nabiał, string Warzywa, string Pieczywo, int Nabiał_Cena, int Warzywa_Cena, int Pieczywo_Cena) {
		this->Nabiał = Nabiał;
		this->Warzywa = Warzywa;
		this->Pieczywo = Pieczywo;
		this->Nabiał_Cena = Nabiał_Cena;
		this->Warzywa_Cena = Warzywa_Cena;
		this->Pieczywo_Cena = Pieczywo_Cena;
	}
};

int main()
{
	vector <Zakupy> tablica;

	int ileZakupow;
	cout << "Podaj ile zakupow dodac do VECTORA = "; cin >> ileZakupow;

	for (size_t i = 0; i < ileZakupow; i++)
	{
		string Nabiał;
		string Warzywa;
		string Pieczywo;
		int Nabiał_Cena;
		int Warzywa_Cena;
		int Pieczywo_Cena;

		cout << "nr " << i + 1 << "podaj nazwe Nabiał = "; cin >> Nabiał;
		cout << "nr " << i + 1 << "podaj cene Nabiału = "; cin >> Nabiał_Cena;
		
		cout << "nr " << i + 1 << "podaj nazwe Warzywa = "; cin >> Nabiał;
		cout << "nr " << i + 1 << "podaj cene Warzyw = "; cin >> Warzywa_Cena;

		cout << "nr " << i + 1 << "podaj nazwe Pieczywo = "; cin >> Nabiał;
		cout << "nr " << i + 1 << "podaj cene Pieczywa = "; cin >> Pieczywo_Cena;

		tablica.push_back(Zakupy(Nabiał, Warzywa, Pieczywo, Nabiał_Cena, Warzywa_Cena, Pieczywo_Cena));
	}

	for (size_t i = 0; i < tablica.size(); i++)
	{
		cout << "Nabiał: " << tablica[1].Nabiał << "Nabiał_Cena" << endl;
		cout << "Warzywa: " << tablica[i].Warzywa << "Warzywa_Cena" << endl;
		cout << "Pieczywo: " << tablica[i].Pieczywo << "Pieczywo_Cena" << endl;
		suma = suma + tablica[i].cena_lacmza;
	}
	cout << "Suma zakupów" << suma;
	return EXIT_SUCCESS;
}
