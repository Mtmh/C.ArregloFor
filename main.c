#include <stdio.h>

int main(void)
{
    int arreglo[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int tamaño = sizeof(arreglo) / sizeof(int);
    int ix;

    for (ix = 0; ix < tamaño; ++ix){
        printf("%d\n", arreglo[ix]);
        }
    return 0;
}
