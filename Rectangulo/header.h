#ifndef HEADER_H
#define HEADER_H

class Rectangulo
{
    private:
    	float altura = 0;
    	float base = 0;
    public:
    	Rectangulo();
    	~Rectangulo();
    	void setAltura(float);
    	void getAltura();
    	void setBase(float);
    	void getBase();
    	void darArea();
    	void darPerimetro();
};

#endif