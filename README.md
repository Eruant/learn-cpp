# learn-cpp

Teaching myself c++ from [learncpp.com](http://www.learncpp.com/)

Compile with `g++` followed by the files to include `main.cpp` and an output file `-o myApp`. You can also specify a directory of includes `-I /src/includes`

```shell
g++ main.cpp another.css -o myApp
```

Compile with `g++ -o <program> <source>`

To compile for `c++11` use `-std=c++11` e.g. `g++ -std=c++11 main.cpp -o myApp`

## Alias

```shell
g++='g++ -std=c++11'
```

## For VIM

```vim
let g:syntastic_cpp_compiler = 'g++'
let g:syntastic_cpp_compiler_options = ' -std=c++11'
```
