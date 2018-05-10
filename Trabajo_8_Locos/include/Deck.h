#ifndef DECK_H
#define DECK_H
#include "Card.h"




template <class T>
class Deck
{
    public:
        Card<T> *Top;
        int Num_Types_Cards = 4;
        int Num_Cards = 52;
        ///int Num_Cards_Per_type = Num_Cards/Num_Types_Cards;
        int Cards_Value[13] = {14,2,3,4,5,6,7,8,9,10,11,12,13};
        string Cards[4]={"Espadas", "Corazones", "Rombos", "Tréboles"};
        string Colores[4]={"Negro", "Rojo", "Rojo", "Negro"};

        Deck()
        {

            cout <<"BARAJA"<<endl;
            Top = new Card<T> (Cards_Value[0], Cards[0], Colores[0]);
            Card<T> *Temp = Top;
            for(int i = 1; i < Num_Cards/Num_Types_Cards;  i++){
                Temp = Temp -> C_Next;
                Temp = new Card<T> (Cards_Value[i], Cards[0], Colores[0]);
            }
            for(int i = 0; i < Num_Cards/Num_Types_Cards;  i++){
                Temp = Temp -> C_Next;
                Temp = new Card<T> (Cards_Value[i], Cards[1], Colores[1]);
            }
            for(int i = 0; i < Num_Cards/Num_Types_Cards;  i++){
                Temp = Temp -> C_Next;
                Temp = new Card<T> (Cards_Value[i], Cards[2], Colores[2]);
            }
            for(int i = 0; i < Num_Cards/Num_Types_Cards;  i++){
                Temp = Temp -> C_Next;
                Temp = new Card<T> (Cards_Value[i], Cards[3], Colores[3]);
            }
            cout <<"Baraja Instanciada con exito"<<endl;
        }
        ~Deck()
        {
            Card<T> *temp1 = Top;
            Card<T> *temp2 = 0;
            while(temp1){
                temp2 = temp1 ->C_Next;
                delete temp1;
                temp1 = temp2;
            }
            delete temp2;
            temp1 = temp2 = 0;
            cout <<"Baraja Liberada con exito"<<endl;
        }
        bool shuffle(); ///barajea baraja actual
        bool remove_Card(Card<T> C_Removed) ///solo un caso de remover el del tope tio xd
        {
            Card<T> *temp1 = Top;
            Card<T> *temp2 = 0;
            temp2 = temp1 ->C_Next;
            delete temp1;
            Top = temp2;
            return 1;
        }
        Card<T> draw()
        {
            Card<T> carta_draw = *Top;
            remove(*Top);
            return carta_draw;
        }


};

#endif // DECK_H
