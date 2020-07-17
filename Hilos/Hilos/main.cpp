#include <iostream>
#include <thread>//Libreria de hilos.

using namespace std;

void func(int n, double m){
    cout << n << " " << m << endl;
}
//El hilo ejecutara la función. Cuando termine la función, el hilo terminará.
int main(){
    thread th(func, 1, 5.7);//El constructor del hilo recibe como primer argumento, la función a ejecutar.
                            //Los parametros de la función se llaman en el mismo constructor.
    if(th.joinable()) {     //Este metodo nos permite utilizar el join en el hilo.
        th.join();          //Este metodo espera hasta que el hilo termine.
    }                       //El hilo desaparece luego de terminar su ejecución.
}
