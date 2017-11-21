#include "stdafx.h"
#include<iostream>
#include<math.h>
#define n 5


using namespace std;

class Matrix
{
private:
	int a[n][n];
	int i, j, k;

public:
	void MatrixInput();
	void Old_MatrixOutput();
	void Sorting();
	void New_MatrixOutput();
	void DobytokOfLine_and_Sum();

};

void Matrix::MatrixInput()
{
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << "Enter the element [" << i + 1 << "][" << j + 1 << "]=";
			cin >> a[i][j];
			cout << endl;
		}
	}
}

void Matrix::Old_MatrixOutput()
{
	cout << "\n Your matrix:\n";
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (j == 0) cout << endl;
			cout << a[i][j] << "\t";
		}
	}
}

void Matrix::Sorting()
{


	for (int i = 0; i < n; i++)
	{
		int b;
		for (int j = 0; j < n; j++)
		{
			int b = i; int x = a[i][j];
			for (int m = i + 1; m < n; m++)
			{
				if (a[j][m] < x)
				{
					b = m;
					x = a[j][m];
				}
			}
			a[j][b] = a[i][j];
			a[i][j] = x;
		}

	}

}

void Matrix::New_MatrixOutput()

{
	cout << "\n New matrix:\n";
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (j == 0) cout << endl;
			cout << a[i][j] << "\t";
		}
	}
}
void Matrix::DobytokOfLine_and_Sum()
{
	int sum = 0;

	for (int i = 4; i > 0; i--) {

		int dobytok = 1;
		int d = 0;

		for (int j = 4; j > 0; j--)
		{
			d = i + j;
			if (d>4)
			{

				dobytok = dobytok*a[i][j];
			}

		}

		cout << "\n";
		cout << "\t" << "f(a)=" << dobytok;
		sum = sum + dobytok;
	}
	sum = sum / 4;
	cout << "\n";
	cout << "\t" << "F(f(a))=" << sum;

	system("pause");

}


int main()
{
	Matrix S;
	S.MatrixInput();

	S.Old_MatrixOutput();
	S.Sorting();

	S.New_MatrixOutput();

	S.DobytokOfLine_and_Sum();

}

