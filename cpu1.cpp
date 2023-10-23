#include <ctime>
#include <iostream>
#include <math.h>

using namespace std;

void mostrartiempo(clock_t tiempo) ;
int main(){
	clock_t tiempo = clock ();
	long long i = 0;
	double sum= 0;
	for (i = 1; i <1000000000; i++){
		sum = sum + log(double(i));
	}
	mostrartiempo(tiempo);
	cout << "pulse para salir...";
	cin.get();
	return 0;
}
void mostrartiempo(clock_t tiempo ){
	tiempo = clock() - tiempo;
	cout<<endl<<"tiempo de ejecucion es"<<double(tiempo)/ CLOCKS_PER_SEC<<"seg"<<endl;
}
