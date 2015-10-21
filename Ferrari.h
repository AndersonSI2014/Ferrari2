#ifndef FERRARI_H
#define FERRARI_H

#include <string>

using namespace std;

class Ferrari
{
    public:
        void trocarMarcha();
        void mostrarVelocidade();
        void ativarMotor()

    private:
        string codigo;
        float velocidade;
        double motorAtivado;
};

#endif // FERRARI_H
