# ejercicios cpp

## 1. Basico de cpp

## 2. Arrays

## 3. Estructuras u objetos 

## 4. Funciones
### e2.cpp
Pedimos por consola un numero que haciendo un for elevamos ese numero al cuadrado.
### e3.cpp
Pedimos una base y un exponente para luego hacer un for y generar la exponenciacion de cualquier numero
### e4.cpp
Escriba un programa en cpp que devuelva la parte fraccionaria de cualquir numero intruducido por el usuario
por ejemplo si se introduce el numero 256.879 deberia desplegarse el numero 0.879

### e5.cpp
Escriba una plantilla de funcion llamada `despliegue ()` que despliegue el valor del argumento unico que se le transmite cuando es invocada la funcion.

### e6.cpp
Escriba una plantilla de funcion llamada maximo() que devuelva el valor maximo de tres argumentos que se
trasmitan a la funcion cuando sea llamada.
supongamos que los tres argumentos seran del mismo tipo de datos.

### paso de parametos por Referencia

es pasar la direccion de memoria donde esta almacena esa variable o ese valor.
`&` direccion en memoria.
Ejemplo: 
hacemos el prototipo `void valNuevo(int&, int&);`
luego ejecutamos `valNuevo(x, y);`
definimos la funcion 
```
int x=15, y=10;
void valNuevo(int& xReferencia, int& yReferencia){
  cout<<"El valor del primer dato es: "<<xReferencia<<endl; // esto daria El valor del primer dato es: 15
  cout<<"El valor del primer dato es: "<<yReferencia<<endl; // esto daria El valor del primer dato es: 10
}
```
que es lo que estamos haciendo pues solo inidicarle la direccion de memoria donde se encuentran los valores.
