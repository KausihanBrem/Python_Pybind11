#include <pybind11/pybind11.h>
#include <stdio.h>

void Say_hello ()
{
    printf ("Hello World\n");
}

int Add(int i, int j) {
    return i + j;
}

int Subtract(int i, int j) {
    return i - j;
}

int Multiply(int i, int j) {
    return i * j;
}

int Divide(int i, int j) {
    return i / j;
}

PYBIND11_MODULE (pybind11module_1, module)
{
    module.doc () = "Pybind11Module_1";
    module.def ("Say_hello", &Say_hello);
    module.def("Add", &Add, "A function which adds two numbers");
	module.def("Subtract", &Subtract, "A function which Subtracts two numbers");
	module.def("Multiply", &Multiply, "A function which Multiplies two numbers");
	module.def("Divide", &Divide, "A function which Divides two numbers");
}
