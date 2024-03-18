#include <iostream>

using namespace std;

class Empleado{
//datos miembro
//un primer nombre (tipo string), un apellido paterno (tipo string) y un salario mensual (tipo int).
private:
    string primerNombre;
    string apellidoPaterno;
    int salarioMensual;
//constructor con inicialaizacion de los datos miembros
public:
    Empleado(string nombre, string apellido, int salarioM)
    {
        primerNombre= nombre;
        apellidoPaterno=apellido;
        salarioMensual=salarioM;
    }
    //funcion para establecer nombre del empleado
    void establecerNombre (string nombre)
    {
        primerNombre= nombre;
    }
    //funcion obtener nombre del empleado
    string obtenerNombre () const
    {
        return primerNombre;
    }
    //funcion para establecer Apellido del empleado
    void establecerApellido (string apellido)
    {
        apellidoPaterno= apellido;
    }
    //funcion obtener Apellido del empleado
    string obtenerApellido () const
    {
        return apellidoPaterno;
    }
    //funcion para establecer salari del empleado
    void establecersalario (int salario)
    {
        if(salario<=0)
        {
            salarioMensual= salario;
        }else
        {
            salarioMensual = 0;
            cout<<"Ingreso de salario negativo invalido, su salario sera 0"<<endl;
        }
    }
    //funcion obtener Salario del empleado
    int obtenerSalario () const
    {
        return salarioMensual;
    }


    //funcion para el salario anual
    int calculoSalarioAnual()
    {
        return salarioMensual;
    }
    //funcion para el aumento del 10%
    void aumento()
    {
        salarioMensual=salarioMensual*1.1;
    }
};




int main()
{
    //creando 2 objetos empleados

    Empleado empleado1 ("Julian","Baul",100);
    Empleado empleado2 ("Juana","De Arco",200);

    //mostrando datos del empleado 1 con su total de sueldo anual
    cout <<"El Salario anual de " <<empleado1.obtenerNombre()<<" " <<empleado1.obtenerApellido()<<" es de: Q"<< empleado1.calculoSalarioAnual()<<endl;
    //mostrando datos del empleado 2 con su total de sueldo anual
    cout <<"El Salario anual de " <<empleado2.obtenerNombre()<<" " <<empleado2.obtenerApellido()<<" es de: Q"<< empleado2.calculoSalarioAnual()<<endl;


    //dando un aumento del 10%

    empleado1.aumento();
    empleado2.aumento();

    //mostrando salario anual actual

    //mostrando datos del empleado 1 con su total de sueldo anual
    cout <<"El Salario anual de " <<empleado1.obtenerNombre()<<" " <<empleado1.obtenerApellido()<<" es de: Q"<< empleado1.calculoSalarioAnual()<<endl;
    //mostrando datos del empleado 2 con su total de sueldo anual
    cout <<"El Salario anual de " <<empleado2.obtenerNombre()<<" " <<empleado2.obtenerApellido()<<" es de: Q"<< empleado2.calculoSalarioAnual()<<endl;



    return 0;

}
