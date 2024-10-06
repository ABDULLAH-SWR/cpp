/*           ----------------------- new cpp stuffs ---------------------------

-> header : cmath, cstdlib etc;

            there are many predefined functions like
            example : sqrt() (in cmath header)

            cstdlib : contains predefined functions such as --abs(), labs(), fabs() etc.


-> predefined functions :


-> programmer defined fucntions :


-> implementing functions in more than one file : such as , header in one file , implementation in one file , main function in one file;


-> scope rules :


-> global constants / global variables


-> blocks :


-> nested scope
*/

/*           ----------------------- new terminologies ------------------------
-> numerical analysis

-> echo $? (error code)

-> return statement

-> procedural abstraction (information hinding)



*/

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include"header.h"
using namespace std;

// predefined function that returns a value (example)
// computes the size of doghouse that can be purchased given user budget
void function_exm()
{
    const double COST_PER_SQFT = 10.50;
    double area, budget, length_side;

    cout << "Enter the budget : $ ";
    cin >> budget;

    area = budget / COST_PER_SQFT;
    length_side = sqrt(area);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "For your budget of $ " << budget << " " << endl
         << "You can have a doghouse that is " << length_side << " feet on each side \n";
}

void random_num() {
    /*generates 10 random number includes 10*/\
    int i;
    srand(99);
    for(i = 0; i<10; i++) {
        cout << rand()%11 <<endl;
    }
}

void random_weather(){
    int month,date,prediction;
    cout << "welcome to ass weather report : " << endl
         <<"Enter the two digit date:\n";
    cin >> date;
    
    cout << "Enter the month" << endl;
    cin >> month;
    
     srand(date*month);
    char ans;
    cout << "weather for today: \n";
    do{
        prediction = rand()%3;
       // cout << prediction << "\n";
        switch(prediction){
            case 0 : 
                cout <<"Weather is sunny. \n";
                break;
            case 1 : 
                cout << "Weather is cloudy. \n";
                break;
            case 2 : 
                cout << "Weather is rainy. \n";
                break;
            default :
                cout << " The weather program is not working properly\n";
                break;
        }
    cout << "do you want the wether for next day\n";
        cin >> ans;
    }  while(ans == 'y' || ans == 'Y');
    cout << "Thats enough ass weather report for today\n"
        << "See you next time" << endl;
}

// A rounding function : 

int round_float(double num){
    return static_cast<int>(floor(num+.5));
}
 
int main()
{
   cout <<"Sum :" << sum(4,5) << endl
        <<"Substraction :" << subs(4,5) << endl;
    return 0;
}