#ifndef CARD_H
#define CARD_H
#include "Datos.h"
template <class T>
class Card
{
    public:
        Card<T> *C_Next;
        Card()
        {
            C_Value = 0;
            C_Name = "Joker";
            C_Color = "Joker";
            C_Next = 0;
            cout <<"Carta Joker Instanciada"<<endl;
        }
        Card(T valor, string nombre, string color)
        {
            C_Value = valor;
            C_Name = nombre;
            C_Color = color;
            C_Next = 0;
        }
        Card(Card<T> &new_Card)
        {
            C_Value = new_Card.get_Value();
            C_Name = new_Card.get_Name();
            C_Color = new_Card.get_Color();
            C_Next = new_Card.C_Next;
        }
        T get_Value(){return C_Value;}
        string get_Name(){return C_Name;}
        string get_Color(){return C_Color;}
    private:
        T C_Value;
        string C_Name;
        string C_Color;
};

#endif // CARD_H
