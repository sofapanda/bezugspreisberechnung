#include <iostream> 
#include <string>

using namespace std;

int main()
{
	cout << "Bezugspreiskalkulaion" << '\n' << endl;

	cout << "Bitte fuellen Sie die folgenden Eingaben: " << '\n' << endl;

	// Vereinbarung der Variablen 

	float menge = 0, preis = 0;
	float rabatt = 0;
	float skonto = 0;
	float versand = 0;



	do
	{
		cout << "Bitte geben Sie die Menge an (STK > 0): ";
		cin >> menge;
		cout << '\n';
		cout << "Bitte geben sie den Preis an (EUR > 0): ";
		cin >> preis;
		cout << '\n';
		cout << "Bitte geben Sie den Rabatt an (%): ";
		cin >> rabatt;
		cout << '\n';
		cout << "Bitte geben Sie das Skonto an (%): ";
		cin >> skonto;
		cout << '\n';
		cout << "Bitte geben Sie die Versandkosten an (EUR): ";
		cin >> versand;
		cout << '\n';
	} while (menge <= 0 || preis <= 0);


	// Die Berechnung
	float listenpreis = menge * preis;
	float zieleink = listenpreis - ((listenpreis / 100) * rabatt);
	float bareinkauf = zieleink - ((zieleink / 100) * skonto);
	float bezug = bareinkauf + versand;


	cout << "\n###### Es folgt die Berechnung der Eingaben ######\n\n"; 
	cout << "Listenpreis:\t\t" << listenpreis << '\t' << "EUR" << endl;
	cout << "- Rabatt:\t\t" << rabatt << "\t%" << endl;
	cout << "= Zieleinkaufspr.:\t" << zieleink << '\t' << "EUR" << endl;
	cout << "- Skonto:\t\t" << skonto << "\t%" << endl;
	cout << "= Bareinkaufspreis:\t" << bareinkauf << '\tEUR' << endl;
	cout << "+ Versandkosten:\t" << versand << "\tEUR" << endl;
	cout << "= Bezugspreis:\t\t" << bezug << "\tEUR" << endl;

	cout << "\nEin Programm von Christian Hancke - 2017\n\n";


	return 0;
}
