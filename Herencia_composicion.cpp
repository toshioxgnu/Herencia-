// programa herencia_por_composicion.CPP

#include <iostream>
using namespace std;

class Pareja
{
    // atributos
    double a, b;

public:
    // métodos
    double getA();
    double getB();    
    void   setA(double n);
    void   setB(double n);
};
 
// implementación de los métodos de la clase Pareja
double Pareja::getA() { return a; }
double Pareja::getB() { return b; }
void Pareja::setA(double n) { a = n; }
void Pareja::setB(double n) { b = n; }

class Suma
{
    // atributo privado     
    double resultado;

public:
    // método público
    double calcular();
    // atributo público
    Pareja  p;
};
// implementación del metodo calcular de la clase Suma.
double Suma::calcular() { return p.getA() + p.getB(); }

int main()
{
    Suma s;
    s.p.setA(80);
    s.p.setB(100);
    cout << s.p.getA() << " + " << s.p.getB() << " = " << s.calcular() << endl;
    cin.get();
    return 0;
}
//////SALIDA////

//80 + 100 = 180
