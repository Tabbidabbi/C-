//Mein zweites Programm

/*
 * main.cpp
 */

#include <iostream>
#include <iomanip>
#include <climits>
#include <cfloat>

using namespace std;

int main() {

	//Ausgabe mit cout

	/*cout << "Hi, \n";
	 cout << "das hier ist mein 2. Programm,"<< " das Steuerzeichen,";
	 cout << " Kommentare, und\nflush() erl�utert." << endl << endl;
	 cout.flush();*/

	//Formatierung
//	int anzahl = 2;
//	double preis = 1.40;
//
//
//
//	 cout << "Anzahl: "<< anzahl << endl;
//	 cout << "Preis: "<< preis << " Euro"<< endl << endl;
//
//	 //setw() setzt eine Breite  vor der Ausgabe(F�llzeichen)
//	 cout << "Anzahl: "<< setw(8) << anzahl << endl;
//	 cout << "Preis:  "<< setw(8) << preis << " Euro"<< endl;
//
//	 // setfill gibt an welches F�llzeichen genommen werden soll.
//	 cout << setfill('.');
//	 cout << "Anzahl: "<< setw(8) << anzahl << endl;
//	 cout << "Preis:  "<< setw(8) << preis << " Euro"<< endl;
//
//
//	 // fixed bedeuted Zahlen mit fester Nachkomma sollen formatiert werden.
//	 // setprecision sagt an wieviel Nachkommastellen
//	 cout << fixed << setprecision(2);
//	 cout << "Preis:  "<< setw(8) << preis << " Euro"<< endl;
//
//	 //left hei�t linksb�ndige Ausgabe
//	 cout << left;
//	 cout << "Preis:  "<< setw(8) << preis << " Euro"<< endl;
//Rechnen
//	int anzahlApfel = 2, anzahlBirne = 4;
//	double preisApfel = 1.45, preisBirne = 0.85;
//
//	double summeRechnung, preisMittel, preisDifferenz;
//
//
//
//	summeRechnung = (anzahlApfel * preisApfel)
//			+ (anzahlBirne *  preisBirne);
//
//	preisMittel = summeRechnung / (anzahlApfel + anzahlBirne);
//
//	preisDifferenz = preisApfel - preisBirne;
//
//
//	cout << fixed << setprecision(2);
//	cout << "Summe der Rechnung: " << summeRechnung << " Euro" <<endl;
//	cout << "Mittlerer Preis: " << preisMittel << " Euro" <<endl;
//	cout << "Preis-Differenz: " << preisDifferenz << " Euro" <<endl;
//Eingabe mit cin
//	int anzahl;
//	double preis;
//
//	cout << "Anzahl eingeben: ";
//	cin >> anzahl;
//
//	cout << "Preis in Euro eingeben: ";
//	cin >> preis;
//
//	cout << "Anzahl: " << anzahl << endl;
//	cout << "Preis: " << preis << " Euro" << endl;
//Fehler im Code behandeln
//		int anzahlApfel = 2, anzahlBirne = 4;
//		double preisApfel = 1.45, preisBirne = 0.85;
//
//		double summeRechnung, preisMittel, preisDifferenz;
//
//
//
//		summeRechnung = (anzahlApfel * preisApfel)
//				+ (anzahlBirne *  preisBirne);
//
//		preisMittel = summeRechnung / (anzahlApfel + anzahlBirne);
//
//		preisDifferenz = preisApfel - preisBirne;
//
//		cout << fixed << setprecision(2);
//		cout << "Summe der Rechnung: " << summeRechnung << " Euro." << endl;
//		cout << "Mittlerer Preis: " << preisMittel << " Euro." << endl;
//		cout << "Preis-Differenz: " << preisDifferenz << " Euro." << endl;
//	//Gr��e der Datentypen
//
//	// unsigned int hat keine negativen Vorzeichen
//
//	cout << "char: " << sizeof(char) << " Byte, ";
//	cout << "von " << CHAR_MIN << " bis " << CHAR_MAX << endl;
//
//	cout << "unsigned char: " << sizeof(unsigned char) << " Byte, ";
//	cout << "von 0 bis " << UCHAR_MAX << endl;
//
//	cout << "short: " << sizeof(short) << " Byte, ";
//	cout << "von " << SHRT_MIN << " bis " << SHRT_MAX << endl;
//
//	cout << "unsigned short: " << sizeof(unsigned short) << " Byte, ";
//	cout << "von 0 bis " << USHRT_MAX << endl;
//
//	cout << "int: " << sizeof(int) << " Byte, ";
//	cout << "von " << INT_MIN << " bis " << INT_MAX << endl;
//
//	cout << "unsigned int: " << sizeof(unsigned int) << " Byte, ";
//	cout << "von 0" << " bis " << UINT_MAX << endl;
//
//	cout << "long: " << sizeof(long) << " Byte, ";
//	cout << "von " << LONG_MIN << " bis " << LONG_MAX << endl;
//
//	cout << "unsigned long: " << sizeof(unsigned long) << " Byte, ";
//	cout << "von 0" << " bis " << ULONG_MAX << endl << endl;
//
//
//	cout << "float: " << sizeof(float) << " Byte, ";
//	cout << "von " << FLT_MIN << " bis " << FLT_MAX << endl;
//
//	cout << "double: " << sizeof(double) << " Byte, ";
//	cout << "von " << DBL_MIN << " bis " << DBL_MAX << endl;
//
//	cout << "long double: " << sizeof(long double) << " Byte, ";
//	cout << "von " << LDBL_MIN << " bis " << LDBL_MAX << endl << endl;
//
//	cout << fixed << setprecision(30);
//	cout << "1/7 in float:       " << 1.0f / 7 << endl;
//	cout << "1/7 in double:      " << 1.0 / 7 << endl;
//	cout << "1/7 in long double: " << 1.0L / 7 << endl;
//if else
//	double preis;
//
//	cout << "Bitte Artikelpreis eingeben: ";
//
//	cin>> preis;
//
//	if (preis > 0.99) {
//		cout << "Ein teuerer Artikel" << endl;
//	} else {
//		cout << "Ein billiger Artikel" << endl;
//		cout << "Den nehmen wir" << endl;
//	}
// Vergleichsoperatoren
//	double preisApfel = 1.45, preisBirne = 0.85, preisKiwi = 1.45;
//
//	if (preisApfel > preisBirne) {
//		cout << "Apfel ist teurer als Birne." << endl;
//
//	}
//	if (preisBirne < preisKiwi) {
//		cout << "Birne ist billiger als Kiwi." << endl;
//
//	}
//
//	if (preisApfel >= preisKiwi) {
//		cout << "Apfel ist mindestens so teuer wie Kiwi." << endl;
//	}
//	if (preisBirne <= preisKiwi) {
//		cout << "Kiwi ist mindestens so teuer wie Birne." << endl;
//	}
//	if (preisApfel == preisKiwi) {
//		cout << "Apfel und Kiwi haben den selben Preis." << endl;
//	}
//	if (preisBirne != preisKiwi) {
//		cout << "Birne und Kiwi haben unterschiedliche Preise." << endl;
//	}
// Mehrfache Verzweigung
//	double preis = 0.85;
//
//	if (preis >= 2.0) {
//		cout << "sehr teuer." << endl;
//
//	} else if (preis >= 1.0) {
//		cout << "teuer." << endl;
//	} else if (preis >= 0.5) {
//		cout << "billig." << endl;
//	} else {
//		cout << "sehr billig." << endl;
//	}
//	//logische Operatoren
//
//	double preisApfel = 1.45, preisBirne = 0.85, preisBanane = 0.75;
//
//	if (preisBirne < 1.0 && preisBanane < 1.0) {
//		cout << "Beide Artikel sind billig" << endl;
//	}
//	if (preisApfel > 0.99 || preisBirne > 0.99) {
//		cout << "Mindestend einer der Artikel ist teuer" << endl;
//	}
//
//
//	double preis = 1.85;
//	//bedingte Zuweisung
//
//	cout << (preis > 0.99 ? "Ein teurer Artikel" : "Ein billiger Artikel") << endl;
//switch
//
//	int wuerfel;
//
//	cin >> wuerfel;
//
//
//	switch(wuerfel) {
//	case 1:
//	case 3:
//	case 5:
//		cout << "ungerade" << endl;
//		break;
//	case 2:
//	case 4:
//	case 6:
//		cout << "gerade" << endl;
//		break;
//	default:
//		cout << "Nicht von 1 bis 6" << endl;
//	}
//Schleifen
	int anzahl;
	double preis, summeRechnung = 0.0;

	for (int i = 1; i <= 3; i++) {
		cout << "Nr. " << i << ", Anzahl: ";
		cin >> anzahl;
		cout << "Nr. " << i << ", Preis in Euro: ";
		cin >> preis;

		summeRechnung = summeRechnung + anzahl * preis;
	}

	cout << "Summe: " << summeRechnung << endl;

}
