#include<iostream>
#include<vector>

using namespace std;

class Problema{

private:
	const int TAMANIO=9;	

	vector<vector<int> > sudoku;

public:

	Problema(vector<vector<int> > sudo);

	Problema();

	Problema(const Problema & m);

	Problema& operator=(const Problema& m);

	bool siguiente(int &fila, int &columna);

	bool funcion_solucion(int fila, int columna);

	bool podar(int fila, int columna, int num);

	vector<vector<int> > getSolucion();

	friend istream& operator>>(istream& is, Problema& m);

	friend ostream& operator<<(ostream& os,  Problema& m);



};
