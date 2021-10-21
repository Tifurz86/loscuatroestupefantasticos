#include <iostream>
#include <math.h>
using namespace std;
int main() {

	double var1, var2, var3;
	double media, desviacion, part1, part2;
	
	cout<<"\n	introduce el valor de x1: ";
	cin>>var1;
	cout<<"\n	introduce el valor de x2: ";
	cin>>var2;
	cout<<"\n	introduce el valor de x3: ";
	cin>>var3;
	
	//formula  
	
	media = (var1 + var2 + var3)/3;
	
	part1= pow(var1-media, 2.0)+ pow(var2-media, 2.0)+ pow(var3-media, 2.0);
	
	part2 = part1/3;
	desviacion= sqrt(part2);
	
	cout<<"\n	la media es = "<<media<<endl;
	cout<<"\n	la desviacion tipica es = "<<desviacion<<endl;
}
	
