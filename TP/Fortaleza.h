#pragma once
#include "Continente.h"
class Fortaleza : public Continente
{
	int resistencia;
	int num_produtos_criados;
	int num_ouro_criado;
public:
	Fortaleza(string name) : Continente(name), resistencia(8), num_produtos_criados(0), num_ouro_criado(0) {}

	//gets
	int getResistencia();
	int getProdutos();
	int getOuro();
};
