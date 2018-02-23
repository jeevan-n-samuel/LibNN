#ifndef MATRIX_H
#define MATRIX_H

class Matrix{
	private:
		double** m;
		const int NUM_ROWS;
		const int NUM_COLS;
	public:
		Matrix(int rows, int cols);
		Matrix operator+(const Matrix&);
		Matrix operator-(const Matrix&);
		Matrix operator*(const Matrix&);
		void print();
};

#endif