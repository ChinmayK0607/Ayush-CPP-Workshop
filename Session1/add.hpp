

// to compile object file g++ -c add.cpp

// to compile main file create object file for main.cpp and do -o main main.o add.o
// g++ -c main.cpp






#ifndef ADD_HPP // if ADD_HPP is not defined then define it

#define ADD_HPP // define ADD_HPP 

// required for non duplication of headerfiles above are known as guard clauses



int doSum(int a, int b); // function prototype

#endif
