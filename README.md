# Logic

### Description

>Starting at the top left corner of an N x M grid and facing towards the right, you keep walking one square at a time in the direction you are facing. If you reach the boundary of the grid or if the next square you are about to visit has already been visited, you turn right. You stop when all the squares in the grid have been visited. What direction will you be facing when you stop? For example: Consider the case with N = 3, M = 3. The path followed will be (0,0) -> (0,1) -> (0,2) -> (1,2) -> (2,2) -> (2,1) -> (2,0) -> (1,0) -> (1,1). At this point, all squares have been visited, and you are facing right.
>
>Input specification
The first line contains T the number of test cases. Each of the next T lines contain two integers N and M, denoting the number of rows and columns respectively.
>
>Output specification
Output T lines, one for each test case, containing the required direction you will be facing at the end. Output L for left, R for right, U for up, and D for down. 1 <= T <= 5000, 1 <= N,M <= 10^9.

>Entry

4

1 1

2 2

3 1

3 3

>Output

R

L

D

R

## Justificación

Existen 3 posibles combinaciones:
1. Cuando n es menor que m
2. Cuando n es mayor que m
3. Cuando n es igual a m

El caso más sencillo es cuando m es igual a n

* Para n,m = 1

R (iniciamos a la derecha)

* Para n,m = 2

L

* Para n,m = 3

R

* Para n,m = 4

L

> Para n,m = 2x donde x = 1,2,3....

L (n,m son pares y n=m)

> Para n,m = 2x + 1 donde x = 1,2,3...

R (n,m son impares y n=m)


En base a numerosas combinaciones de n > m y m < n (decido no escribir ejemplos pues serían a lo minimo 20 de cada uno) se puede observar cierto patrón en las secuencias, por lo que pude determinar que:

1. Cuando n es par y n < m entonces el movimiento es hacia la izquierda (L)
2. Cuando n es impar y n < m entonces el movimiento es hacia la derecha (R)
3. Cuando m es impar y n > m entones el movimiento es hacia abajo (D)
4. Cuando m es par y n > m entonces el movimiento es hacia arriba (U)