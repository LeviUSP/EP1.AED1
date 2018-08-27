#include "ep.h"

// ######### ESCREVA O NUMERO DO SEU GRUPO AQUI, CONFORME LINK NA ESPECIFICACAO DO EP
// ignore os warning to compilador, se houver
char* grupo() {
    return("6");
}

// ######### ESCREVA O NROUSP DO PRIMEIRO INTEGRANTE AQUI
// ignore os warning to compilador, se houver
char* nroUSP1() {
    return("10723670");
}

// ######### ESCREVA O NROUSP DO SEGUNDO INTEGRANTE AQUI (OU DEIXE COM ZERO)
// ignore os warning to compilador, se houver
char* nroUSP2() {
    return("10724250");
}



// o EP consiste em implementar esta funcao
NO* codificar(NO* frase) {

    NO* resp = NULL;

    // sua rotina de codificacao aqui (o exemplo cria apenas um elemento X)
    resp = (NO*) malloc(sizeof(NO));
    resp->letra = 'X';
    resp->prox = NULL;

    return resp;

}





//---------------------------------------------------------
// use main() para fazer chamadas de teste ao seu programa
//---------------------------------------------------------



int main() {

	NO* p = NULL;

	// aqui vc pode incluir codigo para inserir elementos
	// de teste na sua lista apontada por p

	// o EP sera testado com chamadas deste tipo
	NO* teste = NULL;
	teste = codificar(p);

	// e aqui precisaria percorrer a lista teste para ver se ficou correta etc.

}

// por favor nao inclua nenhum código abaixo da função main()
