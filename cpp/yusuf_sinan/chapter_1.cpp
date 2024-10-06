//----------------------------------------//

/* some terminology

-> operator overloading

->storngly typed language

->arithmatic precision

->memcpy()

->#include<string>


*/

//----------------------------------------//

/*  compilation help(command line)

->compiler swithes/flag( -o
                         -S
                         -c
                         -E
                         -g
                         -std  )


->g++ help

->wc -l name.cpp

->ll

->cat name.cpp

->vi name.cpp

->g++ help (compiler manual)

->g++ -DNUM = .. name.cpp (do the define in the console)

->man bash (bash documentation)


*/

//----------------------------------------//

/*  (new c++ stuffs)

->alternative way to initialize in declaration
        ex: type variable_name(value);


->New types : 1.bool (true/false)
              2.auto (deduces the type of the variable based on the expression on the right side  of the assignment operator)
              3.decltype (determines the type of the expression)

-> Literal data:


-> raw string literals:

-> two types of constants : 1. literal constants
                            2. named/declared  constants

-> arithmatic presision : 17/5 == 3 in c+++
                          17.0/5 == 3.4 in c++

->individual arithmatic presicion : 1/2/3.0/4.0
                                    ->first  : 1/2 == 0;
                                    ->second :0/3.0 == 0.0;
                                    ->lastly :0/4.0 == 0.0;

->Type casting (explicit casting) : static_cast<>(new operator)
                ->example: doubleVar = static_cast<double>intVar1/intVar2;

->console i/o : ->cin, cout, cerr; (cerr is used for error messages)

->#include<string> : data type string

-> formatig nunbers in c++ : "magic formual to force decimal sizes, we need to write these 3 line"
                              
                              cout.setf(ios::fixed);
                              cout.setf(ios::showpoint);
                              cout.precision(2); 

->namespaces : --collection of name definition
               --(for now ): "std" has all the standard library definition we need        

->we can specify just the objects we want
  #include<iostream>
  using std::cin;
  using std::cout;

*/

//----------------------------------------//

#include <iostream>
#include <string>
using namespace std;

// sample c++ program;

void sample_cpp()
{
    int numberOfLanguages;

    cout << "Hello reader.\nWelcome to c++\n";
    //(strem insertion operator)

    cout << "How many programming languages have you used?\n";

    cin >> numberOfLanguages;
    //(stream extraction operator)

    if (numberOfLanguages < 1)
        cout << "learning will be slow\n";
    else
        cout << "Enjoy the book\n";
}

// named constants

void named_c()
{
    const double RATE = 5.3;

    double deposit;

    cout << "Enter the amount of deposit : \n";
    cin >> deposit;

    double new_balance;

    new_balance = deposit + deposit * (RATE / 100.0);

    cout << "New balance:" << "$" << new_balance << "\n";
}

// pre and post increment implementation using fuction

int pre_increment(int *i)
{
    *i = *i + 1;
    return *i;
}

int post_increment(int *i)
{
    int b = *i;
    *i = *i + 1;
    return b;
}

// Program to demonstrate cin and cout with strings (we need <string> header for this)

void string_demo()
{
    string dog_name;
    int actual_age;
    int human_age;

    cout << "how many years is your dog\n" << endl;
    cin >> actual_age ;

    human_age = actual_age * 7;
    
    cout << " what is your dog name : \n" << endl;
    cin >> dog_name;

    cout << dog_name << "'s age is approximately equivalent to " << human_age 
        <<" year old human\n" << endl;
}

int main()
{
    string_demo();
}
