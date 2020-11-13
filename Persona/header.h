#ifndef HEADER_H
#define HEADER_H

class Persona
{
    private:
    	string nombre;
    	int dia;
    	int mes;
    	int anno;
    	int diact;
    	int mesact;
    	int annoact;
    public:
    	Persona();
    	~Persona();
    	void setNombre(string);
    	void getNombre();
    	void setDia(int);
    	void getDia();
    	void setMes(int);
    	void getMes();
    	void setAnno(int);
    	void getAnno();
    	void setDiact(int);
    	void getDiact();
    	void setMesact(int);
    	void getMesact();
    	void setAnnoact(int);
    	void getAnnoact();
    	void obtenerEdad();
};

#endif