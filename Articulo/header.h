#ifndef HEADER_H
#define HEADER_H

class Articulo
{
    private:
    	float costoBase;
    public:
        Articulo(); //constructor
        ~Articulo(); //destructor
        void getCostoBase();
        void setCostoBase(float);
        void mostrarPVPmayorista();
        void mostarPVPdetal();
};

#endif