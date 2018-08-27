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

bool inserirResp (NO* resp, char letra, NO* prim, NO* ult){
    //checkagem de se tem a lista auxiliar
    if (ult){
      ult->prox = resp;
      NO* seg = NULL;

      //libera a alocação de memória da lista auxiliar
      while (prim){
        seg = prim->prox;
        free(prim);
        prim = seg;
      }  
    } 

    NO* novo = (NO*) malloc (sizeof(NO));
    novo->letra = letra;

    //começa a inserção no resp
    NO* atual = resp;   

    if (!atual) resp = novo;

    else{
        while (atual->prox) atual = atual->prox;
        atual->prox = novo;
    }
    novo->prox = NULL
    return true;
}

bool ordenar (NO* prim, NO* ult, char letra){
    NO* novo = (NO*) malloc (sizeof(NO));
    novo->letra = letra;
    
    if (!prim){
        novo->prox = NULL;
        prim = novo;
        ult = prim;
    }
    else{
        novo->prox = prim;
        prim = novo;
    }
    return true;

}



// o EP consiste em implementar esta funcao
NO* codificar(NO* frase) {
    //contador
    NO* p = frase;

    //lista resposta
    NO* resp = NULL;

    //lista ordenação
    NO* prim = NULL;
    NO* ult = prim;
    // sua rotina de codificacao aqui (o exemplo cria apenas um elemento X)    

    while (p){
        //se for vogal
        if ((strcmp(p->letra, "A")==0) || (strcmp(p->letra, "E")==0) || (strcmp(p->letra, "I")==0)|| (strcmp(p->letra, "O")==0)|| (strcmp(p->letra, "U")==0))
            inserirResp(resp, p->letra, prim, ult);

        //se não o for
        else
            ordenar(prim, ult, p->letra);
        p = p->prox;
    }
    /*resp = (NO*) malloc(sizeof(NO));
    resp->letra = 'X';
    resp->prox = NULL;
    */


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
