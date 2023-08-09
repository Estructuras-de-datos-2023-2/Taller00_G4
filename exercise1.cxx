// exercise1.cxx (Andrea Rueda)

// Main program that uses the functionality of rectangle.h

#include <iostream>
#include "rectangle.h"

using namespace std;

int main () {

	Rectangle rect1;
	int width, height;

	cout << "Ingrese coordenada X de la posicion del rectangulo: ";
	cin >> rect1.posX;
  
	cout << "Ingrese coordenada Y de la posicion del rectangulo: ";
	cin >> rect1.posY;
  
	cout << "Ingrese ancho del rectangulo: ";
	cin >> width;
	//se verifica que los datos ingresados sean correctos para la 
	//correcta ejecucion
	if(width <= 0){
		cout << "\nEl numero ingresado debe ser mayor a 0" << endl;
		return 0;
	}
	rect1.width = width;

	//se verifica que los datos ingresados sean correctos para la 
	//correcta ejecucion
	cout << "Ingrese alto del rectangulo: ";
	cin >> height;
	if(height <= 0){
		cout << "\nEl numero ingresado debe ser mayor a 0" << endl;
		return 0;
	}
	rect1.height = height;

  
	cout << "\nPerimetro del rectangulo: " << perimeterRect( rect1 ) << endl;
	cout << "Area del rectangulo: " << areaRect( rect1 ) << endl;
	cout << "Distancia del rectangulo al origen de coordenadas: "<< distOriginRect(rect1)<< endl;

	return 0;
}