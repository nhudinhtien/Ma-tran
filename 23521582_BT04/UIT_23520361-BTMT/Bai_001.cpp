#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void TaoMaTran(int[][500], int&, int&);
void Xuat(int[][500], int, int);
void Xuat(string, int[][500], int, int);

int main()
{
	int a[500][500], m, n;
	TaoMaTran(a, m, n);
	cout << "Ma tran la: \n";
	Xuat(a, m, n);
	Xuat("data01.inp", a, m, n);
	return 0;
}

void TaoMaTran(int a[][500], int& m, int& n)
{
	cout << "Nhap dong: ";
	cin >> m;
	cout << "Nhap cot: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0;i < m;i++)
		for (int j = 0;j < n;j++)
			a[i][j] = rand() % 201 - 100;
}

void Xuat(int a[][500], int m, int n)
{
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cout << a[i][j] <<setw(8)<< "  ";
		}
		cout << endl;
	}
}

void Xuat(string filename, int a[][500], int m, int n)
{
	ofstream fo(filename);
	fo << "So dong la: ";
	fo << setw(8) << m << endl;
	fo << "So cot la: ";
	fo << setw(8) << n;
	fo << "\n";
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
			fo << setw(8) << a[i][j];
		fo << endl;
	}
}