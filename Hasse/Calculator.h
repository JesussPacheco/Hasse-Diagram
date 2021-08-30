#pragma once
#include<vector>
#include<iostream>
#include<map>
using namespace std;
class Calculator
{
	int n;
	vector<int>primos;//Los primos
	vector<int>mcm;//todo el mcm
	vector<int>div;//todos los divisiores
	vector<vector<int>>sub;//los subConjuntos ordenados de a->a 
	vector<int>guard;//Permutaciones del mcm
	vector<vector<pair<int, int>>>P_orden;//Pares Ordenados
	vector < vector<int>>matriz;
	map<int, int>posiciones; 
	int lenPos = 0;

public:
	Calculator(int n) {
		sub.push_back(vector<int>{1});//el uno es divisor de todos :u
		this->n = n;
		for (int i = 1; i <= n; i++) {
			if (n%i == 0) {
				div.push_back(i);
				posiciones[i] = lenPos;
				lenPos++;
			}
		}
		CalcularPrimos();
		CalcularMcm();
		Diagramar();
		Ordenados();
		MuestraPares();//consola
		Matriz();
		MostrarMatriz();//consola
	}
	~Calculator() {
	}
	//Multiplicaciones posibles
	void permutacionCR(int aux, vector<int>items, int n, int r) {
		int resp = aux;
		if (r > 0) {
			for (int x = 0; x < n; x++) {
				permutacionCR(aux * items[x], items, n, r - 1);
			}                                                     
		}
		else {
			bool repite = true;
			for (int i = 0; i < guard.size(); i++) {
				if (resp == guard[i]) {
					repite = false;
					break;
				}
				//2*3 3*2
			}
			if (repite)
				guard.push_back(resp);
		}
	}
	//Support-Primos
	bool NDivisibles(int element) {//calculando los numeros primos
		int cont = 0;
		if (element == 1) return false;
		for (int i = 0; i < div.size(); i++) {

			if (element%div[i] == 0)
				cont++;
			if (cont > 2)
				return false;
		}
		if (cont < 2)
			return false;
		else return true;
	}
	void CalcularPrimos() {
		for (int i = 0; i < div.size(); i++) {
			if (NDivisibles(div[i]))
				primos.push_back(div[i]);
		}
	}
	//Calculando todo el mcm
	void CalcularMcm() {
		int auxN = n;
		for (int i = 0; i < primos.size(); i++) {
			if (auxN%primos[i] == 0) {
				auxN /= primos[i];
				mcm.push_back(primos[i]);//
				i--;

			}
			if (auxN == 1)break;
		}
	}
	//buscar elements
	void buscar() {
		vector<int>aux;
		for (int i = 0; i < div.size(); i++) {
			for (int j = 0; j < guard.size(); j++) { 
				if (div[i] == guard[j])        
					aux.push_back(div[i]);//
			}
		}
		sub.push_back(aux);
	}
	//Guardando elementos en un vector de vectores
	void Diagramar() {
		for (int i = 0; i < mcm.size(); i++) {
			permutacionCR(1, mcm, mcm.size(), i + 1);
			buscar();
			guard.clear();
		}

	}
	//Calcula Pares Ordenados
	void Ordenados() {
		vector <pair<int, int>>aux;
		for (int i = 0; i < div.size(); i++) {
			for (int j=i; j < div.size(); j++) {
				if (div[j] % div[i] == 0)
					aux.push_back({ div[i],div[j] });
			}
			P_orden.push_back(aux);
			aux.clear();
		}
	}
	//Prueba de pares ordenados
	void MuestraPares() {
		for (int i = 0; i < P_orden.size(); i++) {
			for (int j = 0; j < P_orden[i].size(); j++) {
				cout << "{" << P_orden[i][j].first << "," << P_orden[i][j].second << "} ";
			}
			cout << endl;
		}
	}
	void Matriz() {
		matriz = vector < vector<int>>(div.size()); 
		for (int i = 0; i < div.size(); i++) {
			for (int j = 0; j < div.size(); j++) {
				int aux = 0;
				matriz[i].push_back(aux);  //0 0 0
				                           //0 0 0
			}
             
		}
	}
	void MostrarMatriz() {
		for (int i = 0; i < div.size(); i++) {
			for (int j = 0; j < div.size(); j++) {
				cout << matriz[i][j]<< " ";
			}
			cout << endl;

		}
	}
	void cambiarPos(int  a,int b ) {

		//cout << "ez";
		//cout << matriz[a][b] << endl;
		matriz[a][b] = 1;
	}
	bool Reflexiva() {
		for (int i = 0; i < div.size();i++) {
			if (matriz[i][i] != 1) return false;
			else continue;
		}
		return true;
	}
	bool Antisimetrica() {
		for (int i = 0; i < div.size(); i++) {
			for (int j = 0; j < div.size(); j++) {
				if (i!=j) {
					if (matriz[i][j] == 1 && matriz[j][i] == 1) {
						return false;
					}
				}
				else continue;
			}
		}
			return true;
	}
	bool Transitiva() {
		vector < vector<int>>cuadrado(div.size());
		for (int i = 0; i < div.size(); i++) {
			for (int j = 0; j < div.size(); j++) {
				bool cmp = false;
				for (int k = 0; k < div.size();k++) {
					if (matriz[i][k] == 1 && matriz[k][j] == 1) {
						cuadrado[i].push_back(1);
						cmp = true;
						break;
					}
				}
				if (!cmp)	cuadrado[i].push_back(0);
			}
		}
		//prueba cuadrado
		cout << "Matriz Cuadrada" << endl;
		for (int x = 0; x < div.size(); x++) {
			for (int y = 0; y < div.size(); y++) {
				cout << cuadrado[x][y] << " ";
			}
			cout << endl;
		}
		////
		for (int n = 0; n< div.size(); n++) {
			for (int m= 0; m <div.size(); m++) {
				if (cuadrado[n][m] == 1 && matriz[n][m] == 0) {
					return false;
				}
		   }
		}
		return true;
	}
	map<int, int>getPos() {
		return posiciones;
	}
	int getN() {
		return n;
	}
	vector<int>getDivisores() {
		return div;
	}
	vector<int>getPrimos() {
		return primos;
	}
	//importante
	vector<vector<int>>getSub() {
		return sub;
	}
	vector<vector<pair<int, int>>>getParesOrdenados() {
		return P_orden;
	}
	vector < vector<int>>getMatriz() {
		return matriz;
	}
	/////////////////////////
};
