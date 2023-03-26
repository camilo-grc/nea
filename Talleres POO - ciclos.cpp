/*El siguiente programa es la solución de los ejercicios propuestos de estructuras ciclicas del segundo semestre de Ingeniería en Desarrollo de Software | asignatura de programación orientada a objetos*/

//Autor: Camilo García | 2264484-2724

//Versión: 1

//Fecha de ult actualizacion: 26/03/23

#include<iostream>

using namespace std;

//Declaracion de variables globales

//Declaracion de prototipo de funciones

void menu();

void ejercicio_uno();

void ejercicio_dos();

void ejercicio_tres();

void ejercicio_cuatro();

void ejercicio_cinco();

void ejercicio_seis();

void ejercicio_siete();

void ejercicio_ocho();

void ejercicio_nueve();

void ejercicio10();

void ejercicio11();

void ejercicio12();

void ejercicio13();

void ejercicio14();

void ejercicio15();

void ejercicio16();

void ejercicio17();

void ejercicio18();

void ejercicio19();

void ejercicio20();

void ejercicio21();

void ejercicio22();

void ejercicio23();

void ejercicio24();

void ejercicio25();

void ejercicio26();

//Implementacion de funciones

void menu(){
    int opc;

    do{
        cout<<endl<<">> MENU"<<endl<<endl<<"0- Exit"<<endl<<"1- Suma del 1 al 10"<<endl<<"2- Suma de los n primeros naturales"<<endl<<"3- Primeros n numeros pares"<<endl<<"4- Cuantos pares, cuantos impares"<<endl<<"5- Suma de los primeros naturales -again-"<<endl<<"6- Rango de numeros"<<endl<<"7- Suma de numeros comprendidos entre un rango"<<endl<<"8- Serie 1"<<endl<<"9- Serie 2"<<endl<<"10- Numero de estudiantes con cierta calificacion"<<endl<<"11- Potencia"<<endl<<"12- Sumatoria, promedio, etc. de numeros ingresados"<<endl<<"13- Cuadrado con asteriscos"<<endl<<"14- Cuadrado hueco"<<endl<<"15- Factorial"<<endl<<"16- Cuadrados de numeros comprendidos entre un rango"<<endl<<"17- Figura n filas"<<endl<<"18- Histograma"<<endl<<"19- Triangulo rectangulo con asteriscos"<<endl<<"20- Primo o compuesto"<<endl<<"21- Media aritmetica"<<endl<<"22- Tabla de multiplicar"<<endl<<"23- Estudiantes con cierta calificacion"<<endl<<"24- Decimal a binario"<<endl<<"25- Caracteristicas de numeros ingresados"<<endl<<"26- Serie de Fibonacci"<<endl;

        cout<<endl<<"Seleccione una opcion: "; cin>>opc;

        switch(opc){
        case 0: cout<<endl<<endl<<"GRACIAS POR USAR LA APP :) !!!"<<endl<<endl; break;
        case 1: ejercicio_uno(); break;
        case 2: ejercicio_dos(); break;
        case 3: ejercicio_tres(); break;
        case 4: ejercicio_cuatro(); break;
        case 5: ejercicio_cinco(); break;
        case 6: ejercicio_seis(); break;
        case 7: ejercicio_siete(); break;
        case 8: ejercicio_ocho(); break;
        case 9: ejercicio_nueve(); break;
        case 10: ejercicio10(); break;
        case 11: ejercicio11(); break;
        case 12: ejercicio12(); break;
        case 13: ejercicio13(); break;
        case 14: ejercicio14(); break;
        case 15: ejercicio15(); break;
        case 16: ejercicio16(); break;
        case 17: ejercicio17(); break;
        case 18: ejercicio18(); break;
        case 19: ejercicio19(); break;
        case 20: ejercicio20(); break;
        case 21: ejercicio21(); break;
        case 22: ejercicio22(); break;
        case 23: ejercicio23(); break;
        case 24: ejercicio24(); break;
        case 25: ejercicio25(); break;
        case 26: ejercicio26(); break;
        default: cout<<endl<<"-Opcion Invalida-"<<endl<<endl; break;
        }
    }while(opc != 0);
}

void ejercicio_uno(){
    int resultado = 0;

    for(int i = 0; i < 11; i++){
        resultado = resultado + i;
    }

    cout<<endl<<"El resultado de la suma de los primeros 10 numeros es: "<<resultado<<endl<<endl;
}

void ejercicio_dos(){
    int n_numeros, suma = 0;

    cout<<endl<<"Ingresa un numero: "; cin>>n_numeros;

    for(int i = 1; i < (n_numeros+1); i++){
        suma = suma + i;
    }

    cout<<endl<<"La suma de los primeros "<<n_numeros<<" naturales es: "<<suma<<endl<<endl;
}

void ejercicio_tres(){
    int n_numeros, par = 2;

    cout<<endl<<"Ingrese un numero: "; cin>>n_numeros;
    cout<<endl<<endl;

    for(int i = 0; i < n_numeros; i++){
        cout<<par<<endl;
        par += 2;
    }
}

void ejercicio_cuatro(){
    int n_numeros, pares = 0, impares = 0;

    cout<<endl<<"Ingrese un numero: "; cin>>n_numeros;

    for(int i = 1; i < (n_numeros + 1); i++){
        if(i % 2 == 0){
            pares++;
        }else{
            impares++;
        }
    }

    cout<<endl<<"Entre 1 y "<<n_numeros<<" hay "<<pares<<" numeros pares y "<<impares<<" numeros impares."<<endl<<endl;
}

void ejercicio_cinco(){
    int n_numeros, suma;

    cout<<endl<<"Ingrese un numero: "; cin>>n_numeros;

    for(int i = 1; i < (n_numeros + 1); i++){
        suma = suma + i;
    }

    cout<<endl<<"La suma de los "<<n_numeros<<" primeros naturales es: "<<suma<<endl<<endl;
}

void ejercicio_seis(){
    int rango1, rango2;

    cout<<endl<<"Ingrese el primer numero: "; cin>>rango1;
    cout<<endl<<"Ingrese el segundo numero: "; cin>>rango2;

    cout<<endl;

    if(rango1 > rango2){
        cout<<"-Rango invalido-";
    }else{
        for(int i = rango1; i < (rango2 + 1); i++){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

void ejercicio_siete(){
    int rango1, rango2, suma = 0;

    cout<<endl<<"Ingrese el primer numero: "; cin>>rango1;
    cout<<endl<<"Ingrese el segundo numero: "; cin>>rango2;

    if(rango1 > rango2){
        cout<<endl<<"-Rango Invalido-"<<endl;
    }else{
        for(int i = rango1; i < (rango2 + 1); i++){
            suma = suma + i;
        }
        cout<<endl<<"La suma de los numeros comprendidos entre "<<rango1<<" y "<<rango2<<" es: "<<suma<<endl<<endl;
    }
}

void ejercicio_ocho(){
    int patron1 = 1, patron2 = 20;

    cout<<endl;

    for(int i = 1; i < 6; i++){
        cout<<patron1<<" "<<patron2<<" ";
        patron1 += 2;
        patron2 += 20;
    }

    cout<<endl;
}

void ejercicio_nueve(){
    int termino = 1, n_veces;

    cout<<endl<<"Ingrese un numero: "; cin>>n_veces;

    cout<<endl;

    for(int i = 1; i < (n_veces + 1); i++){
        cout<<termino<<" ";
        termino *= (-1);
    }

    cout<<endl;
}

void ejercicio10(){
    int n_estudiantes, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    char calificacion;

    cout<<endl<<"Ingrese la cantidad de estudiantes: "; cin>>n_estudiantes;



    for(int i = 1; i < (n_estudiantes + 1); i++){
        cout<<"Ingrese la calificacion (minuscula): "; cin>>calificacion;

        switch (calificacion){
            case 'a': a += 1; break;
            case 'b': b += 1; break;
            case 'c': c += 1; break;
            case 'd': d += 1; break;
            case 'e': e += 1; break;
            case 'f': f += 1; break;
            default: cout<<endl<<"- calificacion incorrecta -"<<endl<<endl; break;
        }
    }

    cout<<endl<<"A: "<<a<<endl<<"B: "<<b<<endl<<"C: "<<c<<endl<<"D: "<<d<<endl<<"E: "<<e<<endl<<"F: "<<f<<endl<<endl;
}

void ejercicio11(){
    int base, exponente, resultado = 1;

    cout<<endl<<"Ingrese la base: "; cin>>base;
    cout<<endl<<"Ingrese el exponente: "; cin>>exponente;

    for(int i = 1; i < (exponente + 1); i++){
        resultado = resultado * base;
    }

    cout<<endl<<"El resultado de "<<base<<" elevado a la "<<exponente<<" es: "<<resultado<<endl<<endl;
}

void ejercicio12(){
    int n_numeros, numero, pares = 0, impares = 0, positivos = 0, negativos = 0;
    float promedio, suma = 0;

    cout<<endl<<"Ingrese la cantidad de numeros a ingresar: "; cin>>n_numeros;

    for(int i = 1; i < (n_numeros + 1); i++){
        cout<<endl<<"Ingrese un numero: "; cin>>numero;

        suma = suma + numero;

        if(numero % 2 == 0){
            pares += 1;
        }else{
            impares += 1;
        }

        if(numero >= 0){
            positivos += 1;
        }else{
            negativos += 1;
        }
    }

    promedio = suma / n_numeros;

    cout<<endl<<"La suma de los numeros ingresados es: "<<suma<<endl<<"El promedio de los numeros ingresados es: "<<promedio<<endl<<"La cantidad de numeros pares ingresados es: "<<pares<<endl<<"La cantidad de numeros impares ingresados es: "<<impares<<endl<<"La cantidad de numeros positivos ingresados es: "<<positivos<<endl<<"La cantidad de numeros negativos es: "<<negativos<<endl<<endl;
}

void ejercicio13(){
    int lado;

    cout<<endl<<"Ingrese la longitud del lado del cuadrado: "; cin>>lado;

    if(lado <= 1 || lado > 50){
        cout<<endl<<"ERROR-> El lado no puede ser menor que 2 o mayor que 50"<<endl<<endl;
    }else{
        for(int i = 1; i < (lado + 1); i++){
                cout<<endl;
            for(int j = 1; j < (lado + 1); j++){
                cout<<"*"<<" ";
            }
        }
        cout<<endl;
    }
}

void ejercicio14(){
    int lado;

    cout<<endl<<"Ingrese la longitud del lado del cuadrado: "; cin>>lado;

    if(lado < 2 || lado > 50){
        cout<<endl<<"ERROR-> El lado no puede ser menor que 2 o mayor que 50"<<endl<<endl;
    }else{
        for(int i = 1; i < (lado + 1); i++){
                cout<<endl;
            if(i == 1 || i == lado){
                for(int j = 1; j < (lado + 1); j++){
                    cout<<"*"<<" ";
                }
            }else{
                cout<<"*"<<" ";
                for(int x = 1; x < (lado - 1); x++){
                    cout<<" "<<" ";
                }
                cout<<"*";
            }
        }
    }
}

void ejercicio15(){
    int numero, factorial = 1;

    cout<<endl<<"Ingrese el numero: "; cin>>numero;

    for(int i = 1; i < (numero + 1); i++){
            factorial = factorial * i;
    }

    cout<<endl<<"El factorial de "<<numero<<" es: "<<factorial<<endl<<endl;
}

void ejercicio16(){
    int rango1, rango2, cuadrado = 0;

    cout<<endl<<"Ingrese el primer numero: "; cin>>rango1;
    cout<<endl<<"Ingrese el segundo numero: "; cin>>rango2;

    cout<<endl;

    for(int i = rango1; i < (rango2 + 1); i++){
        cuadrado = i * i;
        cout<<cuadrado<<" ";
    }

    cout<<endl<<endl;
}

void ejercicio17(){
    int filas;

    cout<<endl<<"Ingrese el numero de filas: "; cin>>filas;

    cout<<endl;

    for(int i = 1; i < (filas + 1); i++){
        if(i % 2 != 0){
            for(int x = 1; x < (filas + 1); x++){
                cout<<"<"<<" "<<" ";
            }
            cout<<endl<<endl;
        }else{
            cout<<" ";
            for(int y = 1; y < (filas + 1); y++){
                cout<<" "<<" "<<">";
            }
            cout<<endl<<endl;
        }
    }
}

void ejercicio18(){
    int numero;

    cout<<endl<<"Ingrese un numero: "; cin>>numero;

    cout<<endl;

    for(int i = 1; i < (numero + 1); i++){
        cout<<"*";
    }
    cout<<endl;
}

void ejercicio19(){
    int numero;
    string asterisco = "*";

    cout<<endl<<"Ingrese un numero: "; cin>>numero;
    cout<<endl;

    for(int i = 1; i < (numero + 1); i++){
        for(int j = 1; j < (i + 1); j++){
            cout<<asterisco;
        }
        cout<<endl;
    }

    cout<<endl<<endl;
}

void ejercicio20(){
    int numero, divisores;

    cout<<endl<<"Ingrese un numero: "; cin>>numero;
    cout<<endl;

    if(numero <= 0){
        cout<<endl<<"ERROR -> Ingrese un numero mayor que 1"<<endl<<endl;
    }else{
        if(numero == 1){
            cout<<endl<<"El numero 1 no se considera ni primo, ni compuesto"<<endl<<endl;
        }else{
            for(int i = 1; i < (numero + 1); i++){
                if(numero % i == 0){
                    divisores += 1;
                }
            }
            if(divisores == 2){
                cout<<endl<<"El numero "<<numero<<" es un numero primo"<<endl<<endl;
            }else{
                cout<<endl<<"El numero "<<numero<<" es un numero compuesto"<<endl<<endl;
            }
        }
    }
}

void ejercicio21(){
    int n_numeros, numero;
    float media, suma = 0;

    cout<<endl<<"Digite la cantidad de numeros que va ingresar: "; cin>>n_numeros;

    for(int i = 1; i < (n_numeros + 1); i++){
        cout<<endl<<"Ingrese un numero: "; cin>>numero;

        suma = suma + numero;
    }

    media = suma / n_numeros;

    cout<<endl<<"La media aritmetica de los numeros ingresados es: "<<media<<endl<<endl;
}

void ejercicio22(){
    int resultado;

    cout<<endl;

    for(int i = 1; i < 13; i++){
        for(int j = 1; j < 11; j++){
            resultado = i * j;
            cout<<i<<" x "<<j<<" = "<<resultado<<endl;
        }
        cout<<endl<<endl;
    }
}

void ejercicio23(){
   int n_estudiantes, cero_a_dos = 0, dos_a_tres = 0, tres_a_cuatro = 0, cuatro_a_cinco = 0;
   float calificacion;

   cout<<endl<<"Ingrese la cantidad de estudiantes: "; cin>>n_estudiantes;

   for(int i = 1; i < (n_estudiantes + 1); i++){
        cout<<endl<<"Ingrese la calificacion: "; cin>>calificacion;

        if(calificacion < 0 || calificacion > 5){
            cout<<endl<<"ERROR -> calificacion incorrecta"<<endl;
            i -= 1;
        }else{
            if(calificacion >= 0 && calificacion < 2){
                cero_a_dos += 1;
            }else{
                if(calificacion >= 2 && calificacion < 3){
                    dos_a_tres += 1;
                }else{
                    if(calificacion >= 3 && calificacion < 4){
                        tres_a_cuatro += 1;
                    }else{
                        cuatro_a_cinco += 1;
                    }
                }
            }
        }
   }

   cout<<endl<<"Cantidad de estudiantes donde la calificacion esta entre 0.0 y 1.9: "<<cero_a_dos<<endl<<"Cantidad de estudiantes donde la calificacion esta entre 2.0 y 2.9: "<<dos_a_tres<<endl<<"Cantidad de estudiantes donde la calificacion esta entre 3.0 y 3.9: "<<tres_a_cuatro<<endl<<"Cantidad de estudiantes donde la calificacion esta entre 4.0 y 5.0: "<<cuatro_a_cinco<<endl<<endl;
}

void ejercicio24(){
    int numero, binario;

    cout<<endl<<"Ingrese un numero: "; cin>>numero;
    cout<<endl;

    if(numero < 0 || numero > 256){
        cout<<endl<<"ERROR -> Ingrese un numero entre 0 y 256"<<endl<<endl;
    }else{
        if(numero == 0){
            cout<<endl<<"0"<<endl;
        }else{
            for(int i = 1; i != (numero + 1); i){
                binario = numero % 2;
                numero = numero / 2;
                cout<<binario;
            }
            cout<<endl;
        }
    }
}

void ejercicio25(){
    int n_numeros, numero, primos = 0, divisores = 0, x1_30 = 0, x31_50 = 0, x51_100 = 0, pares_1_30 = 0, impares_1_30 = 0;
    float porcentaje_pares, porcentaje_impares, pares = 0, impares = 0;

    cout<<endl<<"Digite la cantidad de numeros a ingresar: "; cin>>n_numeros;

    for(int i = 1; i < (n_numeros + 1); i++){
        cout<<endl<<"Ingrese un numero: "; cin>>numero;

        if(numero % 2 == 0){
            pares += 1;
            if(numero >= 1 && numero <= 30){
                pares_1_30 += 1;
            }
        }else{
            impares += 1;
            if(numero >= 1 && numero <= 30){
                impares_1_30 += 1;
            }
        }

        for(int j = 1; j < (numero + 1); j++){
            if(numero % j == 0){
                divisores += 1;
            }
        }

        if(divisores == 2){
            primos += 1;
        }

        divisores = 0;

        if(numero >= 1 && numero <= 30){
            x1_30 += 1;
        }else{
            if(numero > 30 && numero <= 50){
                x31_50 += 1;
            }else{
                if(numero > 50 && numero <= 100){
                    x51_100 += 1;
                }
            }
        }
    }

    porcentaje_pares = (pares * 100) / n_numeros;
    porcentaje_impares = (impares * 100) / n_numeros;

    cout<<endl<<"De los numeros ingresados, "<<pares<<" numeros son pares  ";
    for(int i = 1; i < (pares + 1); i++){
        cout<<"*";
    }

    cout<<endl<<"De los numeros ingresados, "<<impares<<" numeros son impares  ";
    for(int i = 1; i < (impares + 1); i++){
        cout<<"*";
    }

    cout<<endl<<"De los numeros ingresados, "<<primos<<" numeros son primos  ";
    for(int i = 1; i < (primos + 1); i++){
        cout<<"*";
    }

    cout<<endl<<"De los numeros ingresados, "<<x1_30<<" numeros estan entre 1 y 30  ";
    for(int i = 1; i < (x1_30 + 1); i++){
        cout<<"*";
    }

    cout<<endl<<"De los numeros ingresados, "<<x31_50<<" numeros estan entre 31 y 50  ";
    for(int i = 1; i < (x31_50 + 1); i++){
        cout<<"*";
    }

    cout<<endl<<"De los numeros ingresados, "<<x51_100<<" numeros estan entre 51 y 100  ";
    for(int i = 1; i < (x51_100 + 1); i++){
        cout<<"*";
    }

    cout<<endl<<"De los numeros ingresados, "<<pares_1_30<<" numeros pares estan entre 1 y 30  ";
    for(int i = 1; i < (pares_1_30 + 1); i++){
        cout<<"*";
    }

    cout<<endl<<"De los numeros ingresados, "<<impares_1_30<<" numeros impares estan entre 1 y 30  ";
    for(int i = 1; i < (impares_1_30 + 1); i++){
        cout<<"*";
    }

    cout<<endl<<"De los numeros ingresados, el "<<porcentaje_pares<<"% de los numeros son pares  ";
    for(int i = 1; i < (porcentaje_pares + 1); i++){
        cout<<"*";
    }

    cout<<endl<<"De los numeros ingresados, el "<<porcentaje_impares<<"% de los numeros son impares  ";
    for(int i = 1; i < (porcentaje_impares + 1); i++){
        cout<<"*";
    }

    cout<<endl<<endl;
}

void ejercicio26(){
    int n_terminos, termino1 = 0, termino2 = 1, resultado = 0;

    cout<<endl<<"Ingrese la cantidad de terminos que desea visualizar: "; cin>>n_terminos;

    cout<<endl;

    for(int i = 1; i < (n_terminos + 1); i++){
        cout<<resultado<<" ";
        resultado = termino1 + termino2;
        termino1 = termino2;
        termino2 = resultado;
        resultado = termino1;
    }

    cout<<endl<<endl;
}

//Funcion principal

int main(){
    menu();
    return 0;
}
