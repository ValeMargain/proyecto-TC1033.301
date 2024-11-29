Proyecto desarrollado en C++ EasyBuy EasyBuy es un proyecto está diseñado para demostrar la implementación de un sistema de gestión de compras utilizando programación orientada a objetos (POO) en C++. El sistema está basado en un entorno de ventas en el que un cliente puede realizar una compra de productos. Para gestionar esta operación, se utilizan cinco clases principales:

* Cliente: Almacena información del cliente como su nombre, apellidos, fecha de nacimiento, teléfono y correo electrónico.
* Producto: Representa un producto en venta, con detalles como el nombre, descripción, cantidad disponible, fecha de creación, categoría y costo.
* Compra: Registra una compra realizada por un cliente, incluyendo la cantidad del producto comprado, la fecha y el precio total.
* Producto Alimenticio: Obtiene los atributos de la clase producto más fechaCaducidad).
* Producto electrónico: Obtiene los atributos de la clase producto más garantía).

Funcionalidad: el programa permite al usuario realizar las siguientes acciones. 
1. Crear producto electrónico: Le solicita al usuario datos como el nombre, descripción, cantidad disponible, fecha de creación, categoría, costo y garantia. 
2. Crear producto alimenticio:  Le solicita al usuario datos como el nombre, descripción, cantidad disponible, fecha de creación, categoría, costo y fecha de caducidad.
3. Mostrar productos electrónicos: Muestra el producto o los productos electrónicos que hayamos registrado
4. Mostrar productos alimenticios: Muestra el producto o los productos alimenticios que hayamos registrado
5. Ingresar cliente: Le pide al usuario ingresar datos como nombre, apellidos, fecha de nacimiento, teléfono y correo electrónico.
6. Comprar: Pide nuevamente registrar un cliente, el cual ira ligado mediante la compra a los productos que se hayan registrado. Ademas, al finalizar muestra la orden de compra. 
0. Salir: Finaliza la ejecución del programa

Consideraciones El programa está diseñado para correr en cualquier sistema operativo que soporte C++ estándar.
Tutorial para compilar el programa en windows: TylerMSFT. (2023, 12 octubre). Tutorial: Compilar un programa nativo de C++ en la línea de comandos. Microsoft Learn. https://learn.microsoft.com/es-es/cpp/build/walkthrough-compiling-a-native-cpp-program-on-the-command-line?view=msvc-170 

Correciones:
 Corregí mi diagrama de clases y a la vez la clase Compra la cual pesenta una relación de agregación por parte de las clases producto electronico, producto alimenticio y cliente. Es llamada desde la opción 6 del menú (se encuentra en el main). La subcompetencia a evaluar es la Toma de decisiones SICT0302A
1. Modelo un diagrama de clase útil para solucionar un problema utilizando UML.
2. Utilizo el concepto de herencia en el diagrama de clases de manera adecuada.
(Se revisa en el UML)

Ademas, cite en mi README un enlace que describe perfetamente como ejecutar c++ en Windos. Describi y adapte las opciones de mi menu. Esta modificacion corresponde a la subcompetencia: 
1. Cumplo con estándares en mi repositorio: tiene un readme claro que explica el proyecto (para que sirve, para que no sirve y como se usa), no tiene archivos basura o versiones pasadas.
Avance 1


