#include <iostream>
#include <math.h>
using namespace std;

int main(){
	//Datos aportados y que vamos a usar para calcular
	const double x0 = sqrt(2);
	const double y1 = pow(2, 0.25);
	const double pi0 = 2 + sqrt(2);
	
	//Variables necesarias para el cálculo de pi1 y pi2
	double x1, pi1;
	double x2, y2, pi2;
	
	//Cálculos para pi1
	x1 = (sqrt(x0)+(1/sqrt(x0)))/2;
	pi1 = pi0 * ((x1 + 1) / (y1 + 1));
	
	//Cálculos para pi2
	x2 = (sqrt(x1)+(1/sqrt(x1)))/2;
	y2 = (y1 * sqrt(x1)+(1/sqrt(x1))) / (y1 + 1);
	pi2 = pi1 * ((x2 + 1) / (y2 + 1));
	
	//Se muestran pi0, pi1 y pi2
	cout << "π0 vale " << pi0 << ", π1 vale " << pi1 << " y π2 vale " << pi2 << endl;
}
	
