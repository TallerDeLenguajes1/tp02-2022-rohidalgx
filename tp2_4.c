#include <stdio.h>
#define TAMANO 5

int ingresoVelocidad();
int ingresoAnio();
int ingresoCantidad();
char* ingresoCpu();

struct compu{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
};

int main(){

    struct compu arreglo [TAMANO];

    for (int i = 0; i < TAMANO; i++){
        printf("--- PC %d ---\n", i);
        arreglo[i].velocidad = ingresoVelocidad();
        arreglo[i].anio = ingresoAnio();
        arreglo[i].cantidad = ingresoCantidad();
        arreglo[i].tipo_cpu = ingresoCpu();
    }

    return 0;
}

int ingresoVelocidad(){
    int auxiliar = 0;
    while(auxiliar < 1 || auxiliar > 3){
        printf("Ingrese la velocidad\n");
        scanf("%d", &auxiliar);
    }
    return auxiliar;
}

int ingresoAnio(){
    int auxiliar = 0;
    while(auxiliar < 2000 || auxiliar > 2017){
        printf("Ingrese la velocidad\n");
        scanf("%d", &auxiliar);
    }
    return auxiliar;
}

int ingresoCantidad(){
    int auxiliar = 0;
    while(auxiliar < 1 || auxiliar > 8){
        printf("Ingrese la velocidad\n");
        scanf("%d", &auxiliar);
    }
    return auxiliar;
}

char* ingresoCpu(){
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    char opcion = 'Z';

    while(opcion == 'Z'){
        printf("Ingrese la marca del CPU(i = Intel, a = AMD, c = Celeron, t = Athlon, k = Core, p = Pentium\n");
        scanf("%c", &opcion);

        switch(opcion){
            case 'i':
                return tipos[0];
            case 'a':
                return tipos[1];
            case 'c':
                return tipos[2];
            case 't':
                return tipos[3];
            case 'k':
                return tipos[4];
            case 'p':
                return tipos[5];
            default:
                opcion = 'Z';
                break;
        } 
    }

}

void mostrar (struct compu* compus, int tamanio){
    for (int i = 0; i < tamanio; i++)   {
        printf("--- PC %d ---\n", i);
        printf("Velocidad: %d", compus[i].velocidad);
        // printf("Velocidad: %d", compus->velocidad); segunda opción
        printf("Anio: %d", compus[i].anio);
        printf("Cantidad: %d", compus[i].cantidad);
        printf("Core: %d", compus[i].tipo_cpu);
        
        // compus++; segunda opción
    }
}

void mostrarVieja(struct compu compus[], int tamanio){

}