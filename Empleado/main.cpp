#include <iostream>

using namespace std;

class Cuenta{

float saldo;
//constructor de la clase cuenta
public:
    Cuenta(float saldoInicial){
        //instruccion de seleccion para validar el saldo inicial de que sea >=0
        if (saldoInicial>=0)
        {
            saldo=saldoInicial;//inicializa el dato miembro
        }else
        {
            saldo=0;
            cout <<"Este saldo inicial es invalido."<<endl;
        }
    }
    //funciones miembros:
    //funcion abonar
    void abonar (float monto)
    {
        saldo = saldo +monto;
    }
    //funcion cargar

    void cargar (float monto)
    {
        if (monto <=saldo)
        {
            saldo = saldo - monto;
        }else{
            cout<<"El monto a cargar excede el saldo de la cuenta."<<endl;
        }
    }
    //funcion obtenerSaldo:
    float obtenerSaldo()
    {
       return saldo;
    }
};

//progama principal.
int main()
{
    //creacion de dos objetos cuenta
    Cuenta cuenta1(100.50);//cuenta1 con saldo inicial de Q100.50
    Cuenta cuenta2(15.75);//cuenta2 con saldo inicial de 15.75

    //evaluando si si sirven la funcion de obtenerSaldo
    cout<<"Saldo inicial de cuenta1: Q"<<cuenta1.obtenerSaldo()<<endl;
    cout<<"Saldo inicial de cuenta2: Q"<<cuenta2.obtenerSaldo()<<endl;

    //evaluando las funciones de abono y carga
    cuenta1.abonar(100.50);
    cuenta2.cargar(15);

    cout<<"Saldo de cuenta1 al abonar: Q100.5. Su nuevo saldo es: "<<cuenta1.obtenerSaldo()<<endl;
    cout<<"Saldo de cuenta2 al cargar Q15. Su nuevo saldo es: "<<cuenta2.obtenerSaldo()<<endl;


    return 0;
}
