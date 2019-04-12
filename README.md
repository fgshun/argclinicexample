# 技術書典6 KLab tech book vol.3 Argument Clinic を使ってみよう

Argument Clinic を使って C 言語で書いた CPython モジュールです。次のコードと同じように動きます。

```
def add(a, b):
    """add a to b"""
    return a + b
```


## build and test
```
$ python3 setup.py develop
$ py.test
```

Python 3.8 用となっていますのでその他のバージョンでビルドするためには
該当する [cpython](https://github.com/python/cpython.git) を git clone するなどして該当するバージョンの clinic.py を用意して実行、
そして setup.cfg の python requires をあわせてください。

```
$ python3 cpython/Tools/clinic/clinic.py spam.c
```
