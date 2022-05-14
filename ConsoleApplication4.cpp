#include <iostream>
#include <Windows.h>
using namespace std;



int invest()
{
	double summ;
	double proc;

	cout << "Enter your summ : ";
	cin >> summ;

	cout << "Enter proc : ";
	cin >> proc;

	double month = (summ * (proc / 100)) / 12;

	cout << "result : " << month << "\n\n";

	Sleep(1000);
	system("cls");

	return 0;
}


int shop()
{
	double money;
	double price;

	cout << "Enter money : ";
	cin >> money;

	cout << "Enter price of product : ";
	cin >> price;

	int product = money / price;
	double remainder = money - (product * price);

	cout << "product : " << product << "\n";
	cout << "remainder : " << remainder << "\n\n";

	Sleep(1000);
	system("cls");

	return 0;
}

int remont()
{
	double dl;
	double sh;
	double vis;
	double m;
	double n;
	double price;


	cout << "Enter dl : ";
	cin >> dl;

	cout << "Enter sh : ";
	cin >> sh;

	cout << "Enter vis : ";
	cin >> vis;

	cout << "Enter n(litrov na m2) : ";
	cin >> n;

	cout << "Enter m (okna, dveri) : ";
	cin >> m;

	cout << "Enter price : ";
	cin >> price;


	double steni = (vis * dl * 2) + (vis * sh * 2);
	double litrov = (steni - (steni * (m / 100))) * n;
	double summ = litrov * price;

		
	cout << "Lintorv : " << litrov << "\n";
	cout << "Price : " << summ << "\n\n";

	return 0;
}


int main()
{
	invest();
	shop();
	remont();
}