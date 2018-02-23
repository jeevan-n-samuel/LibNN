#include "Matrix.h"
#include <iostream>

using namespace std;

Matrix::Matrix(int rows, int cols) : NUM_ROWS(rows), NUM_COLS(cols){
	double** temp = new double*[NUM_ROWS];
	for (int i=0; i<NUM_ROWS; i++){
		temp[i] = new double[NUM_COLS];
	}

	for (int i=0; i<NUM_ROWS; i++){
		for (int j=0; j<NUM_COLS; j++){
			temp[i][j] = 1;
		}
	}

	m = temp;
}

Matrix Matrix::operator+(const Matrix& m2){
	//check that the matrix sizes match

	Matrix tempM = Matrix(NUM_ROWS, NUM_COLS);
	//add element by element
	for (int i=0; i<NUM_ROWS; i++){
		for (int j=0; j<NUM_COLS; j++){
			tempM.m[i][j] = m[i][j] + m2.m[i][j];
		}	
	}

	return tempM;
}

void Matrix::print(){
	for (int i=0; i<NUM_ROWS; i++){
		cout << endl;
		for (int j=0; j<NUM_COLS; j++){
			cout << m[i][j] << " ";
		}
	}
	cout << endl;
}