#include "Game.h"

Game::Game()
{
    G_Game_Over = 0;
    G_Turn = 0;
    cout <<"----------------------------------"<<endl;
    cout <<"-----------8SHO---LOCO------------"<<endl;
    cout <<"-------------THE--GAME-------------"<<endl;
    cout <<"----------------------------------"<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<"----------------------------------"<<endl;
    cout <<" "<<endl;
    cout <<"Ingrese la cantidad de jugadores : ";
    cin >> G_Num_Players;
    while(G_Num_Players < 0 || G_Num_Players > 4){
        cout <<"Ingrese una cantidad correcta : ";
        cin >> G_Num_Players;
        cout <<" "<<endl;
    }
    cout <<" "<<endl;
    cout <<"----------------------------------"<<endl;
    cout <<" "<<endl;
    cout <<"Ingrese el Puntaje Max :";
    cin >> G_Score;
    while(G_Score < 0){
        cout <<"Ingrese una cantidad correcta : ";
        cin >> G_Score;
        cout <<" "<<endl;
    }
    cout <<" "<<endl;
    cout <<"----------------------------------"<<endl;
    cout <<" "<<endl;
    cout <<"Creando la partida................"<<endl;
    system("cls");
    cout <<"----------------------------------"<<endl;
    cout <<"-----------8SHO---LOCO------------"<<endl;
    cout <<"-------------THE--GAME-------------"<<endl;
    cout <<"----------------------------------"<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    ///Deck Deck_In_Use;
    switch(G_Num_Players){
        case 2:
            while(!G_Game_Over){
                Print_Table_2_Players();
            }
            break;
        default:
            while(!G_Game_Over){
                Print_Table_Mult_Players();
            }
            break;
    }

    cout <<"----------------------------------"<<endl;
    cout <<"Juego Acabado con exito"<<endl;
    cout <<"----------------------------------"<<endl;
    Print_Winner();
    system("exit");
}
void Game::Print_Table_2_Players()
{
    cout <<"----------------------------------"<<endl;
    cout <<" "<<endl;
    G_Turn++;
    cout <<"Turno : "<<G_Turn<<endl;
    cout <<" "<<endl;
    cout <<"----------------------------------"<<endl;
    for(int i = 0; i < G_Num_Players ; i++){
        Lista<int> hand1();
        Lista<int> hand2();
        for(int i = 0; i < 7; i++){
            hand1->L_Draw(new Card<int>(Deck_In_Use.draw()));
            hand2->L_Draw(new Card<int>(Deck_In_Use.draw()));
        }
        Player p1(Players_Name[i],hand1);
        Player p2(Players_Name[i],hand2);

        cout <<"Turno del Jugador : "<<Players_Name[i]<<endl;
        cout <<"Carta Robada"<<endl;
        G_Turn++;
    }
    cout <<"----------------------------------"<<endl;
}
void Game::Print_Table_Mult_Players()
{
    cout <<"----------------------------------"<<endl;
    cout <<" "<<endl;
    G_Turn++;
    cout <<"Turno : "<<G_Turn<<endl;
    cout <<" "<<endl;
    cout <<"----------------------------------"<<endl;
    for(int i = 0; i < G_Num_Players ; i++){
        Lista<int> hand1;
        Lista<int> hand2;
        Lista<int> hand3;
        for(int i = 0; i < 8; i++){
            hand1->L_Draw(new Card<int>(Deck_In_Use.draw()));
            hand2->L_Draw(new Card<int>(Deck_In_Use.draw()));
            hand3->L_Draw(new Card<int>(Deck_In_Use.draw()));
        }

        Player p1(Players_Name[i],hand1);
        Player p2(Players_Name[i],hand2);
        Player p3(Players_Name[i],hand3);

        cout <<"Turno del Jugador : "<<Players_Name[i]<<endl;
        cout <<"Carta Robada"<<endl;
        G_Turn++;
    }
    cout <<"----------------------------------"<<endl;
}
void Game::Print_Winner()
{
    cout <<"----------------------------------"<<endl;
    cout <<" "<<endl;
    cout <<"El ganador del juego es : "<<endl;
    cout <<" "<<endl;
    cout <<"----------------------------------"<<endl;
}
