#ifndef GAME_H
#define GAME_H
#include "Datos.h"
#include "Deck.h"
#include "Player.h"

class Game
{
    public:
        int Num_Types_Cards = 4;
        int Num_Cards = 52;
        ///int Num_Cards_Per_type = Num_Cards/Num_Types_Cards;
        int Cards_Value[13] = {14,2,3,4,5,6,7,8,9,10,11,12,13};
        string Cards[4]={"Espadas", "Corazones", "Rombos", "Tréboles"};
        string Colores[4]={"Negro", "Rojo", "Rojo", "Negro"};

        string Players_Name[4] = {"Player 1", "Player 2", "Player 3", "Player 4"};
        Game();
        int G_Score;
        int G_Turn;
        int G_Num_Players;
        bool G_Game_Over;
        Deck<int> Deck_In_Use;
        void Print_Table_2_Players();
        void Print_Table_Mult_Players();
        void Print_Winner();



};

#endif // GAME_H
