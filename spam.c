#include <Python.h>

#include "clinic/spam.c.h"


/*[clinic input]
module spam
[clinic start generated code]*/
/*[clinic end generated code: output=da39a3ee5e6b4b0d input=fb02dbff56054488]*/


/*[clinic input]
spam.add
   a: object
   b: object

add a to b
[clinic start generated code]*/

static PyObject *
spam_add_impl(PyObject *module, PyObject *a, PyObject *b)
/*[clinic end generated code: output=841f3d07aa0b7744 input=0a46d9af8722d153]*/
{
    return PyNumber_Add(a, b);
}


static PyMethodDef spam_methods[] = {
    SPAM_ADD_METHODDEF
    {NULL, NULL, 0, NULL}
};


static int spam_exec(PyObject *module) {
    return 0;
}


static PyModuleDef_Slot spam_slots[] = {
    {Py_mod_exec, spam_exec},
    {0, NULL}
};


static struct PyModuleDef spam_moduledef = {
    PyModuleDef_HEAD_INIT,
    .m_name = "spam",
    .m_methods = spam_methods,
    .m_slots = spam_slots,
};


PyMODINIT_FUNC PyInit_spam(void) {
    return PyModuleDef_Init(&spam_moduledef);
}
