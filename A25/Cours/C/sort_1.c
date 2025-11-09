#include <stdio.h>
#include <stdlib.h>

void sortListLVL1(int t[], int dim) {
    for (int i = 0; i < dim - 1; i++) {
        for (int j = 0; j < dim - i - 1; j++) {
            if (t[j] > t[j + 1]) {
                int temp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = temp;
            }
        }
    }
}
void similarities(int t1[], int dim1, int t2[], int dim2){
    for(int i=0; i<dim1-1;i++){
        int cont=0;
        for(int j=0; j<dim2-1;j++){
            if(t1[i] == t2[j]){
                cont++;
            }
        }
        if(cont>0){
            printf("L'element %d est commun (%d fois)\n", t1[i],cont);
        }
    }
}

void remplirListe(int t[], int dim) {
    for (int i = 0; i < dim; i++) {
        printf("Entrer l'element %d: ", i);
        scanf("%d", &t[i]);
    }
}

void afficherListe(int t[], int dim) {
    for (int i = 0; i < dim; i++) {
        printf("t[%d] = %d\n", i, t[i]);
    }
}

int main() {
    int dim1, dim2;

    printf("Entrer la dimension du tableau: ");
    scanf("%d", &dim1);
    int *t1 = malloc(dim1 * sizeof(int));

    if (t1 == NULL) {
        printf("Erreur d'allocation mémoire.\n");
        return 1;
    }

    remplirListe(t1, dim1);
    printf("\nTableau initial:\n");
    afficherListe(t1, dim1);

    sortListLVL1(t1, dim1);

    printf("\nTableau trie:\n");
    afficherListe(t1, dim1);

    printf("\nEntrer la dimension du deuxieme tableau: ");
    scanf("%d", &dim2);
    int *t2 = malloc(dim2 * sizeof(int));
    if (t2 == NULL) {
        printf("Erreur d'allocation mémoire\n");
        free(t1);
        return 1;
    }

    remplirListe(t2, dim2);
    printf("\nDeuxième tableau:\n");
    afficherListe(t2, dim2);
    printf("En voi si il ya des similariter: \n");
    similarities(t1,dim1,t2,dim2);

    free(t1);
    free(t2);

    printf("Fin du programme.\n");
    getchar();
    getchar();
    return 0;
}
