typedef struct medicamento Medicamento;

typedef struct arvore Arvore;

Medicamento* CriaMedicamento(Arvove* a, Medicamento* m);

Arvore* CriaArvore();

Arvore* InsereArvoreMedicamento(Arvore* a, Medicamento* m);

Arvore* RetiraArvoreMedicamento(Arvore* a, int id_medicamento);

int VerificaArvoreMedicamento(Arvore* a, int id_medicamento);

int VerificaArvoreValidade(Arvore* a, int* data);

void imprimeArvoreMedicamentos(Arvore* a);