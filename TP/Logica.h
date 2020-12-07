#pragma once
#include <vector>
#include <string>
#include "Mundo.h"
#include "Imperio_Jogador.h"
#include "Territorio.h"

using namespace std;

class Logica
{
	const int max_turnos = 12;
	int turno;
	int ano;
	int pontuacao_final;
	Mundo mundo;
	Imperio_Jogador imperio_jogador;

public:
	Logica(): turno(0), ano(0), pontuacao_final(0) {}

	//get
	int getTurno();
	int getAno();
	int getPontuacaoFinal();
	Imperio_Jogador* getImperioJogador();
	Mundo* getMundo();
	

	//add
	void adicionaNovoTerritorioAoImperio(string nome);

	//increase
	void increaseTurno();
	void increaseAno();

	//create
	bool criaNTerritorios(string nome, int num);

	//split
	vector<string> spitComando(string comando);

	//prepare
	void preparaJogo();

	//verify
	bool verificaSeTerritorioEstaConquistado(int posicao_mundo);
	bool verificaSeTodosOsTerritoriosEstaoConquistados();

	//calculate
	void calculaPontuacaoFinal();

	//Game Operations
	void conquista(string nome);

};

