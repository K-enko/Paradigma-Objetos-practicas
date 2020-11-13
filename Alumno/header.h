#ifndef HEADER_H
#define HEADER_H

class Alumno
{
	private:
		string cedula;
		string nombre;
		float nota1;
		float nota2;
		float nota3;
	public:
		Alumno(); //constructor
		~Alumno(); //destructor
		void setCedula(string);
		void getCedula();
		void setNombre(string);
		void getNombre();
		void setNota1(float);
		void getNota1();
		void setNota2(float);
		void getNota2();
		void setNota3(float);
		void getNota3();
		void AproRepro(string);
};

#endif