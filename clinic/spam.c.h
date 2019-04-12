/*[clinic input]
preserve
[clinic start generated code]*/

PyDoc_STRVAR(spam_add__doc__,
"add($module, /, a, b)\n"
"--\n"
"\n"
"add a to b");

#define SPAM_ADD_METHODDEF    \
    {"add", (PyCFunction)spam_add, METH_VARARGS|METH_KEYWORDS, spam_add__doc__},

static PyObject *
spam_add_impl(PyObject *module, PyObject *a, PyObject *b);

static PyObject *
spam_add(PyObject *module, PyObject *args, PyObject *kwargs)
{
    PyObject *return_value = NULL;
    static char *_keywords[] = {"a", "b", NULL};
    PyObject *a;
    PyObject *b;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "OO:add", _keywords,
        &a, &b))
        goto exit;
    return_value = spam_add_impl(module, a, b);

exit:
    return return_value;
}
/*[clinic end generated code: output=ff7643631dc649f0 input=a9049054013a1b77]*/
