#include <iostream>
using namespace std;

/// CALCULADORA IMC ///
/// declaramos las variables -> altura, peso, imc
/// el usuario inicia las variables altura y peso  ->  guardo los dos datos
/// resuelvo el problema del IMC
/// muestro por pantalla el resultado

int main(){

    double alturaUsuario, pesoUsuario, resultadoImc;

    cout << "Ingrese su altura: "; cin >> alturaUsuario;
    cout << "Ingrese su peso: "; cin>> pesoUsuario;

    resultadoImc = pesoUsuario / (alturaUsuario*alturaUsuario);

    if(resultadoImc < 18.5){
        cout << "Su IMC es de " << resultadoImc << ". Usted tiene bajo peso";

    } else if (resultadoImc >= 18.5 && resultadoImc < 24.9){
        cout << "Su IMC es de " << resultadoImc << ". Usted tiene un peso normal";

    } else if (resultadoImc > 25 && resultadoImc < 30){
        cout << "Su IMC es de " << resultadoImc << ". Usted tiene sobrepeso";

    } else {
        cout << "Usted esta muy gordito/a";
    }

    return 0;
}
