#include <iostream>
using namespace std;

int main(){
	double calificacion, total;
	int contador = 1;
while ( contador <= 3){
	cout << "escriba una calificacion: ";
	cin >> calificacion;
	total = total + calificacion;
	contador = contador +1;
}
	cout << "El total de calificacion es: " <<total;
}
