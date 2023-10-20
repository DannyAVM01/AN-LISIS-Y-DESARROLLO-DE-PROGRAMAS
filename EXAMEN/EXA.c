/**
 * @file EXA.c
 * @author Victorio Medina Danny Alejandro (dvictoriom1700@alumno.ipn.mx)
 * @brief EXAMEN PRACTICO B "FECHAS"
 * @boleta: 2023640637
 * @version 1.0
 * @date 2023-10-20
 * @copyright Copyright (c) 2023
 */

#include <stdio.h>

int main() {
    int dia = 20, mes = 10, anio = 2023;
    int opcion;

    do {
        printf("Menú:\n");
        printf("1. Asignar fecha\n");
        printf("2. Mostrar fecha\n");
        printf("3. Restar días a una fecha\n");
        printf("4. Cuántos días faltan de una fecha inicial a una final\n");
        printf("5. Salir\n");
        printf("Opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Introduce el día, el mes y el año de la fecha:\n");
                int nuevoDia, nuevoMes, nuevoAnio;
                scanf("%d %d %d", &nuevoDia, &nuevoMes, &nuevoAnio);

                if (nuevoDia >= 1 && nuevoDia <= 30 && nuevoMes >= 1 && nuevoMes <= 12 && nuevoAnio >= 0) {
                    dia = nuevoDia;
                    mes = nuevoMes;
                    anio = nuevoAnio;
                    printf("Fecha asignada: %d/%d/%d\n", dia, mes, anio);
                } else {
                    printf("Fecha no válida. Introduce valores dentro de los rangos permitidos.\n");
                }
                break;

            case 2:
                printf("%d/%d/%d\n", dia, mes, anio);
                break;

            case 3:
                printf("¿Cuántos días le quieres restar a la fecha?\n");
                int diasRestar;
                scanf("%d", &diasRestar);

                if (diasRestar >= 0) {
                    dia -= diasRestar;
                    while (dia < 1) {
                        dia += 30;
                        mes--;
                        if (mes < 1) {
                            mes = 12;
                            anio--;
                        }
                    }
                    printf("Nueva fecha: %d/%d/%d\n", dia, mes, anio);
                } else {
                    printf("Ingresa un número positivo de días a restar.\n");
                }
                break;

            case 4:
                printf("Introduce el día, el mes y el año de la fecha final:\n");
                int diaFinal, mesFinal, anioFinal;
                scanf("%d %d %d", &diaFinal, &mesFinal, &anioFinal);

                if (diaFinal >= 1 && diaFinal <= 30 && mesFinal >= 1 && mesFinal <= 12 && anioFinal >= 0) {
                    int diasFaltantes = (anioFinal - anio) * 360 + (mesFinal - mes) * 30 + (diaFinal - dia);
                    printf("Faltan %d días\n", diasFaltantes);
                } else {
                    printf("Fecha final no válida. Introduce valores dentro de los rangos permitidos.\n");
                }
                break;

            case 5:
                printf("Saliendo del programa.\n");
                break;

            default:
                printf("Opción no válida. Por favor, elige una opción válida.\n");
                break;
        }
    } while (opcion != 5);

    return 0;
}
