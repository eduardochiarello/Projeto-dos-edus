#include <stdio.h>

int main(void)
{   
    struct horario  //Definindo o tipo estrutura
    {
        int *p_horas;
        int *p_minutos;
        int *p_segundos;
    };

    struct horario agora;

    int hora = 200;
    int minuto = 300;
    int segundo = 400;

    agora.p_horas = &hora;
    agora.p_minutos = &minuto;
    agora.p_segundos = &segundo;


    printf("%i:%i:%i\n", *agora.p_horas, *agora.p_minutos, *agora.p_segundos);

    return 0;
}