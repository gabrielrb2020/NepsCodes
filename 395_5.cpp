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
    int vet[] = {1, 2, 3, 4, 5}, acima = 0, tam = 5;
    float media;
    media = mediaValoresVetor(vet, tam);
    cout << "Media: " << media << endl;

    for (int i = 0; i < tam; i++) {
        if (vet[i] > media) {
            acima++;
        }
    }
    cout << "Valores acima da media: " << acima << endl;
    cout << "Valores abaixo da media: " << tam - acima;

    return 0;
}