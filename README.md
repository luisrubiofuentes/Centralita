# Centralita

En un automóvil, hay 9 sensores que generan señales registradas en una ECU como un número. Los valores generados por los sensores son números del 0 al 9, excepto el primer sensor, el  correspondiente al dígito más significativo, que genera valores entre 1 y 9.

La ECU genera una señal que envía a otra ECU en función de los valores recibidos de los sensores. Los valores que puede tomar está señal son los números del 0 al 9 y la letra ‘X’.

Las reglas de calculo de la señal a generar son las siguientes:

• Se calcula haciendo módulo 11 a la suma decreciente del valor indicado en cada dígito generado por los sensores multiplicado por su peso decreciente. El valor de la señal a generar sería el valor que sería necesario añadir a la suma anterior para que sea divisible entre 11. En caso que el valor a añadir
sea 10, en lugar de 10, la señal toma el valor X.

A modo de ejemplo. Si los sensores generar el valor 130640615 el resultado sería:

1 × 10 + 3 × 9 + 0 × 8 + 6 × 7 + 4 × 6 + 0 × 5 + 6 × 4 + 1 × 3 + 5 × 2 = 140

• Una vez obtenido el valor de la suma, hay que calcular el módulo 11

• El valor de la nueva señal será el valor que sería necesario añadir a la suma
anterior para que sea divisible entre 11. 


Se debe crear un programa que dada una combinación válida por parte de los sensores (el número se introduce por teclado, y debe ser un entero con 9 dígitos. Si
el numero no tiene 9 dígitos se debe mostrar el mensaje “Valor no valido” y se termina el programa) y muestre en la pantalla el valor generado para la nueva señal.
