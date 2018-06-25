#About C++
##.h Files
The **.h** files only have implementations of classes and functions (or functions that belong to some classes, usually called methods). They must be included from files with **.cpp** extension, *that are actually the files that must be compiled*.

##Compiling a .cpp file
To compile a *.cpp* file, you must have installed a c++ compilator, **like g++**. Once installed, in a terminal located where is the file, write

```bash
g++ file_name.cpp -o compilated_filename.o
```
This command will generate a new file called *compilated_filename.o* in the same location. To execute it, write in the terminal
```bash
./compilated_filename.o
```
If you don't have idea about programming in C++, please read these [tutorials](https://www.tutorialspoint.com/cplusplus/index.htm). After that you can try to understand the files here. Good luck!