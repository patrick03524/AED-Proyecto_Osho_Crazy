#include "Player.h"

Player::Player(string nombre, Lista<int> Mano_Inicial)
{
    P_Hand = Mano_Inicial;
    P_Name = nombre;
    score_actual = 0;
}
int Player::Score_Add(int s)
{
    score_actual+=s;
    return score_actual;
}
bool Player::Card_Add(Card<int> carta_we)
{
    P_Hand.L_Draw(carta_we);
    return 1;
}
