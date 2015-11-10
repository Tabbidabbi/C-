#include <iostream>
#include <iomanip>

using namespace std;




void upperPart() {

	 int middleStars = 18;
	 int sideStars = 1;

for (int i = 1; i <= 10; i++) {
	if (i > 1 ) {
		for (int sL = 1;sL < sideStars; sL++) {
			cout << "*";
		}
	}
	cout << " ";
	for (int j = middleStars; j >=1;j--) {
		cout << "*";

	}
	cout << " ";
	if (i > 1 ) {
			for (int sR = 1;sR< sideStars; sR++) {
				cout << "*";
			}
		}
	middleStars -= 2;
	sideStars++;

	cout << endl;
}
}

void lowerPart() {


	 int middleStars = 0;
	 int sideStars = 9;

for (int i = 1; i <= 10; i++) {
	if (i < 10 ) {
		for (int sL = 1;sL <= sideStars; sL++) {
			cout << "*";
		}
	}
	cout << " ";
	for (int j = 0; j < middleStars;j++) {
		cout << "*";

	}
	cout << " ";
	if (i < 10 ) {
			for (int sR = 1;sR <= sideStars; sR++) {
				cout << "*";
			}
		}
	middleStars += 2;
	sideStars--;

	cout << endl;
}
}

void aufgabeEinsUnkompliziert() {

	int zaehler = 20;

	for (int i = 1; i <=20; ++i) {
		for (int j = 1; j <= 20; j++) {
			if (i!=j && zaehler != j) {
				cout << "*";
			} else {
				cout << " ";
			}
		}
		zaehler -=1;
		cout << endl;
	}
}

void aufgabeEins() {
	upperPart();
	lowerPart();

}






int main() {


aufgabeEinsUnkompliziert();

}

