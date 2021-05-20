# sparse
A PA193 project  
Spring 2021

## Features and requirements
Project uses `CMake 3.16.3`, project also has C++20 enabled,
therefore, somewhat new C++ compiler is needed.

## 3rd party libraries
For manipulating json objects, we use [nlohmann](https://github.com/nlohmann/json).  
We use both [CTRE](https://github.com/hanickadot/compile-time-regular-expressions)
and standard regex in parser implementation. For unit tests, we rely on
[Catch2](https://github.com/catchorg/Catch2).

## Building the project

* Clone the repository
```
git clone git@github.com:misoxxx/sparse.git
cd sparse
```
* Create your build directory
```
mkdir build && cd build
```

* Configure `cmake` and build the project
```
cmake ..
cmake --build . --config Release
```
If you wish to use specific compiler, you can set `CMAKE_CXX_COMPILER` variable, e.g.:
```
cmake -DCMAKE_CXX_COMPILER=g++-10 ..
```

* Running unit tests
```
ctest
```

* Running the parser and displaying its options
```
./modules/parser/parser --help
```


# Ondra

```sh
git submodule update --init

./build/modules/parser/parser dataset_dirty/dataset/1126a_pdf.txt
# valgrind ./build/modules/parser/parser dataset_dirty/dataset/1126a_pdf.txt
python3 scorer_wrapper.py
```
