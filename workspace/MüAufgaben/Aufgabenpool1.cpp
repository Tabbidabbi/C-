#include <iostream>
#include <iomanip>
using namespace std;


void hexWert() {
	int anyNumber;

	cout << "Bitte irgendeine Zahl eingeben: " ;


	cin >> anyNumber;

	cout << "Sie haben " << anyNumber << " eingegeben der Hex Wert lautet: "
			<< hex << anyNumber << endl;
}

void preAndPostIncrement() {

	int i = 0;
	int j = 0;

	cout << i++ << endl;
	cout << "Die Variable wird erst nach Aufruf erhöht." << endl;
	cout << i << endl;
	cout << "-----------" << endl;
	cout << ++j << endl;
	cout << "Die Variable wird direkt erhöht."<< endl;
	cout << j << endl;




}


int main() {
	preAndPostIncrement();

}
