#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string aux;
    ifstream arquivo_leitura;
    int linhas, colunas;

    arquivo_leitura.open("entrada.txt");
    if(arquivo_leitura.is_open()){

        getline(arquivo_leitura, aux);
        getline(arquivo_leitura, aux);
        arquivo_leitura >> linhas;
        arquivo_leitura >> colunas;

        cout << linhas << endl;
        cou
    }

}