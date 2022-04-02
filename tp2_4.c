#include <stdio.h>

#define TAMANO 5
#define FILAS 6
#define COLUMNAS 10

struct compu{
    int velocidad;
    int anio;
    int cantidad;
    char* tipo_cpu;
};

int ingresoVelocidad();
int ingresoAnio();
int ingresoCantidad();
char* ingresoCpu(char tipos [FILAS][COLUMNAS]);
void mostrar(struct compu computadora[], int tamano);
void mostrarUna(struct compu computadora);
void masVieja(struct compu computadora[], int tamano);
void masVeloz(struct compu computadora[], int tamano);

int main(){
    char tipos[FILAS][COLUMNAS]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    struct compu computadoras [TAMANO];

    for (int i = 0; i < TAMANO; i++){
        printf("--- PC %d ---\n", i + 1);
        computadoras[i].velocidad = ingresoVelocidad();
        computadoras[i].anio = ingresoAnio();
        computadoras[i].cantidad = ingresoCantidad();
        computadoras[i].tipo_cpu = ingresoCpu(tipos);
    }

    printf("\n");

    mostrar(computadoras, TAMANO);

    printf("\n");

    masVieja(computadoras, TAMANO);

    printf("\n");

    masVeloz(computadoras, TAMANO);

    return 0;
}

int ingresoVelocidad(){
    int velocidad;

    do{
        printf("Ingrese la velocidad (1 - 3)\n");
        scanf("%d", &velocidad);
    } while(velocidad < 1 || velocidad > 3);

    return velocidad;
}

int ingresoAnio(){
    int anio;

    do{
        printf("Ingrese el anio (2000 - 2017)\n");
        scanf("%d", &anio);
    } while(anio < 2000 || anio > 2017);

    return anio;
}

int ingresoCantidad(){
    int cantidad;

    do{
        printf("Ingrese la cantidad (1 - 4)\n");
        scanf("%d", &cantidad);
    } while(cantidad < 1 || cantidad > 4);

    return cantidad;
}

char* ingresoCpu(char tipos [FILAS][COLUMNAS]){
    char opcion;

    while (1){
        printf("Ingrese el tipo de CPU (i = Intel, m = AMD, c = Celeron, a = Athlon, k = Core, p = Pentium\n");
        scanf(" %c", &opcion);

        switch(opcion){
            case 'i':
                return tipos[0];
            case 'm':
                return tipos[1];
            case 'c':
                return tipos[2];
            case 'a':
                return tipos[3];
            case 'k':
                return tipos[4];
            case 'p':
                return tipos[5];
            default:
                break;
        }
    }
}

void mostrar(struct compu computadora[], int tamano){

    printf("--- Computadoras ---\n");

    for (int i = 0; i < tamano; i++){
        printf("Velocidad: %d\n", computadora[i].velocidad);
        printf("Anio: %d\n", computadora[i].anio);
        printf("Cantidad: %d\nCpu:", computadora[i].cantidad);
        puts(computadora[i].tipo_cpu);
        printf("\n");
    }
}

void mostrarUna(struct compu computadora){

    printf("Velocidad: %d\n", computadora.velocidad);
    printf("Anio: %d\n", computadora.anio);
    printf("Cantidad: %d\nCpu:", computadora.cantidad);
    puts(computadora.tipo_cpu);
    printf("\n");

}

void masVieja(struct compu computadora[], int tamano){
    int auxiliar = 2500;
    int temporal;

    for (int i = 0; i < tamano; i++){
        if (computadora[i].anio < auxiliar){
            auxiliar = computadora[i].anio;
            temporal = i;
        }
    }

    printf("--- Mas vieja ---\n");
    mostrarUna(computadora[temporal]);
}

void masVeloz(struct compu computadora[], int tamano){
    int auxiliar = 0;
    int temporal;

    for (int i = 0; i < tamano; i++){
        if (computadora[i].velocidad > auxiliar){
            auxiliar = computadora[i].velocidad;
            temporal = i;
        }
    }

    printf("--- Mas veloz ---\n");
    mostrarUna(computadora[temporal]);
}