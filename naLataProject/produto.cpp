#include "produto.h"
#include <iostream>
using namespace std;

// Inicializa��o do ID est�tico
int Produto::proximoId = 1;

// Construtor padr�o
Produto::Produto() {
    id = proximoId++;
    nome = "";
    quantidade = 0;
    precoCusto = 0.0f;
}

// Construtor com par�metros
Produto::Produto(int id, string nome, int quantidade, float precoCusto) {
    this->id = id;
    this->nome = nome;
    this->quantidade = quantidade;
    this->precoCusto = precoCusto;
}

// Getters
int Produto::getId() const {
    return id;
}

string Produto::getNome() const {
    return nome;
}

int Produto::getQuantidade() const {
    return quantidade;
}

float Produto::getPrecoCusto() const {
    return precoCusto;
}

// Pre�o de venda com margem (exemplo: 30% de lucro)
float Produto::getPrecoVenda() const {
    return precoCusto * 1.3f;
}

// Pre�o de venda com IVA (23% aplicado sobre o pre�o de venda)
float Produto::getPrecoVendaComIVA() const {
    float precoVenda = getPrecoVenda();
    return precoVenda * 1.23f;
}

// Estoque
void Produto::adicionarStock(int qtd) {
    quantidade += qtd;
}

void Produto::removerStock(int qtd) {
    if (quantidade >= qtd) {
        quantidade -= qtd;
    }
}