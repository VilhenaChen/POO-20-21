#pragma once
#include "Continente.h"

using namespace std;

class Montanha : public Continente
{
	int resistencia;
	int num_produtos_criados;
	int num_ouro_criado;
	int ano_conquistado;
	int turno_conquistado;
public:
	Montanha(string name) : Continente(name), resistencia(6), num_produtos_criados(0), num_ouro_criado(0), ano_conquistado(0), turno_conquistado(0) {}

	//gets
	int getResistencia();
	int getProdutos();
	int getOuro();
	int getAnoConquistado();
	int getTurnoConquistado();
	string getMeuTipo();

	//sets
	void setAnoConquistado(int ano);
	void setTurnoConquistado(int turno);

	//update
	void atualizaProdutosEOuro(int ano, int turno);

	~Montanha() {}
};

