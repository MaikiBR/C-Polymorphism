#ifndef FRACCION_H
#define FRACCION_H

class Fraccion{
  protected:
    int numerador;
    int denominador;
  public:
    Fraccion();
    Fraccion(int,int);
    void reduccion(int &, int &);
    Fraccion suma(Fraccion);
    Fraccion multiplicacion(Fraccion);
    Fraccion resta(Fraccion);
    void imprimir();
    int getNumerador();
    int getDenominador();
    void setNumerador(int);
    void setDenominador(int);
};

#endif // FRACCION_H