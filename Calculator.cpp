#include <iostream>

using namespace std;


void Toplam(int a, int b)
{
	cout << "Toplam :" << a + b << endl;

}

void Cikarma(int a, int b)
{
	cout << "Cikan :" << a - b << endl;
}


void Carpma(int a, int b)
{
	cout << "Carpim :" << a * b << endl;

}
void Bolme(int a, int b)
{
	cout << "Bolum :" << a / b << endl;

}

int main()
{
	int yazi;
	int a;
	int b;
	cout << "Lutfen 1. Sayiyi Giriniz" << endl;
	cin >> a;
	cout << "===============" << endl;
	cout << "Lutfen 2. Sayiyi Giriniz" << endl;
	cin >> b;
	cout << "===============" << endl;
	cout << "Bir Islem Seciniz" << endl;
	cout << "1.Toplama\n2.Cikarma\n3.Carpma\n4.Bolme" << endl;
	cout << "===============" << endl;
	cin >> yazi;
	cout << "===============" << endl;

	switch (yazi)
	{

	case 1:
		{
			Toplam(a, b);
			cout << "-_-_-_-_-_-_-_-_-_-" << endl;
			cout << "Coded by Hell'Reys" << endl;
			cout << "-_-_-_-_-_-_-_-_-_-" << endl;
			break;
		}
	case 2:
	{
		Cikarma(a, b);
		cout << "-_-_-_-_-_-_-_-_-_-" << endl;
		cout << "Coded by Hell'Reys" << endl;
		cout << "-_-_-_-_-_-_-_-_-_-" << endl;
		break;
	}
	case 3:
	{
		Carpma(a, b);
		cout << "-_-_-_-_-_-_-_-_-_-" << endl;
		cout << "Coded by Hell'Reys" << endl;
		cout << "-_-_-_-_-_-_-_-_-_-" << endl;
		break;
	}

	case 4:
	{
		Bolme(a, b);
		cout << "-_-_-_-_-_-_-_-_-_-" << endl;
		cout << "Coded by Hell'Reys" << endl;
		cout << "-_-_-_-_-_-_-_-_-_-" << endl;
		break;
	}

	default:
	{

		cout << "Lutfen Dogru Bir Secim Yapiniz!" << endl;
	}




	}

	




}


