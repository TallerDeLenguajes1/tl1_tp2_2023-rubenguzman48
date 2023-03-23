#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct compu
{
    int velocidad;
    int anio;
    int nucleos;
    char tipo_cpu;
};


int main()
{
    struct compu pc1;
    char tipos[6]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};


    srand(time(0));

    pc1.velocidad = rand()%3+1;
    pc1.anio = rand()%8+2015;
    pc1.nucleos = rand()%8+1;
    pc1.tipo_cpu = tipos;

    printf("\nEsto es la velocidad del procesador: %dGhz", pc1.velocidad);
    printf("\nEste es el anio del procesador: %d", pc1.anio);
    printf("\nCantidad de nucleos del procesador: %d", pc1.nucleos);
    printf("\nEl tipo de procesador es %s", pc1.tipo_cpu);

    return 0;
}