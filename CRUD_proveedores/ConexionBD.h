#pragma once
#include <iostream>
#include <mysql.h>

class ConexionBD{
private: MYSQL* conectar;
public: 
	void abrir_conexion() {
		conectar = mysql_init(0);
		conectar = mysql_real_connect(conectar, "localhost", "root", "Umg$2023", "db_puntoventa", 3306, NULL, 0);
	}
	MYSQL* getConectar() {
		return conectar;
	}
	void cerrar_conexion() {
		mysql_close(conectar);
	}
};

