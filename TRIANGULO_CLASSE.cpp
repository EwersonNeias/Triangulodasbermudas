#include <iostream>
#include <math.h> //binliotecas usadas para o calculo matematico
using namespace std;

//aqui o codigo faz o calculo para minha classe
double calcularAreaTriangulo(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) *  (p - c));
}

int main() {
    double xa, xb, xc, ya, yb, yc;
    
    //cout ultilizado para se comunicar com o usuario
    cout << "Digite as medidas dos lados do triângulo X (separados por espaço): ";
    cin >> xa >> xb >> xc;
    
    //cout ultilizado para se comunicar com o usuario
    cout << "Digite as medidas dos lados do triângulo Y (separados por espaço): ";
    cin >> ya >> yb >> yc;
    
    //aqui vou usar duas variaveis, uma para o X e outra para o Y 
    double areaX = calcularAreaTriangulo(xa, xb, xc);
    double areaY = calcularAreaTriangulo(ya, yb, yc);
    
    //usando a variavel para se comunicar com o usuario
    cout << "Área do triângulo X: " << areaX << endl;
    cout << "Área do triângulo Y: " << areaY << endl;
    
    //aqui o codigo se comunica com o usuario para 
    if (areaX > areaY) {
        cout << "O triângulo X tem a maior área." << endl;
    } else if (areaY > areaX) {
        cout << "O triângulo Y tem a maior área." << endl;
    } else {
        cout << "O triângulo têm a mesma área." << endl;
    }
        
        return 0;
        
}