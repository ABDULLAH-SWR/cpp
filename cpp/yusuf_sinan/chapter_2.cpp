/*           ..................new c++ stuffs.............................

-> some old stuffs: logical operator ( logical AND (&&)
                                      logical OR  (||)
                                      logical NOT (!)
                                      logical XOR (^^)
                                      )


-> new data type : bool


-> precedence of operator :1. scope resolution operator (::)

                           2. dot oprerator (.)
                           3. array indexing([])
                           4.function call (( ))
                           5.postfix increment (++)
                           6.postfix decrement (--)

                           7.prefix increment (++)
                           8.prefix decrement (--)
                           9.not (!)
                           10.unary minus (-)
                           11.unary plus (+)
                           12.dereference (*)
                           13.adress of (&)
                           14.create/ allocate memory (new)
                           15.deallocate memory (delete)
                           16.destroy array (delete[])
                           17.size of object (sizeof)
                           18.type cast( () )
                           .
                           .
                           .

                           more in book


-> precedence example :
    1. arithmatic before logical;
    2. short circuit evaluation; eg: (x>1)&&(y++) -- here x>1 will be done first if it's true then only right side will be evaluated
    3. prefer boolean over integers : all non zero value = 1, zero value = 0;


-> strong enum/ enum classes: 
            
            -does not act like integers;
            
            example: 

            enum class days {sun, mon, tue, wed, thur, fri};
            enum class weather {rainy, sunny};
            days d = days::sun;
            weather w = weather::rainy;

            we cannot use : if(d == 0)
            we can use : if(d == days::sun)  // its different than what we use in c


-> file handling in c++ : 
    
    opening a text file : 
        at the top  : #include<fstream>

    you can declare an input stream as you would declare a variable : 
        ifstream inputstream;
    
    next you must connect the input stream variable to a text file on the disk :
        inputstream.open("filename.txt");
    
    the filename.txt is a pathname or a file in the current directory
-> 
*/

/*           ...................some terminology.............................

->global functions;

->oop vs structured programming

*/

#include <iostream>
#include<fstream>
#include<string>
using namespace std;


//file input example : 

void file_input() {
    string first,last;
    int score;
    fstream ipstream ;

    ipstream.open("player.txt");

    if(ipstream.is_open()){

    ipstream >> score;
    ipstream >> first >> last;

    cout << "Name : " << first << " " << last << endl;
    cout << "Score : " << score <<endl;

    ipstream.close();}
    else {
        cerr << "File not found \n";
    }
}


int main(){
    file_input();
}
