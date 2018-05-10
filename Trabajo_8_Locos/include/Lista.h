#ifndef LISTA_H
#define LISTA_H
#include "Datos.h"
#include "Card.h"
template <class T>
class Lista
{
    public:
        Card<T> *first;
        Lista()
        {
            first = 0;
        }
        void L_Draw(Card<T> nueva_Carta)
        {
            Card<T> *temp = new Card<T> (nueva_Carta);
            temp ->C_Next = first;
            first = temp;
        }
        void L_Set_A_Table(Card<T> chao_Carta);
        void L_Print_Current(Card<T> chao_Carta);
};

#endif // LISTA_H
