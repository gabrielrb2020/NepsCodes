#include <bits/stdc++.h>
using namespace std;

// faca um exercicio que vai cadastrar itens de uma padaria, com os campos: nome, id, preco. Apos isso, pegar o id do item que tem o menor preco

typedef struct{
    string nome;
    int id;
    float preco;
}Padaria;

int main(){
    vector<Padaria> vetProdutos;
    Padaria produto;

    cout << "Digite a quantidade de produtos: ";
    int qtd;
    cin >> qtd;

    for(int i = 0; i < qtd; i++){
        cin >> produto.nome;
        cin >> produto.id;
        cin >> produto.preco;

        vetProdutos.push_back(produto);
    }

    cout << "Os produtos da padaria sao: " << endl;
    for(int i = 0; i < vetProdutos.size(); i++){
        cout << "Produto " << i + 1 << endl;
        cout << "Nome: " << vetProdutos.at(i).nome << endl;
        cout << "ID: " << vetProdutos.at(i).id << endl;
        cout << "Preco: " << vetProdutos.at(i).preco << endl;
    }

    float menor = vetProdutos.at(0).preco;
    int indiceMenor = 0;
    for(int i = 1; i < vetProdutos.size(); i++){
        if(vetProdutos.at(i).preco < menor){
            menor = vetProdutos.at(i).preco; //vetProdutos[i].preco; -> vetProdutos.at(i).preco;
            indiceMenor = i;
        }
    }

    cout << "O ID do produto mais barato na padaria eh: " << vetProdutos.at(indiceMenor).id << endl;

}