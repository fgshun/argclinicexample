/*[clinic input]
preserve
[clinic start generated code]*/

PyDoc_STRVAR(spam_add__doc__,
"add($module, /, a, b)\n"
"--\n"
"\n"
"add a to b");

#define SPAM_ADD_METHODDEF    \
    {"add", (PyCFunction)(void(*)(void))spam_add, METH_FASTCALL|METH_KEYWORDS, spam_add__doc__},

static PyObject *
spam_add_impl(PyObject *module, PyObject *a, PyObject *b);

static PyObject *
spam_add(PyObject *module, PyObject *const *args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"a", "b", NULL};
    static _PyArg_Parser _parser = {NULL, _keywords, "add", 0};
    PyObject *argsbuf[2];
    PyObject *a;
    PyObject *b;

    args = _PyArg_UnpackKeywords(args, nargs, NULL, kwnames, &_parser, 2, 2, 0, argsbuf);
    if (!args) {
        goto exit;
    }
    a = args[0];
    b = args[1];
    return_value = spam_add_impl(module, a, b);

exit:
    return return_value;
}
/*[clinic end generated code: output=c7fbcf1866c352e1 input=a9049054013a1b77]*/
