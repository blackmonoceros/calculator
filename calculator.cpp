#include <iostream>

using namespace std;



template<typename T>



class Kalkulator {

private:

	T wynik;

public:

	Kalkulator():wynik(0)

	{

	}

	void mnozenie(T m, T n) {

		wynik=m*n;

	}

	void odejmowanie(T m, T n) {

		wynik=m-n;

	}

	void dzielenie(T m, T n) {

		if (n==0) {

			cerr<<"Nie moE<na dzielic przez 0 (ZERO)!"<<endl;

			return;

		}

		wynik=m/n;

	}

	void dodawanie(T m,T n) {

		wynik=m+n;

	}

	void printResult() {

		cout<<"Wynik dzialania to --- "<<wynik<<endl;

	}

};

int main() {

	Kalkulator<int> kalkInt;

	kalkInt.mnozenie(4,2);

	kalkInt.printResult();

	kalkInt.odejmowanie(12,8);

	kalkInt.printResult();

	kalkInt.dzielenie(21,4);

	kalkInt.printResult();

	kalkInt.dodawanie(7,11);

	kalkInt.printResult();





	Kalkulator<float> kalkFloat;

	kalkFloat.mnozenie(6.2,5.4);

	kalkFloat.printResult();

	kalkFloat.odejmowanie(13.1,12.6);

	kalkFloat.printResult();

	kalkFloat.dzielenie(46.1,2.1);

	kalkFloat.printResult();

	kalkFloat.dodawanie(18.1,6.4);

	kalkFloat.printResult();





	return 0;

}