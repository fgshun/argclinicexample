/*[clinic input]
preserve
[clinic start generated code]*/

PyDoc_STRVAR(spam_add__doc__,
"add($module, /, a, b)\n"
"--\n"
"\n"
"add a to b");

#define SPAM_ADD_METHODDEF    \
    {"add", (PyCFunction)spam_add, METH_FASTCALL|METH_KEYWORDS, spam_add__doc__},

static PyObject *
spam_add_impl(PyObject *module, PyObject *a, PyObject *b);

static PyObject *
spam_add(PyObject *module, PyObject *const *args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"a", "b", NULL};
    static _PyArg_Parser _parser = {"OO:add", _keywords, 0};
    PyObject *a;
    PyObject *b;

    if (!_PyArg_ParseStackAndKeywords(args, nargs, kwnames, &_parser,
        &a, &b)) {
        goto exit;
    }
    return_value = spam_add_impl(module, a, b);

exit:
    return return_value;
}
/*[clinic end generated code: output=b33220affa0a7eed input=a9049054013a1b77]*/
