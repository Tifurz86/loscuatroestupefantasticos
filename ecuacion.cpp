#include <iostream>
#include <cmath>
using namespace std;
int main() {
double xp, xn, a, b, c;
cout << "Introduce a ";
cin >> a;
cout << "Introduce b ";
cin>> b;
cout << "Introduce c ";
cin >> c;

xp= (-b + sqrt(pow(b,2) - 4*a*c))/(2*a);
cout <<"Solución 1 es " << xp << endl;
xn= (-b - sqrt(pow(b,2) - 4*a*c))/(2*a);
cout <<"Solución 2 es " << xn << endl;

}
