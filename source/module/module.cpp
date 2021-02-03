#include <pybind11/pybind11.h>
#include <stdio.h>

void say_hello ()
{
    printf ("Hello World\n");
}

int add(int i, int j) {
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

struct MyData
{
    float x, y;

    MyData () : x (0), y (0)
    {
    }

    MyData (float x, float y) : x (x), y (y)
    {
    }

    void print ()
    {
        printf ("%f, %f\n", x, y);
    }
};

PYBIND11_MODULE (pybind11module, module)
{
    module.doc () = "Pybind11Module";
    module.def ("say_hello", &say_hello);
    module.def("Add", &add, "A function which adds two numbers");
    module.def("Subtract", &Subtract, "A function which Subtracts two numbers");
	module.def("Multiply", &Multiply, "A function which Multiplies two numbers");
	module.def("Divide", &Divide, "A function which Divides two numbers");

    pybind11::class_<MyData> (module, "MyData")
        .def (pybind11::init<> ())
        .def (pybind11::init<float, float> (), "constructor 2", pybind11::arg ("x"), pybind11::arg ("y"))
        .def ("print", &MyData::print)
        .def_readwrite ("x", &MyData::x)
        .def_readwrite ("y", &MyData::y)
    ;
}
