#include <bits/stdc++.h> 
#include <iostream>
// using namespace std; 
#include "add.hpp"  // " " is used to include files from current directory and <> is used to include files from system directory

using namespace std;


// custom math numspace woth domultiply function

namespace Math{
    int doMultiply(int a, int b){
        return a*b;
    }
}

//       param 1 , param 2  here it is being passed by value so that a copy of the variable is created 
int doSum(int a, int b){
    return a+b;
} // forward declaration of function
//      param 1 , param 2  here it is being passed by reference so that a copy of the variable is not created
int doSumReference(int &a, int &b){
    a = a * 2; 
    b = b * 2; 
    return a+b;
} // forward declaration of function

// pass by pointer example 
int doSumPointer(int *a, int *b){
    *a = *a * 2; 
    *b = *b * 2; 
    return *a + *b;
}



//const qualifier example 
/*
int doSumConst(const int a, const int b){
    a = a * 2; 
    b = b * 2; // throws error as a and b are constant
    return a+b;

}
*/// const ensures variable is not modified best practice if you want to avoid variable tampering 

// doSum with static conditional assinment to a 
int doSum(int b){
   static int a ; 
    if(b > 5){
         a = 5;
        return a+b;
    }
    return a+b;
} // lifetime of static is the runtime of the program



// Switch case function 
int doSwitch(int a){
    switch(a){
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        default:
            return 0;
    }
}

// example of template that adds any kindof data type
template <typename T> T add(T a, T b){
    return a+b;
}// template is a generic function that can work with any data type
int main(){
    int a = 4;
    int b = 5;

    //  auto can also be used to auto detect type of variable 

    // int -> 4byte

    std::cout << "Sum of a and b is " << doSum(a,b) << std::endl;
    std::cout << "Sum of a and b is " << doSumReference(a,b) << std::endl;
    std::cout << "Value of a and b is " << a << " " << b << std::endl;

    // pass by pointer example
    std::cout << "Sum of a and b is " << doSumPointer(&a,&b) << std::endl;
    std::cout << "Value of a and b is " << a << " " << b << std::endl;
    // address by pointer example 
    std::cout << "Address of a is " << &a << std::endl;
    // best practice is to use pass by reference wherever possible for compiler optimisations 



    {
        int c = 10;
        // example of scope access  

        std::cout << "Value of c is " << c << std::endl;
    }
    // std::cout << "Value of c is " << c << std::endl; // throws error as c is out of scope
    

    //  string concatenation example 
    std::string str1 = "Hello";
    std::string str2 = "World";
    std::string str3 = str1 + " " + str2;
    std::cout << "Concatenated string is " << str3 << std::endl;

 // do multiply function from custom namespace
    std::cout << "Multiplication of a and b is " << Math::doMultiply(a,b) << std::endl;

    // const qualifier example 
    // std::cout << "Sum of a and b is " << doSumConst(a,b) << std::endl;
    // return 0;


    // operator examples ++ , += etc non commented with different variable names

    // int a = 5;
    // int b = 6;
    // a++;
    // b+=2;
    // std::cout << "Value of a and b is " << a << " " << b << std::endl;


    // examples of * and / 

    int x = 6;
    int y = 5;
    std::cout << "Value of x and y is " << x << " " << y << std::endl;
    std::cout << "Value of x*y is " << x*y << std::endl;
    std::cout << "Value of x/y is " << x/y << std::endl; // unlike python it is not converted to float by default 
    // convert to float by multiplication by 1.0 
    std:cout << "Value of x/y : float is " << x * 1.0 / y << endl;

    // example of static cast to float
    std::cout << "Value of x/y : float is " << static_cast<float>(x) / y << endl;


    // example of ternary conditionaly operator 
    int z = 5;
    int w = 6;
    int result = z > w ? z : w;
    std::cout << "Value of result is " << result << std::endl;

    // ecample of && and || operators

    bool condition1 = true;     
    bool condition2 = false;
    std::cout << "Value of condition1 && condition2 is " << (condition1 && condition2) << std::endl;
    std::cout << "Value of condition1 || condition2 is " << (condition1 || condition2) << std::endl;

    // switch example with doSwitch function
    cout << "Swith case example " << doSwitch(a) << endl;

    // example of for loop 
    for(int i = 0; i < 5; i++){
        cout << "Value of i is " << i << endl;
    }

    // example of while loop 
    int j = 0;  
    while(j < 5){
        cout << "Value of j is " << j << endl;
        j++;
    }


    // example of usage of template 
    cout << "Value of template add is " << add(5,6) << endl;
    cout << "Value of template add is " << add(5.5,6.6) << endl;
    cout << "Value of template add is " << add('a','b') << endl;


    // example of sizeof with integers and pointers

    cout << "Size of int is " << sizeof(int) << endl;
    cout << "Size of int pointer is " << sizeof(int*) << endl;
    cout << "Size of char is " << sizeof(char) << endl;
    cout << "Size of char pointer is " << sizeof(char*) << endl;
    cout << "Size of float is " << sizeof(float) << endl;
    cout << "Size of float pointer is " << sizeof(float*) << endl;
    cout << "Size of double is " << sizeof(double) << endl;
    // sizeof nullptr

    cout << "Size of nullptr is " << sizeof(nullptr) << endl;

    // example of constptrs

    const int* ptr = &a;
    //*ptr = 5; // throws error as ptr is a const pointer
    cout << "Value of ptr is " << *ptr << endl;
    

}

