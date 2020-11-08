#include <iostream>
#include "Matrix.h"
#include <Windows.h>

using namespace std;

/*
* TO DO: Причесать мейн
*/

int main(int argc, char * argv[]) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Matrix<MatSet> SetMatrixA(3,3), SetMatrixC;
	Matrix <string> StringMatrixA(3, 3), StringMatrixC;

	SetMatrixA.rand_value();
	cout << endl << SetMatrixA;

	SetMatrixC = SetMatrixA + 607;
	cout << endl << SetMatrixC;

	StringMatrixA.rand_value();
	cout << endl << StringMatrixA;
	

	StringMatrixC = StringMatrixA + 'c';
	cout << endl << StringMatrixC;

}