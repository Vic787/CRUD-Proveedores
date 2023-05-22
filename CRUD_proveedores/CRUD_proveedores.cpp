// CRUD_proveedores.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Cliente.h"
using namespace std;

int main()
{
    int idProveedor;
    string proveedor, nit, direccion, telefono;
    cout << "Ingrese ID del proveedor: ";
    cin >> idProveedor;
    cin.ignore(); // Para limpiar el buffer de entrada
    cout << "Ingrese nombre del proveedor: ";
    getline(cin, proveedor);
    cout << "Ingrese NIT: ";
    getline(cin, nit);
    cout << "Ingrese dirección: ";
    getline(cin, direccion);
    cout << "Ingrese teléfono: ";
    getline(cin, telefono);

    Proveedor p = Proveedor(idProveedor, proveedor, nit, direccion, telefono);

    p.crear();
    p.leer();

    int idActualizado;
    cout << "Ingrese el ID del proveedor a actualizar: ";
    cin >> idActualizado;
    cin.ignore(); // Para limpiar el buffer de entrada
    cout << "Ingrese nuevo nombre del proveedor: ";
    getline(cin, proveedor);
    cout << "Ingrese nuevo NIT: ";
    getline(cin, nit);
    cout << "Ingrese nueva dirección: ";
    getline(cin, direccion);
    cout << "Ingrese nuevo teléfono: ";
    getline(cin, telefono);

    p.setProveedor(proveedor);
    p.setNit(nit);
    p.setDireccion(direccion);
    p.setTelefono(telefono);

    p.actualizar(idActualizado);
    p.leer();

    int idEliminado;
    cout << "Ingrese el ID del proveedor a eliminar: ";
    cin >> idEliminado;

    p.eliminar(idEliminado);
    p.leer();

    system("Pause");
    return 0;
}
