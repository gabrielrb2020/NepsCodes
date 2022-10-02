#include <iostream>

using namespace std;

float mediaValoresVetor(int vet[], int tam) {
    float soma = 0;
    for (int i = 0; i < tam; i++) {
        soma += vet[i];
    }
    return soma / tam;
}

int main()
{
    int vet[] = {1, 2, 3, 4, 5, 7, 10};
    float media;
    media = mediaValoresVetor(vet, 7);
    cout << "Media: " << media;
    return 0;
}