#pragma once
#include <string>
#include <iostream>
using namespace std;


class Produto {
private:
    static int proximoId;
    int id;
    string nome;
    int quantidade;
    float precoCusto;

public:
    Produto();
    Produto(int id, string nome, int quantidade, float precoCusto);

    int getId() const;
    string getNome() const;
    int getQuantidade() const;
    float getPrecoCusto() const;
    float getPrecoVenda() const;           // Pre�o com margem
    float getPrecoVendaComIVA() const;     // Pre�o com margem + IVA

    void adicionarStock(int qtd);
    void removerStock(int qtd);
};
