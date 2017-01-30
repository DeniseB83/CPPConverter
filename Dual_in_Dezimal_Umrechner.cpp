#include <iostream>
#include <cstring>
#include <cmath> //Pow-Funktion einbinden

/*******************************************
Umrechnung von Dual in Dezimal mittels pow
*******************************************/

using namespace std;

int main()
{

     //Variable für dualzahl festlegen
    char dualzahl [16];

    //Variablen für Anzahl der Stellen, Ergebnis und für die Möglichkeit eine neue Berechnung zu starten
    int stellen = 0, ergebnis = 0, eingabe;

    //Anwendereingabe eingefügt in eine neue Schleife für die Möglichkeit einer neuen Eingabe

    do {
        cout << "Bitte geben Sie eine Dualzahl zur Umrechnung ein: " << endl;
        cin >> dualzahl;
        cout << "Sie moechten " << dualzahl << " umrechnen lassen. " << endl;

        //Vorbereitung - Stellen der Variable dualzahl bestimmen und der Variable stellen zuweisen
        // weitere Variablen dualzahl und position fuer die Umrechnung anlegen
        stellen = strlen(dualzahl);
        int dual [stellen];
        int hilf = 0;

        // die Umrechnung mit Hilfe einer Schleife und der math Funktion pow (zahl, zahl)

        for (int index = stellen; index > 0; index--)
            {
                dual[index] = dualzahl [index-1] -48;
                ergebnis += dual [index] * pow(2, hilf);
                hilf++;
            }

        // Ausgabe und Abfrage, ob eine neue Berechnung erfolgen soll
        cout << "Die Dualzahl entspricht im Dezimalsystem dem folgenden Wert: " << ergebnis << endl;

        //Variable ergebnis wieder mit 0 belegen um weitere Eingaben zu ermöglichen
        ergebnis = 0;

        cout << "Moechten Sie eine neue Berechnung starten?" <<'\n';
        cout << "0 - nein" << '\t' << "1 - ja" << endl;
        cin >> eingabe;

    } while (eingabe !=0);

    return 0;
}
