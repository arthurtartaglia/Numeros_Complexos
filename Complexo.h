#ifdef TYPE
#ifdef TYPED


typedef struct TYPED(complexo) {
    TYPE a;
    TYPE b;
} TYPED(complexo_t);

TYPED(complexo_t)* TYPED(criaComplexo)(TYPE a, TYPE b);

void TYPED(destroiComplexo)(TYPED(complexo_t)* complexo);

void TYPED(atribuiComplexo)(TYPED(complexo_t)* complexo1, TYPED(complexo_t)* complexo2);

void TYPED(imprimeComplexo)(TYPED(complexo_t)* complexo);

TYPE TYPED(retornaReal)(TYPED(complexo_t)* complexo);

TYPE TYPED(retornaImaginaria)(TYPED(complexo_t)* complexo);

double TYPED(retornaMagnitude)(TYPED(complexo_t)* complexo);

double TYPED(retornaFase)(TYPED(complexo_t)* complexo);

void TYPED(mudaReal)(TYPED(complexo_t)* complexo,TYPE real);

void TYPED(mudaImaginaria)(TYPED(complexo_t)* complexo,TYPE imaginaria);

TYPED(complexo_t)* TYPED(calculaConjugado)(TYPED(complexo_t)* complexo);

TYPED(complexo_t)* TYPED(somaComplexos)(TYPED(complexo_t)* complexo1, TYPED(complexo_t)* complexo2);

TYPED(complexo_t)* TYPED(acumulaSoma)(TYPED(complexo_t)* complexo1, TYPED(complexo_t)* complexo2);

TYPED(complexo_t)* TYPED(subtraiComplexos)(TYPED(complexo_t)* complexo1, TYPED(complexo_t)* complexo2);

TYPED(complexo_t)* TYPED(produtoComplexos)(TYPED(complexo_t)* complexo1, TYPED(complexo_t)* complexo2);

TYPED(complexo_t)* TYPED(acumulaProduto)(TYPED(complexo_t)* complexo1, TYPED(complexo_t)* complexo2);

TYPED(complexo_t)* TYPED(divideComplexos)(TYPED(complexo_t)* complexo1, TYPED(complexo_t)* complexo2);

TYPED(complexo_t)* TYPED(operacaoComplexo)(TYPED(complexo_t)* complexo1, TYPED(complexo_t)* complexo2, char* operador);

int TYPED(verificaModulo)(TYPED(complexo_t)* complexo);

int TYPED(verificaReal)(TYPED(complexo_t)* complexo);

int TYPED(verificaImaginario)(TYPED(complexo_t)* complexo);

int TYPED(comparaModulos)(TYPED(complexo_t)* complexo1, TYPED(complexo_t)* complexo2);

int TYPED(comparaFase)(TYPED(complexo_t)* complexo1, TYPED(complexo_t)* complexo2);

#endif
#endif