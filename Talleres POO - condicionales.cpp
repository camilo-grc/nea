/*El siguiente programa es la solución de los ejercicios propuestos de estructuras de decisión del segundo semestre de Ingeniería en Desarrollo de Software | asignatura de programación orientada a objetos*/

//Autor: Camilo García | 2264484-2724

//Versión: 1

//Fecha de ult actualizacion: 24/03/23

#include <iostream>
#include <cmath>
using namespace std;

//Declaracion de variables globales

//Declaracion de prototipo de funciones

void menu();

void primer_ejercicio();

void segundo_ejercicio();

void tercer_ejercicio();

void cuarto_ejercicio();

void quinto_ejercicio();

void sexto_ejercicio();

void septimo_ejercicio();

void octavo_ejercicio();

void noveno_ejercicio();

void decimo_ejercicio();

void ejercicio_once();

void ejercicio_doce();

void ejercicio_trece();

void ejercicio_catorce();

void ejercicio_quince();

void ejercicio_diesiseis();

//Implementacion de funciones

void menu(){
    int opc;
    do{
        cout<<"Lista de Ejercicios"<<endl<<"--------------------------"<<endl<<"0- Salir"<<endl<<"1- Aprueba, habilita o reprueba"<<endl<<"2- Calificacion 'A', 'B', 'C', 'D' o 'F'"<<endl<<"3- Par o Impar"<<endl<<"4- Mayor, menor o igual"<<endl<<"5- Triangulo equilatero, isosceles o escaleno"<<endl<<"6- Temporada climatica"<<endl<<"7- Valor absoluto"<<endl<<"8- Numeros de dias de un mes"<<endl<<"9- Año bisiesto"<<endl<<"10- Menu 2"<<endl<<"11- Calculadora basica"<<endl<<"12- IMC"<<endl<<"13- Ascendente y descendente"<<endl<<"14- Compra de articulo"<<endl<<"15- Pares o Impares"<<endl<<"16- Tipo de producto"<<endl;

        cout<<endl<<"Que ejercicio desea ejecutar?: ";
        cin>>opc;

        switch(opc){
            case 0: cout<<endl<<"Gracias por usar mi App!"<<endl<<endl; break;
            case 1: primer_ejercicio(); break;
            case 2: segundo_ejercicio(); break;
            case 3: tercer_ejercicio(); break;
            case 4: cuarto_ejercicio(); break;
            case 5: quinto_ejercicio(); break;
            case 6: sexto_ejercicio(); break;
            case 7: septimo_ejercicio(); break;
            case 8: octavo_ejercicio(); break;
            case 9: noveno_ejercicio(); break;
            case 10: decimo_ejercicio(); break;
            case 11: ejercicio_once(); break;
            case 12: ejercicio_doce(); break;
            case 13: ejercicio_trece(); break;
            case 14: ejercicio_catorce(); break;
            case 15: ejercicio_quince(); break;
            case 16: ejercicio_diesiseis(); break;
            default: cout<<endl<<"-- Opcion incorrecta --"<<endl<<endl;
        }
    }while(opc != 0);
}

void primer_ejercicio(){
    double calificacion;

    cout<<endl<<"Ingrese su calificacion: ";
    cin>>calificacion;

    if(calificacion>2.9){
        cout<<endl<<"Felicitaciones!"<<endl<<"El estudiante aprobo la asignatura"<<endl<<endl;
    }else{
        if(calificacion>=2.0){
            cout<<endl<<"El estudiante debe habilitar la asignatura"<<endl<<endl;
        }else{
            cout<<endl<<"El estudiante reprobo la asignatura"<<endl<<endl;
        }
    }
}

void segundo_ejercicio(){
    int calificacion;

    cout<<"Ingrese su calificacion: ";
    cin>>calificacion;

    if(calificacion>100 || calificacion<0){
        cout<<endl<<"La calificacion ingresada es incorrecta"<<endl<<endl;
    }else{
        if(calificacion<=100 && calificacion>=90){
        cout<<endl<<"Ha obtenido una 'A'"<<endl<<endl;
        }else{
            if(calificacion<=89 && calificacion>=80){
                cout<<endl<<"Ha obtenido una 'B'"<<endl<<endl;
            }else{
                if(calificacion<=79 && calificacion>=70){
                    cout<<endl<<"Ha obtenido una 'C'"<<endl<<endl;
                }else{
                    if(calificacion<=69 && calificacion>=60){
                        cout<<endl<<"Ha obtenido una 'D'"<<endl<<endl;
                    }else{
                        cout<<endl<<"Ha obtenido una 'F'"<<endl<<endl;
                    }
                }
            }
        }
    }
}

void tercer_ejercicio(){
    int numero;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    if(numero % 2 == 0){
        cout<<endl<<"El numero "<<numero<<" es un numero par"<<endl<<endl;
    }else{
        cout<<endl<<"El numero "<<numero<<" es un numero impar"<<endl<<endl;
    }
}

void cuarto_ejercicio(){
    int numero1, numero2;

    cout<<"Ingrese el primer numero: ";
    cin>>numero1;
    cout<<"Ingrese el segundo numero: ";
    cin>>numero2;

    if(numero1>numero2 && numero1!=numero2){
        cout<<endl<<"El numero "<<numero1<<" es mayor que el numero "<<numero2<<endl;
        cout<<endl<<"Los numeros son diferentes"<<endl<<endl;
    }else{
        if(numero1<numero2 && numero1!=numero2){
            cout<<endl<<"El numero "<<numero1<<" es menor que el numero "<<numero2<<endl;
        cout<<endl<<"Los numeros son diferentes"<<endl<<endl;
        }else{
            cout<<endl<<"El numero "<<numero1<<" es igual al numero "<<numero2<<endl<<endl;
        }
    }
}

void quinto_ejercicio(){
    double lado1, lado2, lado3;

    //Equilatero: a = b = c
    //Isosceles: a = b, != c
    //Escaleno: a != b != c

    cout<<"Ingrese la longitud del primer lado: ";
    cin>>lado1;
    cout<<"Ingrese la longitud del segundo lado: ";
    cin>>lado2;
    cout<<"Ingrese la longitud del tercer lado: ";
    cin>>lado3;

    if(lado1 == lado2){
        if(lado1 == lado3){
            cout<<endl<<"El triangulo es equilatero"<<endl<<endl;
        }else{
            cout<<endl<<"El triangulo es isosceles"<<endl<<endl;
        }
    }else{
        if(lado1 == lado3){
            cout<<endl<<"El triangulo es isosceles"<<endl<<endl;
        }else{
            if(lado3 == lado2){
                cout<<endl<<"El triangulo es isosceles"<<endl<<endl;
            }else{
                cout<<endl<<"El triangulo es escaleno"<<endl<<endl;
            }

        }
    }
}

void sexto_ejercicio(){
   string mes;

   cout<<endl<<"Ingrese un mes: "; cin>>mes;

   if(mes == "enero" || mes == "febrero"){
        cout<<endl<<"El mes "<<mes<<" esta en temporada de invierno"<<endl<<endl;
   }else{
        if(mes == "diciembre"){
            cout<<endl<<"El mes "<<mes<<" esta en temporada de invierno"<<endl<<endl;
        }else{
            if(mes == "marzo" || mes == "abril"){
                cout<<endl<<"El mes "<<mes<<" esta en temporada de primavera"<<endl<<endl;
            }else{
                if(mes == "mayo"){
                    cout<<endl<<"El mes "<<mes<<" esta en temporada de primavera"<<endl<<endl;
                }else{
                    if(mes == "junio" || mes == "julio"){
                        cout<<endl<<"El mes "<<mes<<" esta en temporada de verano"<<endl<<endl;
                    }else{
                        if(mes == "agosto"){
                            cout<<endl<<"El mes "<<mes<<" esta en temporada de verano"<<endl<<endl;
                        }else{
                            cout<<endl<<"El mes "<<mes<<" esta en temporada de otoño"<<endl<<endl;
                        }
                    }
                }
            }
        }
   }
}

void septimo_ejercicio(){
    double numero, valor_absoluto;
    cout<<endl<<"Ingrese un numero: "; cin>>numero;

    if(numero<0){
        valor_absoluto = numero*(-1);
    }else{
        if(numero == -0){
            valor_absoluto = numero*(-1);
        }else{
            valor_absoluto = numero;
        }
    }

    cout<<endl<<"El valor absoluto de "<<numero<<" es: "<<valor_absoluto<<endl<<endl;
}

void octavo_ejercicio(){
    int numero_de_dias;

    cout<<endl<<"Ingrese el numero de dias de un mes: "; cin>>numero_de_dias;

    if(numero_de_dias == 31){
        cout<<endl<<"Enero, Marzo, Mayo, Julio, Agosto, Octubre, Diciembre"<<endl<<endl;
    }else{
        if(numero_de_dias == 28){
            cout<<endl<<"Febrero"<<endl<<endl;
        }else{
            if(numero_de_dias == 30){
                cout<<endl<<"Abril, Junio, Septiembre, Noviembre"<<endl<<endl;
            }else{
                cout<<endl<<"Numero de dias incorrecto"<<endl<<endl;
            }
        }
    }
}

void noveno_ejercicio(){
    int anio;

    cout<<endl<<"Ingrese un año: "; cin>>anio;

    if(anio % 4 == 0){
        cout<<endl<<"El año "<<anio<<" es bisiesto."<<endl<<endl;
    }else{
        cout<<endl<<"El año "<<anio<<" no es bisiesto."<<endl<<endl;
    }
}

void decimo_ejercicio(){
    int opc;
    string nombre;

    do{
      cout<<endl<<"Menu"<<endl<<endl<<"0- Salir"<<endl<<"1- Saludo"<<endl<<"2- Despedida"<<endl<<"3- Gritar"<<endl<<"4- Esperar"<<endl<<"5- Aplauso"<<endl;

      cout<<endl<<"Elija una opcion: "; cin>>opc;

      switch(opc){
        case 0: cout<<endl<<"Gracias por usar la app :)!!!"<<endl<<endl; break;
        case 1: cout<<endl<<"Cual es tu nombre?: "; cin>>nombre; cout<<endl<<endl<<"Holaa "<<nombre<<"!!"<<endl<<endl; break;
        case 2: cout<<endl<<"Cual es tu nombre?: "; cin>>nombre; cout<<endl<<endl<<"Hasta luegoo "<<nombre<<"!!"<<endl<<endl; break;
        case 3: cout<<endl<<"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"<<endl<<endl; break;
        case 4: cout<<endl<<"..."<<endl<<endl; break;
        case 5: cout<<endl<<"Clap!"<<endl<<endl; break;
        default: cout<<endl<<"- Opcion invalida -"<<endl<<endl; break;
      }

    }while(opc != 0);
}

void ejercicio_once(){
    int numero1, numero2, resultado;
    char operacion;

    cout<<endl<<"--Calculadora--"<<endl<<endl;
    cout<<"1- Suma (s)"<<endl;
    cout<<"2- Resta (r)"<<endl;
    cout<<"3- Multiplicacion (m)"<<endl;
    cout<<"4- Division (d)"<<endl;

    cout<<endl<<"Ingrese el primer numero: "; cin>>numero1;
    cout<<endl<<"Ingrese la operacion que desea realizar: "; cin>>operacion;
    cout<<endl<<"Ingrese el segundo numero: "; cin>>numero2;

    if(operacion == 's'){
        resultado = numero1 + numero2;
    }else{
        if(operacion == 'r'){
            resultado = numero1 - numero2;
        }else{
            if(operacion == 'm'){
                resultado = numero1 * numero2;
            }else{
                if(operacion == 'd'){
                    resultado = numero1 / numero2;
                }else{
                    cout<<endl<<"-Opcion incorrecta-"<<endl<<endl;
                }
            }
        }
    }

    cout<<endl<<"El resultado de la operacion es: "<<resultado<<endl<<endl;
}

void ejercicio_doce(){
    double peso, altura, imc;

    cout<<endl<<"Ingrese su peso (kg): "; cin>>peso;
    cout<<endl<<"Ingrese su altura (m): "; cin>>altura;

    imc = peso / pow(altura,2);

    if(imc > 25){
        cout<<endl<<"Sobrepeso"<<endl;
        cout<<"IMC = "<<imc<<endl<<endl;
    }else{
        if(imc < 20){
            cout<<endl<<"Bajo de peso"<<endl;
            cout<<"IMC = "<<imc<<endl<<endl;
        }else{
            cout<<endl<<"Peso normal"<<endl;
            cout<<"IMC = "<<imc<<endl<<endl;
        }
    }
}

void ejercicio_trece(){
    int numero1, numero2, numero3, mayor = 0, intermedio = 0, menor = 0;

    cout<<endl<<"Ingresa el primer numero: "; cin>>numero1;
    cout<<endl<<"Ingresa el segundo numero: "; cin>>numero2;
    cout<<endl<<"Ingresa el tercer numero: "; cin>>numero3;

    if(numero1 == numero2){
        if(numero1 == numero3){
            mayor = numero1;
            intermedio = numero1;
            menor = numero1;
        }else{
            if(numero1 > numero3){
                mayor= numero1;
                intermedio = numero1;
                menor = numero3;
            }else{
                mayor = numero3;
                intermedio = numero1;
                menor = numero1;
            }
        }
    }else{
        if(numero1 > numero2){
            if(numero1 == numero3){
                mayor = numero1;
                intermedio = numero1;
                menor = numero2;
            }else{
                if(numero1 > numero3){
                    if(numero2 == numero3){
                        mayor = numero1;
                        intermedio = numero2;
                        menor = numero2;
                    }else{
                        if(numero2 > numero3){
                            mayor = numero1;
                            intermedio = numero2;
                            menor = numero3;
                        }else{
                            mayor = numero1;
                            intermedio = numero3;
                            menor = numero2;
                        }
                    }
                }else{
                    mayor = numero3;
                    intermedio = numero1;
                    menor = numero2;
                }
            }
        }else{
            if(numero2 == numero3){
                mayor = numero2;
                intermedio = numero2;
                menor = numero1;
            }else{
                if(numero2 > numero3){
                    if(numero1 == numero3){
                        mayor = numero2;
                        intermedio = numero1;
                        menor = numero1;
                    }else{
                        if(numero1 > numero3){
                            mayor = numero2;
                            intermedio = numero1;
                            menor = numero3;
                        }else{
                            mayor = numero2;
                            intermedio = numero3;
                            menor = numero1;
                        }
                    }
                }else{
                    mayor = numero3;
                    intermedio = numero2;
                    menor = numero1;
                }
            }
        }
    }

    cout<<endl<<"Forma ascendente: "<<menor<<" "<<intermedio<<" "<<mayor;
    cout<<endl<<"Forma descendente: "<<mayor<<" "<<intermedio<<" "<<menor<<endl<<endl;
}

void ejercicio_catorce(){
    double precio_inicial, precio_menos_desc, precio_final, subtotal, iva, descuento, desc_adicional, total, valor_aumentado_50;
    int cantidad;
    char tipo;
    string articulo;

    cout<<endl<<"-- Almacen Surtitodo --"<<endl<<endl;

    cout<<"Ingrese el articulo a comprar: "; cin>>articulo;
    cout<<endl<<"Ingrese el precio del articulo: "; cin>>precio_inicial;
    cout<<endl<<"Ingrese la cantidad que compra: "; cin>>cantidad;
    cout<<endl<<"Tipos de articulos: "<<endl<<"1) A"<<endl<<"2) B"<<endl<<"3) C"<<endl;
    cout<<endl<<"Ingrese el tipo de articulo (minuscula): "; cin>>tipo;

    valor_aumentado_50 = precio_inicial + (precio_inicial*0.5) * cantidad;

    subtotal = precio_inicial * cantidad;

    if(tipo == 'a'){
        descuento = valor_aumentado_50 * 0.1;
    }else{
        if(tipo == 'b'){
            descuento = valor_aumentado_50 * 0.2;
        }else{
            if(tipo == 'c'){
                descuento = valor_aumentado_50 * 0.3;
            }else{
                cout<<endl<<"Ingrese un tipo de articulo en minuscula."<<endl<<endl;
            }
        }
    }

    if(tipo == 'b'){
        if(cantidad < 5){
            desc_adicional = 0;
        }else{
            if(cantidad > 15){
                desc_adicional = valor_aumentado_50 * 0.02;
            }else{
                desc_adicional = valor_aumentado_50 * 0.05;
            }
        }
    }else{
        desc_adicional = 0;
    }

    precio_menos_desc = valor_aumentado_50 - descuento - desc_adicional;

    iva = precio_menos_desc * 0.16;

    precio_final = precio_menos_desc + iva;

    cout<<endl<<endl<<endl<<"-- Mercado Surtitodo --"<<endl<<endl;
    cout<<"Nombre del articulo: "<<articulo<<endl;
    cout<<"Tipo de articulo: "<<tipo<<endl;
    cout<<"Precio del articulo: "<<precio_inicial<<endl;
    cout<<"Cantidad de articulos: "<<cantidad<<endl;
    cout<<"Subtotal (precio x cantidad): "<<subtotal<<endl;
    cout<<"Descuento por tipo de articulo (descuento sobre el subtotal): "<<descuento<<endl;
    cout<<"Descuento adicional: "<<desc_adicional<<endl;
    cout<<"Iva aplicado (16%): "<<iva<<endl<<endl;
    cout<<"TOTAL: "<<precio_final<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<endl<<"Gracias por su compra!"<<endl<<endl<<endl<<endl;

}

void ejercicio_quince(){
    int numero1, numero2, numero3, pares = 0, impares = 0;

    cout<<endl<<"Ingrese el primer numero: "; cin>>numero1;
    cout<<endl<<"Ingrese el segundo numero: "; cin>>numero2;
    cout<<endl<<"Ingrese el tercer numero: "; cin>>numero3;

    if(numero1 % 2 == 0){
        pares += 1;
    }else{
        impares += 1;
    }

    if(numero2 % 2 == 0){
        pares += 1;
    }else{
        impares += 1;
    }

    if(numero3 % 2 == 0){
        pares += 1;
    }else{
        impares += 1;
    }

    if(pares == 3){
        cout<<endl<<numero1<<" "<<numero2<<" "<<numero3<<" "<<"Todos son pares"<<endl<<endl;
    }else{
        if(pares == 2){
            cout<<endl<<numero1<<" "<<numero2<<" "<<numero3<<" "<<"Casi todos son pares"<<endl<<endl;
        }else{
            if(impares == 2){
                cout<<endl<<numero1<<" "<<numero2<<" "<<numero3<<" "<<"Casi todos son impares"<<endl<<endl;
            }else{
                cout<<endl<<numero1<<" "<<numero2<<" "<<numero3<<" "<<"Todos son impares"<<endl<<endl;
            }
        }
    }
}

void ejercicio_diesiseis(){
    char clasificacion;

    cout<<endl<<"-Clasificacion-"<<endl<<endl<<"- F"<<endl<<"- V"<<endl<<"- L"<<endl<<"- B"<<endl<<"- D"<<endl<<"- C"<<endl<<"- N"<<endl<<"- P"<<endl<<"- M"<<endl<<"- E"<<endl<<"- H"<<endl<<"- J"<<endl<<endl;


    cout<<endl<<"Ingrese la clasificacion del producto (minuscula): "; cin>>clasificacion;

    switch(clasificacion){
        case 'f': cout<<endl<<"Tipo de producto: Fruta"<<endl; cout<<"Tiene un 20% de descuento todos los martes"<<endl<<endl; break;
        case 'v': cout<<endl<<"Tipo de producto: Verduras"<<endl; cout<<"Tiene un 20% de descuento todos los martes"<<endl<<endl; break;
        case 'l': cout<<endl<<"Tipo de producto: Lacteos"<<endl<<endl; break;
        case 'b': cout<<endl<<"Tipo de producto: Bebes"<<endl<<endl; break;
        case 'd': cout<<endl<<"Tipo de producto: Damas"<<endl<<endl; break;
        case 'c': cout<<endl<<"Tipo de producto: Caballeros"<<endl<<endl; break;
        case 'n': cout<<endl<<"Tipo de producto: Ninios"<<endl<<endl; break;
        case 'p': cout<<endl<<"Tipo de producto: Perfumeria"<<endl<<endl; break;
        case 'm': cout<<endl<<"Tipo de producto: Medicamento farmaceutico"<<endl<<endl; break;
        case 'e': cout<<endl<<"Tipo de producto: Electronicos"<<endl; cout<<"Tiene un 15% de descuento todos los fines de semana"<<endl<<endl; break;
        case 'h': cout<<endl<<"Tipo de producto: Hogar"<<endl; cout<<"Tiene un 25% de descuento en temporada navideña y si el cliente es afiliado"<<endl<<endl; break;
        case 'j': cout<<endl<<"Tipo de producto: Jugueteria"<<endl; cout<<"Tiene un 25% de descuento en temporada navideña y si el cliente es afiliado"<<endl; break;
        default: cout<<endl<<"Producto invalido"<<endl; break;
    }
}

//Funcion principal

int main(){
    menu();
    return 0;
}
