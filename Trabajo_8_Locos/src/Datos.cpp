#include "Datos.h"
/*
///enum Cartas_Value : int {dos = 2, tres = 3, cuatro = 4, cinco = 5, seis = 6, siete = 7, ocho =8, nueve = 9, diez = 10, j = 11, q = 12, k = 13, a = 14};
int Cards_Value[13] = {14,2,3,4,5,6,7,8,9,10,11,12,13};
string Cards[4]={"Espadas", "Corazones", "Rombos", "Tréboles"};
string Colores[4]={"Negro", "Rojo", "Rojo", "Negro"};

int Num_Types_Cards = 4;
int Num_Cards = 52;
int Num_Cards_Per_Type = Num_Cards/Num_Types_Cards;
*/
int generar_Aleatorio_Max(int max){
    int numero_aleatorio=1+rand()%(max-1);  ///Numeros entre 1-1000
    return numero_aleatorio;
}
