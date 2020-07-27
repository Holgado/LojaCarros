#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED

class Veiculo {
    public:
        int vel;
        int tipo;
        Veiculo(int tp);
        int getVelMax();   
        bool getLigado();
        void setLigado(int l);
    private:
        std::string nome;
        int velMax;
        bool ligado;
        void setVelMax(int vm);
};

Veiculo::Veiculo(int tp) { // 1 = carro 2 = avião 3 = navio
    tipo = tp;
    if(tipo == 1) {
        nome = "Carro";
        setVelMax(200);
    } else if (tipo == 3) {
        nome = "Avião";
        setVelMax(800);
    } else if (tipo == 3) {
        nome = "Navio"
        setVelMax(120);
    }
    setLigado(0);
}
int Veiculo::getVelMax() {
    return velMax;
}
bool Veiculo::getLigado() {
    return ligado;
}
void Veiculo::setVelMax(int vm) {
    velMax = vm;
}
void Veiculo::setLigado(int l) {
    if(l == 1) {
        ligado = true;
    }
    else if (ligado == 0) {
        ligado = false;
    }
}

#endif