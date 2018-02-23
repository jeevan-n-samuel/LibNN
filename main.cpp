#include <iostream>
#include "Matrix.h"


int main(){
	Matrix m1 = Matrix(2,2);
	Matrix m2 = Matrix(2,2);
	Matrix m3 = m1+m2;
	m3.print();

}