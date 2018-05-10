#ifndef PLAYER_H
#define PLAYER_H
#include "Datos.h"
#include "Card.h"
#include "Lista.h"

class Player
{
    public:
        int Num_Types_Cards = 4;
        int Num_Cards = 52;
        int Num_Cards_Per_type = Num_Cards/Num_Types_Cards;
        int Cards_Value[13] = {14,2,3,4,5,6,7,8,9,10,11,12,13};
        string Cards[4]={"Espadas", "Corazones", "Rombos", "Tréboles"};
        string Colores[4]={"Negro", "Rojo", "Rojo", "Negro"};
        Player(string, Lista<int>);
        Lista<int> P_Hand;
        int score_actual;
        string P_Name;
        bool Card_Add(Card<int>);
        int Score_Add(int);


};

#endif // PLAYER_H
