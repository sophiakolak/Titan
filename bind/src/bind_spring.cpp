#include <pybind11/pybind11.h>
#include <pybind11/iostream.h>

namespace py = pybind11;

#include "../include/pyspring.h"

void bind_spring(py::module &m){
    py::class_<pySpring>(m, "Spring")
            .def(py::init<>())
            .def(py::init<Spring *>())
            .def("setK", &pySpring::setK)
            .def("setRestLength", &pySpring::setRestLength)
            .def("defaultLength", &pySpring::defaultLength)
            .def("setLeft", &pySpring::setLeft)
            .def("setRight", &pySpring::setRight)
            .def("setMasses", &pySpring::setMasses)

//            .def_readwrite("pointer", &pySpring::pointer)
//            .def("setK", &pySpring::pysetK)
//            .def("defaultLength", &pySpring::pydefaultLength)
//            .def("setLeft", &pySpring::pysetLeft)
//            .def("setRight", &pySpring::pysetRight)
//            .def("setMasses", &pySpring::pysetMasses);
    ;
}